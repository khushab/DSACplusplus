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


    return 0;
}