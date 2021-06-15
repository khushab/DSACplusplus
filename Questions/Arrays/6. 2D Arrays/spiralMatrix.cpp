#include<bits/stdc++.h>
using namespace std;

int main() 
{   
    int row, col;
    cout<<"Enter the number of rows\n";
    cin>>row;
    cout<<"Enter the number of colums\n";
    cin>>col;

    int arr[row][col];

    cout<<"Enter the elements\n";
    
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Printing the Array...\n";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int top = 0;
    int left = 0;
    int right = col -1;
    int bottom = row -1;
    
    while (left<=right && top<=bottom)
    {
        for(int i=left; i<=right; i++){
            cout<<arr[top][i]<<" ";
        }
        top++;
        
        for(int i=top; i<=bottom; i++ )
        {
            cout<<arr[i][right]<<" ";
        }
        right--;

        if(top<=bottom){
            for(int i=right; i>=left; i--)
            {
                cout<<arr[bottom][i]<<" ";
            }
            bottom--;
        }

        if(left<=right){
            for(int i=bottom; i>=top; i--)
            {
                cout<<arr[i][left]<<" ";
            }
            left++;
        }
    }
    




    return 0;
}