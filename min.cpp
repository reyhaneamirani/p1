#include <iostream>

using namespace std;

int Min(int A[],int length){
    int minA = A[0];
    for(int i=1; i<length; i++){
        if(A[i]<minA){
            minA=A[i];
        }
    }
    return minA;
}

int main(){
    int numbers[]={1,2,3,3,3,2};
    int length=6;
    cout << Min(numbers,length);
    return 0;
}
