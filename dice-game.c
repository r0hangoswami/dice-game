#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<time.h>


void rollDice()
{
    srand (time(NULL));  // Randomize the seed with time, otherwise there will be always the same random sequence
    int dice_1 = rand()%6 +1;
    int dice_2 = rand()%6 +1;
    int dice_3 = rand()%6 +1;
    int firstTotal = dice_1 + dice_2 + dice_3;
    char nextRoll;

    printf("\nYOU ROLLED THREE DICE:\n");
    printf("Dice1: %d\n", dice_1);
    printf("Dice2: %d\n", dice_2);
    printf("Dice3: %d\n", dice_3);
    printf("Total sum of the three dice: %d\n", firstTotal);

    printf("Is next roll going to be higher, lower or the same? ('h','l','s')? : \n");
    scanf(" %c", &nextRoll);
    nextRoll = toupper(nextRoll);


    dice_1 = rand()%6 +1;
    dice_2 = rand()%6 +1;
    dice_3 = rand()%6 +1;
    int secondTotal = dice_1 + dice_2 + dice_3;

    printf("\nYOU ROLLED THREE DICE AGAIN:\n");
    printf("Dice 1: %d\n",dice_1 );
    printf("Dice 2: %d\n",dice_2 );
    printf("Dice 3: %d\n",dice_3 );
    printf("New Total sum of the three dice: %d\n\n", secondTotal);

    if((nextRoll=='H'&& secondTotal>firstTotal)||(nextRoll=='S'&& secondTotal==firstTotal)||(nextRoll=='L'&& secondTotal<firstTotal))
     {
        printf("You are winner!\n\n");
        return;
    }
    else{
        printf("Sorry, you lost!\n\n");       
        return;
    }
}
int main()
{
    char roll;
    
    system("clear");
    printf(" Dice rolling Game\n");
    printf("~~************~~\n\n");
   
    printf("Roll the dice? (y/n)? : ");
    scanf("%c", &roll);
    roll = toupper(roll);

    if (roll == 'Y')
    {
        rollDice();
    }

    else 
    {
        printf("Goodbye!\n");
    }
    return 0;
}
