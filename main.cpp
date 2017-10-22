
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iomanip>
#include <iostream>
using namespace std;

int main(){
   double arr[5][5];
    double i , j , n=5, temp;
    for (int i = 0; i < n ; i++){
        for (int j = 0; j < n ; j++) {
            cout << "Enter a new element of array [" <<  i + 1 << ";" << j + 1 << "]" ;
            cout << endl ;
            cin >> arr[i][j];
        }
    }
    cout << "Unsorted array:" << endl;
    for (int i = 0; i < n ; i++){
        for (int j = 0; j < n ; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < n; i++)
        for(int a = 0; a < n; a++)
            for(int j = 0; j < n-1; j++)
            {
                if (arr[i][j] < arr[i][j + 1])
                {
                    temp = arr[i][j];
                    arr[i][j] = arr[i][j + 1];
                    arr[i][j + 1] = temp;
                }
            }
    cout << endl << "Sorted array:" << endl;
    for (int i = 0; i < n ; i++){
        for (int j = 0; j < n ; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
   double sum=0 ;
    double numOfEllnCol = n ;
    for (int j=0 ; j < n ; j++){
        for (int i = j ; i < n ; i++){
            sum += arr[i][j];
        }
        cout << "Sum of " << j+1 << "colon:" << sum ;
        cout << endl ;
        cout << "Average of colon " << sum/numOfEllnCol;
        cout << endl ;
        sum = 0 ;
        numOfEllnCol--;
    }
    
    
    system("PAUSE");
  
}
