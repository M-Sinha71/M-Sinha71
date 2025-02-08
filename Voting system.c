#include<stdio.h>
#include<string.h>

#define max_candidates 5
//Structure to store candidate details
typedef struct candidate{
char name[50];
int votes;
}candidate;

//function declarations
void displayCandidates (candidate candidates[], int numCandidates);
void collectVotes(candidate candidates[],int numCandidates,int numVoters);
void displayResults(candidate candidates[], int numCandidates);

void main()
{
  candidate candidates[max_candiadtes];
int numCandidates=0;
int numVoters=0;
int i;

printf("Enter the number of candidates(max %d):",max_candidates);
scanf("%d",&numCandidates);
if(numCandidates<2||numCandidates>max_candidates){
printf("invalid number of candidates, please enter a number b/w 2")}

for(i=0;i<numCandidates;i++)
{
printf("Enter the name of candidate %d:",i+1);
scanf("%s",candidates[i].name);
candidates[i].votes=0;     //initialize votes to 0
}
printf("Enter number of voters:");
scanf("%d",&numVoters);

//collect votes from voters
collectvotes(candidates,numCandidates,numVoters);

//display results
displayResults(candidates,numCandidates,numVoters);
getch();
}

//function to display all candidates
void displayCandidates(candidate candidates[],int numCandidates,int numVoters)
{ int choice, i;
for(i=0;i<numVoters;i++)
{  
displayCandidates(candidates, numCandidates);
printf("Enter %d, enter your choice(1-%d):",i+1,numCandidates);
scanf("%d",&choice);
}  

//function to display the voting results
void displayResults(candidate candidates[],int numCandidates)
{
  int maxVotes= -1;
  int winnerIndex= -1;
  int tiecount=0;
  int i,j;
  printf("\n---------Results----------\n");

//find the candidate with the maximum votes
for(i=0;i<numCandidates;i++)
{ 
printf(""%s %d votes \n",Candidates[i].name,candidate[i].votes);
  if(candidates[i].votes>maxVotes)
  {
  maxVotes=candidates[i].votes;
  winnerIndex=i;
  tiecount=1;
  }  
else if(candidates[i].votes==maxVotes)
{  
 tiecount++;
} } 

//display the winners or a tie
if(tiecount==1){
printf("%s  %d votes\n",candidates[i].name,candidates[i].votes);
if(candidates[i].votes>maxVotes)
{  
maxVotes=candidates[i].votes;
winnerIndex=i;
tiecount=1;
}  
else if(candidates[i].votes==maxvotes)
{  
tiecount++;
}}
//display the winner or a tie
if(tiecount==1)
{
printf("\n Winner:%s with %d votes!\n",candidates[winnerIndex].name,candidates[i].votes)
  }
else
{
printf("\n No winner, it's a tie\n");
}
}

