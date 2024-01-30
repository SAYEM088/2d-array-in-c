#include <stdio.h>
#include <stdlib.h>
int takeArray(int x);
int problem1(int size1, int size2, int array[][size2]);
int problem2(int size1, int size2, int array[][size2]);
int problem3(int size1, int size2, int array[][size2]);
int problem4(int size1, int size2, int array[][size2]);
int problem5(int size1, int size2, int array[][size2]);
int problem6(int size1, int size2, int array[][size2]);
int problem7(int size1, int size2, int array[][size2]);
int problem8(int size1, int size2, int array[][size2]);
int problem9(int size1, int size2, int array[][size2]);
int problem10(int size1, int size2, int array[][size2]);
void printStar();
void problemSet(int prblmNum);
void main()
{
  // Heading
  printStar();

  printf("\nHere We will play and see 10 problems and it's solution\n");
  int howManyProb, prblmNum;
  printf("How many problem do you want to solve ? : ");
  scanf("%d", &howManyProb);
  if (howManyProb > 10)
  {
    printf("Please Your Entered  Number is not Valid and Run Again !!\n");
    exit(0);
  }
  printf("\n");
  for (int hmp = 0; hmp < howManyProb; hmp++)
  {
    printf("\nEnter the Problem Number (1-10) : ");
    scanf("%d", &prblmNum);
    if (prblmNum > 10)
    {
      printf("Please Your Entered  Number is not Valid and Run Again !!\n");
      exit(0);
    }
    problemSet(prblmNum);
  }
}
void printStar()
{
  int rows = 5;
  int cols = 10;
  for (int i = 1; i <= rows; i++)
  {
    for (int j = 1; j <= cols; j++)
    {
      if (i == 1 || i == rows || j == 1 || j == cols)
      {
        printf("* ");
      }
      else if (i == 3 && j >= 3 && j <= 8)
      {

        printf("%c ", "2d ARR"[j - 3]);
      }
      else
      {
        printf("  ");
      }
    }
    printf("\n");
  }
}

void problemSet(int prblmNum)
{
  switch (prblmNum)
  {
  case 1:
    printf("Problem 1: sum and product of all elements\n");
    takeArray(1);
    break;
  case 2:
    printf("Problem 2: Transpose a Matrix\n");
    takeArray(2);
    break;
  case 3:
    printf("Problem 3: Lower Diagonal Matrix\n");
    takeArray(3);
    break;
  case 4:
    printf("Problem 4:(Sorting) Row element Ascending Order\n");
    takeArray(4);
    break;
  case 5:
    printf("Problem 5:(Sorting) Column Ascending Order\n");
    takeArray(5);
    break;
  case 6:
    printf("Problem 6: Trace Of Matrix\n");
    takeArray(6);
    break;
  case 7:
    printf("Problem 7: (frequency) total Even number in matrix\n");
    takeArray(7);
    break;
  case 8:
    printf("Problem 8:Interchange the rows\n");
    takeArray(8);
    break;
  case 9:
    printf("Problem 9:Spiral Matrix\n");
    takeArray(9);
    break;
  case 10:
    printf("Problem 10:Print diagonals\n");
    takeArray(10);
    break;
  }
}
int takeArray(int x)
{
  printf("\n Enter The 2 size of your 2D array : ");
  int size1, size2;
  scanf("%d %d", &size1, &size2);
  int array[size1][size2];
  for (int i = 0; i < size1; i++)
  {
    for (int j = 0; j < size2; j++)
    {
      printf("Enter element [%d,%d] : ", i + 1, j + 1);
      scanf("%d", &array[i][j]);
      // scanf("%d", *(array+i)j); it's a pointer notaion. and &* cancel each other.
    }
  }
  switch (x)
  {
  case 1:
    problem1(size1, size2, array);
    break;
  case 2:
    problem2(size1, size2, array);
    break;
  case 3:
    problem3(size1, size2, array);
    break;
  case 4:
    problem4(size1, size2, array);
    break;
  case 5:
    problem5(size1, size2, array);
    break;
  case 6:
    problem6(size1, size2, array);
    break;
  case 7:
    problem7(size1, size2, array);
    break;
  case 8:
    problem8(size1, size2, array);
    break;
  case 9:
    problem9(size1, size2, array);
    break;
  case 10:
    problem10(size1, size2, array);
    break;
  }
}
int problem1(int size1, int size2, int array[][size2])
{
  int sum = 0;
  int product = 1;
  for (int i = 0; i < size1; i++)
  {
    for (int j = 0; j < size2; j++)
    {
      sum += array[i][j];
      product *= array[i][j];
    }
  }
  printf("Sum is %d \nProduct is %d\n", sum, product);
}
int problem2(int size1, int size2, int array[][size2])
{
  for (int i = 0; i < size1; i++)
  {
    for (int j = 0; j < size2; j++)
    {
      printf("%d ", array[j][i]);
    }
    printf("\n");
  }
}
int problem3(int size1, int size2, int array[][size2])
{
  for (int i = 0; i < size1; i++)
  {
    for (int j = 0; j < size2; j++)
    {
      if (i >= j)
      {
        printf("%d ", array[i][j]);
      }

      else
      {
        printf("%d ", 0);
      }
    }
    printf("\n");
  }
}
int problem4(int size1, int size2, int array[][size2])
{
      for (int i = 0; i < size1 - 1; i++) {
        for (int j = 0; j < size1 - i - 1; j++) {
            if (array[j][0] > array[j + 1][0]) {
                // Swap rows
                for (int k = 0; k < size2; k++) {
                    int temp = array[j][k];
                    array[j][k] = array[j + 1][k];
                    array[j + 1][k] = temp;
                }
            }
        }
    }
     printf("\nSorted Matrix (Row):\n");
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}
int problem5(int size1, int size2, int array[][size2])
{
  for (int i = 0; i < size2 - 1; i++) {
        for (int j = 0; j < size2 - i - 1; j++) {
            if (array[0][j] > array[0][j + 1]) {
                // Swap columns
                for (int k = 0; k < size1; k++) {
                    int temp = array[k][j];
                    array[k][j] = array[k][j + 1];
                    array[k][j + 1] = temp;
                }
            }
        }
    }

    // Display the sorted matrix
    printf("\nSorted Matrix:\n");
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}
int problem6(int size1, int size2, int array[][size2])
{
}
int problem7(int size1, int size2, int array[][size2])
{
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
int problem8(int size1, int size2, int array[][size2])
{
}
int problem9(int size1, int size2, int array[][size2])
{
}
int problem10(int size1, int size2, int array[][size2])
{
  if (size1 == size2)
  {

    for (int i = 0; i < size1; i++)
    {
      for (int j = 0; j < size2; j++)
      {

        if (i == j)
          printf("%d\t", array[j][i]);
        else
          printf("\t");
      }
      printf("\n");
    }
  }
  else
  {
    printf("\nMatrix is not a Square Matrix.");
  }
}
