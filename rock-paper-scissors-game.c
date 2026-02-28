#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
// Function to convert input string to lowercase starts from here
void conversion_to_lowercase(char str[])
{
    for (int i = 0; str[i]; i++)
    {
        str[i] = tolower(str[i]);
    }
}
// Function to convert input string to lowercase ends here

// Function to decide each round reslut starts from here
void round_result(char str[], int *win, int *lose, int *draw, int random, char *choice[])
{
    if ((strcmp(str, "paper") == 0 && strcmp(choice[random], "rock") == 0) ||
        (strcmp(str, "rock") == 0 && strcmp(choice[random], "scissors") == 0) ||
        (strcmp(str, "scissors") == 0 && strcmp(choice[random], "paper") == 0))
    {
        printf("Result: You Win \n\n");
        (*win)++;
    }

    else if (strcmp(str, choice[random]) == 0)
    {
        printf("Result: Draw \n");
        (*draw)++;
    }

    else
    {
        printf("Result: You Lose \n");
        (*lose)++;
    }
}
// Function to decide each round ends here

// Function to decide final result starts from here
void final_result(char name_of_user[] ,int win, int lose , int draw)
{
    printf("Final Result:\n");
    printf("%s Score: %d\n", name_of_user , win);
    printf("Computer Score: %d\n", lose);
    printf("Draw: %d\n", draw);
    if (win > lose)
        printf("\nOverall Winner: %s" , name_of_user);
        else if (lose > win)
        printf("\nOverall Winner: Computer");
    else
        printf("\nOverall Winner: Draw:\n");
}
// Function to decide final result ends here

// Main function starts from here
int main()
{
    int rounds;
    int random, lose = 0, win = 0, draw = 0;
    char user_choice[10];
    char name_of_user[20];
    char *choice[] = {"rock","paper",  "scissors"};

    // Asking for user_name
    printf("Enter your name: ");
    scanf("%s", name_of_user);
    // Asking for number of rounds
    printf("Enter number of rounds: ");
    scanf("%d", &rounds);

    srand(time(NULL));

    for (int i = 1; i <= rounds; i++)
    {
        random = rand() % 3;

        printf("\n--- Round %d ---\n", i);

        while (1)
        {
            /* code */
            printf("Enter your choice (rock, paper or scissors):\n");
            printf("%s chose: ", name_of_user);
            scanf("%s", user_choice);

            // "conversion_to_lowercase" function call
            conversion_to_lowercase(user_choice);

            
            if (strcmp(user_choice, "paper") == 0 ||
            strcmp(user_choice, "rock") == 0 ||
            strcmp(user_choice, "scissors") == 0)
            {
                break;
            }
            printf("Invalid input. Enter rock, paper or scissors\n\n");
        }
        printf("Computer chose: %s\n", choice[random]);

        // "round_result " function call
        round_result(user_choice, &win, &lose, &draw, random, choice);
    }
    //" final_result" function call
    final_result( name_of_user ,win, lose , draw);

    return 0;
}
