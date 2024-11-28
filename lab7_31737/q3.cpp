#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(){
    string s;
    ifstream file("input.txt");
    int total=0;
    int sum=0;
    int passed=0;
    while (getline(file,s)){
        total+=1;
        s=s.substr(s.size()-2,2);   //get the last two digits i.e the marks of students
        sum+=stoi(s);
        if (stoi(s)>=50){
            passed+=1;
        }
    }
    file.close();

    cout<<"Total number of Student: "<<total<<endl;
    cout<<"Average Grade: "<<(double)sum/(double)total<<endl;
    cout<<"Total number of Student who passed: "<<passed<<endl;
    return 0;
}