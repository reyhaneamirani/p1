#include <iostream>
#include <string>

using namespace std;

class AgeCalculate{
    private:
    int* age;
    string* name;
    int size;
    

    public:

    AgeCalculate(string name[],int age[],int size) : name(name),age(age),size(size){}
    double avg_age(){
        double sum=0;
        for(int i=0 ; i<size ; i++){
            sum=sum+age[i];
        }
        return sum/size;
    }
    void print_names_and_ages(){
        for(int i=0 ; i<size ; i++){
            cout<<name[i]<<age[i]<<'\n';
        }
    }

};
int main(){
    string name[10]={"Alice ","Bob ","Charlie ","David ","Eve ","Franke ","Grace ","Hank ","Ivy ","Jake "};
    int age[10]={25,30,22,28,35,16,19,21,40,23};
    AgeCalculate age_calculate(name,age,10);
    age_calculate.print_names_and_ages();
    cout << "the avg is : "<<age_calculate.avg_age()<<'\n';
    
    return 0;
}