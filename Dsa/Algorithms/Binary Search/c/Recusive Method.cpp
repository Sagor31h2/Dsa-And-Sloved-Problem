#include<iostream>
using namespace std;

int BinarySearch(int A[],int finding, int low, int high){
    
    while(low<=high)
    {
        int mid = low+(high-low) / 2;

        if(A[mid]==finding){
            return mid;
        }
        else if (finding<A[mid])
        {
            return BinarySearch( A,finding, low, mid - 1) ;
        }
        else{

            return BinarySearch( A,finding, mid+1, high) ;
        }
    }
        return -1;
    
}

int main(){

    int A[] = {2,4,6,7,9,12,23,50};

    int size = sizeof(A) / sizeof(A[0]);

    int finding = 7;

    int result = BinarySearch(A, finding, 0, size - 1);

    if (result==-1)
    {
        cout << "Not found";
    }
    else
    cout << "index is " << result;
}