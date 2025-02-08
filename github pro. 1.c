#include<stdio.h>
#include<conio.h>
#include<string.h>

struct question{         //Structure to store questions and answers
char question[100];
char answer[50];
};

void show_menu();  //shows menu
void start_quiz(); //start the quiz when choice is 1
void show_instruction();  //shows instructions for the quiz

int main()
{
    int choice;    //choose whether to start quiz or to show menu or instructions

    do{
        show_menu();
        printf("Enter your choice");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            start_quiz();    //shows questions and give scores
            break;
        case 2:
            show_instruction();
            break;
        case 3:
            printf("exiting the game here \n");
            break;
        default:
            printf("Invalid choice!\n");}
        }
        while(choice!=3);   //take the input for choice again
        return 0;
    }


    void show_menu(){        //menu for choices to enter
    printf("*********************\n");
    printf("   Quiz Game   \n");
    printf("1.   Start Quiz \n");    //at choice=1
    printf("2.   Instructions \n");  //at choice=2
    printf("3.   Exit the quiz \n"); //at choice=3
    printf("*********************\n");}

    void start_quiz()
    {
        struct question quiz[3]={{"What is the capital of France?","Paris"},{"What is 5+7?","12"},{"What is the square of 3?","9"}};

        //3 questions along with answers
        int i,score=0;
        char user_ans[50];
        for(i=0;i<3;i++)
        {
            printf("%s\n",quiz[i].question);
            scanf("%s",user_ans);
            if(strcmp(user_ans,quiz[i].answer)==0)
                //compare actual answer with user input
            {
                printf("correct answer!\n");
                score++;    //increment score when answer is correct
            }
            else
            {
                printf("incorrect the correct answer is %s\n",quiz[i].answer);
            }
        }

        printf("You get %d out of 3 questions correct \n",score);

        if(score==3)
        {
            printf("excellent!\n");
        }
        else if(score==2)
        {
            printf("good!\n");
        }
        else
        {
            printf("better luck next time \n");
        }
    }
   //instructions for the game
   void show_instruction()
   {
       printf("1.  You will be asked 3 questions \n");
       printf("2.  Type answers and then enter \n");
       printf("3.  Score will be displayed at the end\n");
       printf("4.  To exit, Enter 3 as choice\n");
   }
