#include <iostream>

using namespace std;

int Max(int A[],int length){
    int maxA = A[0];
    for(int i=1; i<length; i++){
        if(A[i]>maxA){
            maxA=A[i];
        }
    }
    return maxA;
}

int main(){
    int numbers[]={1,2,3,3,3,2};
    int length=6;
    cout << Max(numbers,length);
    return 0;
}