#include<iostream>
using namespace std;

 void SelectionSort(int A[],int size){

     for (int i = 0; i < size-1; i++)
     {
         int imin = i;
         for (int j = i+1; j < size; j++)
         {
             if (A[j]<A[imin])
             {
                 imin = j;
             }  
         } 
         if (imin !=i)
             {
             int temp = A[i];
             A[i] = A[imin];
             A[imin] = temp;
             } 
     }  
}
 
int main(){

    int A[] = {22, 4, 7, 99, 2, 20};

    int size = sizeof(A) / sizeof A[0];

    cout << "unsorted\n";
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }

    SelectionSort(A, size);
    
    cout << "\n\nsorted\n"; 

    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    
}