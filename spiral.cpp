#include<iostream>
using namespace std;
int i,j;
int main(){
    int row,col;
    cin>>row>>col;
    int array[row][col];
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            cin>>array[i][j];
        }
        
    }
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            cout<<array[i][j];
        }
        cout<<endl;
    }
    int top= 0,bottom=row-1,left=0,right=col-1;
    while(top<=bottom && left<=right){
        for ( i = left; i <= right; i++)
        {
            cout<<array[top][i];
        }
        top++;
        for ( i = top; i <=bottom; i++)
        {
            cout<<array[i][right];
        }
        right--;
        if (top<=bottom)
        {
            for ( i = right; i >=left ; i--)
            {
                cout<<array[bottom][i];
            }
            bottom--;
        }
        if (left<=right)
        {
            for ( i = bottom ; i >=top; i--)
            {
                cout<<array[i][left];
            }
            left++;
        }
        
    }
}