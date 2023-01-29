#include<stdio.h>
#include<string.h>
#include<stdio.h>
int hangman(int x){
if(x==0){
printf("__________________\n");
printf("\t|\n");
printf("\t|\n");
printf("     ________\n");
printf("    |        |\n");
printf("    |        |\n");
printf("    |        |\n");
printf("    |________|\n");
printf("\t|\n");
printf("       /|\\\n");
printf("      / | \\\n");
printf("     /  |  \\\n");
printf("    /   |   \\\n");
printf("\t|\n");
printf("       / \\\n");
printf("      /   \\\n");
printf("     /     \\\n");
printf("    /       \\\n");
}
else if(x==1){
printf("__________________\n");
printf("\t|\n");
printf("\t|\n");
printf("     ________\n");
printf("    |        |\n");
printf("    |        |\n");
printf("    |        |\n");
printf("    |________|\n");
printf("\t|\n");
printf("       /|\\\n");
printf("      / | \\\n");
printf("     /  |  \\\n");
printf("    /   |   \\\n");
printf("\t|\n");
printf("         \\\n");
printf("          \\\n");
printf("           \\\n");
printf("            \\\n");
}

else if(x==2){
printf("__________________\n");
printf("\t|\n");
printf("\t|\n");
printf("     ________\n");
printf("    |        |\n");
printf("    |        |\n");
printf("    |        |\n");
printf("    |________|\n");
printf("\t|\n");
printf("       /|\\\n");
printf("      / | \\\n");
printf("     /  |  \\\n");
printf("    /   |   \\\n");
printf("\t|\n");
}

else if(x==3){
printf("__________________\n");
printf("\t|\n");
printf("\t|\n");
printf("     ________\n");
printf("    |        |\n");
printf("    |        |\n");
printf("    |        |\n");
printf("    |________|\n");
printf("\t|\n");
printf("       /|\n");
printf("      / | \n");
printf("     /  |  \n");
printf("    /   |   \n");
printf("\t|\n");
}

else if(x==4){
printf("__________________\n");
printf("\t|\n");
printf("\t|\n");
printf("     ________\n");
printf("    |        |\n");
printf("    |        |\n");
printf("    |        |\n");
printf("    |________|\n");
printf("\t|\n");
printf("        |\n");
printf("        | \n");
printf("        |  \n");
printf("        |   \n");
printf("\t|\n");
}

else if(x==5){
printf("__________________\n");
printf("\t|\n");
printf("\t|\n");
printf("     ________\n");
printf("    |        |\n");
printf("    |        |\n");
printf("    |        |\n");
printf("    |________|\n");}
else if(x==6){
printf("__________________\n");
printf("\t|\n");
printf("\t|\n");
printf("\n");

printf(" ___               __     __          __  __ \n");
printf("|      /\\  |\\  /| |      |  | \\    / |   |  |  \n");
printf("|  _  /__\\ | \\/ | |--    |  |  \\  /  |-- |--\\  \n");
printf("|__| /    \\|    | |__    |__|   \\/   |__ |   \\ \n");

}
return 0;}

int main(){
    char word[100],hint[100];
    printf("Enter a word : ");
    scanf("%s",word);
    printf("Enter a hint : ");
    scanf("%s",hint);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    int size=0;
    char guess[100];
    for(int i=0;word[i]!='\0';i++){
        size+=1;
    }
    printf("You will have 6 guesses till hangman dies .\n" );
    hangman(0);
    printf("Your hint is : %s\n",hint);
    for(int j=0;j<size;j++){
        printf("_");
    }
    printf("\n");
    int x;
    if(size>6){
        x=size;
    }
    else{
        x=6;
    }
    char g[100];
    for(int i=0;i<size;i++){
        g[i]='_';
    }
    int count=0;
    int flag=0;
    int incorrect=0;
    for(int i=0;i<size+6;i++){
        if(strcmp(g,word)==0 || incorrect==6){
            break;
        }
        else{
        printf("Enter Guess : ");
        scanf("%s",&guess[i]);
        for(int j=0;word[j]!='\0';j++){
            if(guess[i]==word[j]){
                g[j]=guess[i];
                flag=1;
            }
        }
        if(flag==0){
            incorrect+=1;
        }
        hangman(incorrect);
        printf("\n");
        printf("%s",g);
        printf("\n");
        }
        count=0;
        flag=0;
    }

    return 0;
}



