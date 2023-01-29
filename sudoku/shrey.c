#include <stdio.h>

 int sudoku(){

 printf("   1 2 3 | 4 5 6 | 7 8 9\n");
 printf("\n");
 printf("1  . . 2 | . 1 . | . 7 .\n");
 printf("2  . . 8 | . 7 9 | 2 6 .\n");
 printf("3  . . . | . . 3 | . . 5\n");
 printf("  -------+-------+-------\n");
 printf("4  3 . . | 5 . 6 | . 8 .\n");
 printf("5  . . . | . 4 . | . . .\n");
 printf("6  . 7 . | 8 . 1 | . . 4\n");
 printf("  -------+-------+-------\n");
 printf("7  4 . . | 7 . . | . . .\n");
 printf("8  . 9 5 | 1 6 . | 3 . .\n");
 printf("9  . 2 . | . 5 . | 6 . .\n\n\n");
 }


int main(){
sudoku();
int y=0;
 int r1[9][9]={{0,0,2,0,1,0,0,7,0},
               {0,0,8,0,7,9,2,6,0},
               {0,0,0,0,0,3,0,0,5},
               {3,0,0,5,0,6,0,8,0},
               {0,0,0,0,4,0,0,0,0},
               {0,7,0,8,0,1,0,0,4},
               {4,0,0,7,0,0,0,0,0},
               {0,9,5,1,6,0,3,2,0},
               {0,2,0,0,5,0,6,0,0}};

 int c1[9][9]={{9,3,2,6,1,5,4,7,8},
               {1,5,8,4,7,9,2,6,3},
               {6,4,7,2,8,3,1,9,5},
               {3,1,4,5,9,6,7,8,2},
               {2,8,9,3,4,7,5,1,6},
               {5,7,6,8,2,1,9,3,4},
               {4,6,1,7,3,2,8,5,9},
               {8,9,5,1,6,4,3,2,7},
               {7,2,3,9,5,8,6,4,1}};

int l,l1,p;
while (1){
printf("enter your position of the guess(row,column)==");
scanf ("%d %d",&p,&l);
printf("enter your answer==");
scanf ("%d",&l1);
switch (p){
case 1:
        if (l1==c1[p-1][l-1]){
        y+=1;
        r1[p-1][l-1]=c1[p-1][l-1];
        printf("correct answer\n");
         for(int i=0; i<9; i++) {
    for(int j=0; j<9; j++) {
        if (r1[i][j]==0) printf(". ");
        else printf("%d ", r1[i][j]);
        if (((j+1)%3==0)&j<8) printf("| ");
    }
    printf("\n");
    if (((i+1)%3==0)&(i<8)){
    printf("------+-------+-------\n");}
  }}
        break;
    case 2:
        if (l1==c1[p-1][l-1]){
        y+=1;
        r1[p-1][l-1]=c1[p-1][l-1];
        printf("correct answer\n");
         for(int i=0; i<9; i++) {
    for(int j=0; j<9; j++) {
        if (r1[i][j]==0) printf(". ");
        else printf("%d ", r1[i][j]);
        if (((j+1)%3==0)&j<8) printf("| ");
    }
    printf("\n");
    if (((i+1)%3==0)&(i<8)){
    printf("------+-------+-------\n");}
  }}
        break;
    case 3:
        if (l1==c1[p-1][l-1]){
        y+=1;
        r1[p-1][l-1]=c1[p-1][l-1];
        printf("correct answer\n");
         for(int i=0; i<9; i++) {
    for(int j=0; j<9; j++) {
        if (r1[i][j]==0) printf(". ");
        else printf("%d ", r1[i][j]);
        if (((j+1)%3==0)&j<8) printf("| ");
    }
    printf("\n");
    if (((i+1)%3==0)&(i<8)){
    printf("------+-------+-------\n");}
  }}
        break;
    case 4:
        if (l1==c1[p-1][l-1]){
        y+=1;
        r1[p-1][l-1]=c1[p-1][l-1];
        printf("correct answer\n");
         for(int i=0; i<9; i++) {
    for(int j=0; j<9; j++) {
        if (r1[i][j]==0) printf(". ");
        else printf("%d ", r1[i][j]);
        if (((j+1)%3==0)&j<8) printf("| ");
    }
    printf("\n");
    if (((i+1)%3==0)&(i<8)){
    printf("------+-------+-------\n");}
  }}
        break;
    case 5:
        if (l1==c1[p-1][l-1]){
        y+=1;
        r1[p-1][l-1]=c1[p-1][l-1];
        printf("correct answer\n");
         for(int i=0; i<9; i++) {
    for(int j=0; j<9; j++) {
        if (r1[i][j]==0) printf(". ");
        else printf("%d ", r1[i][j]);
        if (((j+1)%3==0)&j<8) printf("| ");
    }
    printf("\n");
    if (((i+1)%3==0)&(i<8)){
    printf("------+-------+-------\n");}
  }}
        break;
    case 6:
        if (l1==c1[p-1][l-1]){
        y+=1;
        r1[p-1][l-1]=c1[p-1][l-1];
        printf("correct answer\n");
         for(int i=0; i<9; i++) {
    for(int j=0; j<9; j++) {
        if (r1[i][j]==0) printf(". ");
        else printf("%d ", r1[i][j]);
        if (((j+1)%3==0)&j<8) printf("| ");
    }
    printf("\n");
    if (((i+1)%3==0)&(i<8)){
    printf("------+-------+-------\n");}
  }}
        break;
    case 7:
        if (l1==c1[p-1][l-1]){
        y+=1;
        r1[p-1][l-1]=c1[p-1][l-1];
        printf("correct answer\n");
         for(int i=0; i<9; i++) {
    for(int j=0; j<9; j++) {
        if (r1[i][j]==0) printf(". ");
        else printf("%d ", r1[i][j]);
        if (((j+1)%3==0)&j<8) printf("| ");
    }
    printf("\n");
    if (((i+1)%3==0)&(i<8)){
    printf("------+-------+-------\n");}
  }}
        break;
    case 8:
        if (l1==c1[p-1][l-1]){
        y+=1;
        r1[p-1][l-1]=c1[p-1][l-1];
        printf("correct answer\n");
         for(int i=0; i<9; i++) {
    for(int j=0; j<9; j++) {
        if (r1[i][j]==0) printf(". ");
        else printf("%d ", r1[i][j]);
        if (((j+1)%3==0)&j<8) printf("| ");
    }
    printf("\n");
    if (((i+1)%3==0)&(i<8)){
    printf("------+-------+-------\n");}
  }}
        break;
    case 9:
        if (l1==c1[p-1][l-1]){
        y+=1;
        r1[p-1][l-1]=c1[p-1][l-1];
        printf("correct answer\n");
         for(int i=0; i<9; i++) {
    for(int j=0; j<9; j++) {
        if (r1[i][j]==0) printf(". ");
        else printf("%d ", r1[i][j]);
        if (((j+1)%3==0)&j<8) printf("| ");
    }
    printf("\n");
    if (((i+1)%3==0)&(i<8)){
    printf("------+-------+-------\n");}
  }}
        break;
    }
    if (y>=52){
    printf("#####GAME OVER YOU WON#####");
     break;}

}
}

