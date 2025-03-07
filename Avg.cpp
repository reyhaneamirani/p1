#include <iostream>

using namespace std;


double Avg(double A[],int count){
    double sum=0;
    double avg;
    for(int i=0; i<=count; i++){
        sum=sum+A[i];
        avg=sum/count;
    }
    return avg;
}
 int main(){
    double numbers[]={1.0,2.0,3.0,3.0,3.0,2.0};
    int count=6;
    cout << Avg(numbers,count);
    return 0;
 }
