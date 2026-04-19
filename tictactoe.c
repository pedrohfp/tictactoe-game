#include <stdio.h>
#include <string.h>

void choiceOfXOrCircle();
void printPlayerChoices();

char firstPlayerChoice[10];
char secondPlayerChoice[10];

int main() 
{
    choiceOfXOrCircle();
    return 0;
}

void choiceOfXOrCircle() 
{
    printf("First player: X or O?\n");

    if(fgets(firstPlayerChoice, sizeof firstPlayerChoice, stdin) != NULL) 
    {
        size_t len = strlen(firstPlayerChoice);
        if (len > 0 && firstPlayerChoice[len-1] == '\n') firstPlayerChoice[len-1] = '\0'; // remove '\n'
        
        if(firstPlayerChoice[0] == 'X' || firstPlayerChoice[0] == 'x') 
        {
            secondPlayerChoice[0] = 'O';
            printPlayerChoices();
        } else if(firstPlayerChoice[0] == 'O' || firstPlayerChoice[0] == 'o') 
        {   
            secondPlayerChoice[0] = 'X';
            printPlayerChoices();
        } else {
            printf("Invalid option. Type X or O\n");
            choiceOfXOrCircle();
        }
    }
}

void printPlayerChoices() 
{
    printf("First player choice is: %s\n", firstPlayerChoice);
    printf("Second player choices is: %s\n", secondPlayerChoice);
}