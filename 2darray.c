#include<stdio.h>
#include<conio.h>
void printStar();
void problemSet(int prblmNum);
int problem1();
int problem2();
int problem3();
int problem4();
int problem5();
int problem6();
int problem7();
int problem8();
int problem9();
int problem10();
void main(){
    // Heading
    printStar();
    printf("    2D Array    ");
    printStar();
    printf("\n Here we will play and see 10 problem and it's solution\n");
    int howManyProb,prblmNum;
    printf("How many problem do you want to solve ? : ");
    scanf("%d",&howManyProb);
      if (howManyProb >10)
        {
          printf("Please Your Entered  Number is not Valid and Run Again !!");
          return ;
        }
    printf("\n");
    for (int hmp = 0; hmp < howManyProb; hmp++)
    {
        printf(" Enter a Problem Number (1-10) : ");
        scanf("%d",&prblmNum);
          if (prblmNum >10)
        {
          printf("Please Your Entered  Number is not Valid and Run Again !!");
          return ;
        }
        problemSet(prblmNum);
        
    }
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
    printf("Problem 1: sum and subtraction of two matrices\n");
    break;
  case 2:
    printf("Problem 2: Transpose a Matrix\n");
    problem2();
    break;
  case 3:
    printf("Problem 3: Lower Diagonal Matrix\n");
    break;
  case 4:
    printf("Problem 4:(Sorting) Row element Ascending Order\n");
    break;
  case 5:
    printf("Problem 5:(Sorting) Column Ascending Order\n");
    break;
  case 6:
    printf("Problem 6: Trace Of Matrix\n");
    break;
  case 7:
  printf("Problem 7: (frequency) total Even number in matrix");
   problem7();
    break;
  case 8:
    printf("Problem 8:check an identity matrix\n");
    break;
  case 9:
    printf("Problem 8:check an identity matrix\n");
    break;
  case 10:
    printf("Problem 8:check an identity matrix\n");
    break;
}
}

int problem7(){
  printf("\n Enter The 2 size of your 2D array :\n");
    int size1,size2;
    scanf("%d %d",&size1,&size2);
    int array[size1][size2];
    for (int i = 0; i < size1; i++)
    {
      for (int j = 0; j < size2; j++)
      {
        printf("Enter element [%d,%d] : ",i+1,j+1);
        scanf("%d",& array[i][j]);
        // scanf("%d", *(array+i)j); it's a pointer notaion. and &* cancel each other.
      }
    }
    int evenFrequency =0;
    for (int i = 0; i < size1; i++)
    {
      for (int j = 0; j < size2; j++)
      {
        if (array[i][j]%2==0)
        {
          evenFrequency++;
        }
        
      }
    }
    printf("Total Even Number is : %d ",evenFrequency);
    
}
int problem2(){
  printf("\n Enter The 2 size of your 2D array :\n");
    int size1,size2;
    scanf("%d %d",&size1,&size2);
    int array[size1][size2];
    for (int i = 0; i < size1; i++)
    {
      for (int j = 0; j < size2; j++)
      {
        printf("Enter element [%d,%d] : ",i+1,j+1);
        scanf("%d",& array[i][j]);
      }
    }
    for (int i = 0; i < size1; i++)
    {
      for (int j = 0; j < size2; j++)
      {
        printf("%d ",array[j][i]);
      }
      printf("\n");
    }
}
int problem3(){
  int size1,size2;
    scanf("%d %d",&size1,&size2);
    int array[size1][size2];
    for (int i = 0; i < size1; i++)
    {
      for (int j = 0; j < size2; j++)
      {
        printf("Enter element [%d,%d] : ",i+1,j+1);
        scanf("%d",& array[i][j]);
      }
    }
  
}
int problem4(){
int size1,size2;
    scanf("%d %d",&size1,&size2);
    int array[size1][size2];
    for (int i = 0; i < size1; i++)
    {
      for (int j = 0; j < size2; j++)
      {
        printf("Enter element [%d,%d] : ",i+1,j+1);
        scanf("%d",& array[i][j]);
      }
    }
}
int problem5(){
int size1,size2;
    scanf("%d %d",&size1,&size2);
    int array[size1][size2];
    for (int i = 0; i < size1; i++)
    {
      for (int j = 0; j < size2; j++)
      {
        printf("Enter element [%d,%d] : ",i+1,j+1);
        scanf("%d",& array[i][j]);
      }
    }
}
int problem6(){
int size1,size2;
    scanf("%d %d",&size1,&size2);
    int array[size1][size2];
    for (int i = 0; i < size1; i++)
    {
      for (int j = 0; j < size2; j++)
      {
        printf("Enter element [%d,%d] : ",i+1,j+1);
        scanf("%d",& array[i][j]);
      }
    }
}
int problem1(){
int size1,size2;
    scanf("%d %d",&size1,&size2);
    int array[size1][size2];
    for (int i = 0; i < size1; i++)
    {
      for (int j = 0; j < size2; j++)
      {
        printf("Enter element [%d,%d] : ",i+1,j+1);
        scanf("%d",& array[i][j]);
      }
    }
}
int problem8(){
int size1,size2;
    scanf("%d %d",&size1,&size2);
    int array[size1][size2];
    for (int i = 0; i < size1; i++)
    {
      for (int j = 0; j < size2; j++)
      {
        printf("Enter element [%d,%d] : ",i+1,j+1);
        scanf("%d",& array[i][j]);
      }
    }
}
int problem9(){
int size1,size2;
    scanf("%d %d",&size1,&size2);
    int array[size1][size2];
    for (int i = 0; i < size1; i++)
    {
      for (int j = 0; j < size2; j++)
      {
        printf("Enter element [%d,%d] : ",i+1,j+1);
        scanf("%d",& array[i][j]);
      }
    }
}
int problem10(){
int size1,size2;
    scanf("%d %d",&size1,&size2);
    int array[size1][size2];
    for (int i = 0; i < size1; i++)
    {
      for (int j = 0; j < size2; j++)
      {
        printf("Enter element [%d,%d] : ",i+1,j+1);
        scanf("%d",& array[i][j]);
      }
    }
}