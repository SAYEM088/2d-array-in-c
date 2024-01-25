#include<stdio.h>
#include<conio.h>
void printStar();
void problemSet(int prblmNum);
int main(){
    // Heading
    printStar();
    printf("    2D Array    ");
    printStar();
    printf("\n Here we will play and see 10 problem and it's solution\n");
    int howManyProb,prblmNum;
    printf("How Many Problem you want to see ? : ");
    scanf("%d",&howManyProb);
    for (int hmp = 0; hmp < howManyProb; hmp++)
    {
        printf("\n Enter a Problem Number (1-10) : ");
        scanf("%d",&prblmNum);
        problemSet(prblmNum);
    }
    
    int size;
    int array[size];

}
void printStar(){

    char star = '*';
    for (int i = 0; i < 8; i++)
    {
        printf(" %c ",star);
    }
}
void problemSet(int prblmNum){
    switch (prblmNum) {
  case 1:
    printf("Monday\n");
    break;
  case 2:
    printf("Tuesday\n");
    break;
  case 3:
    printf("Wednesday\n");
    break;
  case 4:
    printf("Thursday\n");
    break;
  case 5:
    printf("Friday\n");
    break;
  case 6:
    printf("Saturday\n");
    break;
  case 7:
    printf("Sunday\n");
    break;
}
}