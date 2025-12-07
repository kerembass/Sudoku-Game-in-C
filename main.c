#include <stdio.h>
#include <stdlib.h>


//function that enhances the appearance of the sudoku.
void scratchTheBoard(int array[9][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            printf("%d ",array[i][j]);
            if((j+1) % 3 == 0 && j<8){
                printf("| ");
            }
        }
        printf("\n");
        if((i+1) % 3 == 0 && i<8){
            printf("---------------------\n");
        }
    }

}
//Function that checks whether the row,column and box have the same number.
int sudokuControl(int array[9][9],int row, int column,int number){
    int r = row-1;
    int c = column-1;

    for(int i=0;i<9;i++){
        if(array[r][i] == number){
            return 0;
        }
        if(array[i][c] == number){
            return 0;
        }
    }
    int boxStartRow = (r/3)*3;
    int boxStartColumn = (c/3)*3;

    for(int i=boxStartRow;i<boxStartRow+3;i++){
        for(int j=boxStartColumn;j<boxStartColumn;j++){
            if(array[9][9] == number){
                return 0;
            }
        }
    }
    return 1;
}
// function that checks whether the game is over.
int finishControl(int array[9][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(array[i][j] == 0){
                return 0;
            }
        }
    }
    return 1;
}
//main funciton
int main()
{
    int sudokuTable[9][9]={
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
        };

    const int originTable[9][9]={
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
        };

    while(1){
        system("cls"); //Functipn that updates the game in the same table each time.

        scratchTheBoard(sudokuTable);

        //The part that requests rows,columns and numbers from the user.
        int row,column,number;
        printf("Please enter row,column and number values respectively:");
        scanf("%d %d %d", &row, &column, &number);

        //open to end the loop
        if(row == -1){
            break;
        }

        /*The part that checks whether the numbers given
        at the beginning of the game should be overwritten.*/
        if(originTable[row-1][column-1] != 0){
            printf("\n Error: You cannot change fixed numbers!!!\n");
            printf("\n Press any key and enter to continue!");
            char temp;
            scanf(" %c",&temp);
            continue;
        }
        // This part is the part that prints the move if the move is correct.
        if(sudokuControl(sudokuTable,row,column,number) == 1){
            sudokuTable[row-1][column-1] = number;

            //The part that controls the end of the game.
            if(finishControl(sudokuTable) == 1){
                system("cls");
                scratchTheBoard(sudokuTable);
                printf("\n\n***************************************\n");
                printf("    CONGRATULATIONS YOU WON THE GAME     \n");
                printf("***************************************\n");
                break;
            }
        }
        //The part that gives a warning as a result of a wrong move entered.
        else{
            printf("\n WRONG MOVE !!!\n");
            printf("The number %d already exists in this row or column.\n",number);
            printf("Press any key and enter to continue!");
            char temp2;
            scanf(" %c", &temp2);
        }
    }
    return 0;
}
