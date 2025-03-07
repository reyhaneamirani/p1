#include <iostream>

using namespace std;

struct person_info{
    int age;
    string name;
};

double calculate(person_info p[],int size){
    double Age=0;
    for(int i=0;i<size;i++){
        Age=Age+p[i].age;
    }
    double Avg=Age/size;
    return Avg;
}
int main(){
    int size=10;
    person_info people[10]={
        {25,"Alice"},
        {30,"Bob"},
        {22,"Charlie"},
        {28,"David"},
        {35,"Eve"},
        {16,"Franke"},
        {19,"Grace"},
        {21,"Hank"},
        {40,"Ivy"},
        {23,"Jake"}
    };
    cout << calculate(people,size);
    return 0;
}

