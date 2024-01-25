#include<stdio.h>
#include<conio.h>
void printStar();
int main(){
    printStar();
    printf("    2D Array    ");
    printStar();
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