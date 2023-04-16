#include<iostream>

using namespace std;


void merge(int* A, int s, int e) {
    // base case 

    if(s<e) {
        return ;
    }

    // recursive case 
    int m = s + (e-s)/2;
    mergesort(A,s,m);
    mergesort(A,m+1,e);


}

int main(){
    
    int A[] = {10 ,20,30,400,50};
    int n = sizeof(A)/sizeof(int);

    merge(A,0,n-1);



    return 0;
}