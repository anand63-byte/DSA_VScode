#include<iostream>
using namespace std;
class Student{
    public:
    int rollnum;
    string name;
    float gpa;
    Student(){
                  //default declaeration for type 1 initialization
    }
    Student(string name,float gpa){
this->name=name;
this->gpa=gpa;                                   //counstructive decleration
    }
    Student(float x,int rollnum, string a){
        gpa =x;                               //without using this keyword
        this->rollnum=rollnum;                       //using thiskeyword
        name=a;
    }
      Student(int b,float gpa, string a){
        rollnum =b;                               //without using this keyword
        this->gpa=gpa;                       //using thiskeyword
        name=a;
    }
      Student(float gpa, string a){
        this->gpa=gpa;                       //using thiskeyword
        name=a;
    }
};
  void change(Student* z){
        (*z).name="Amir Chaudhary";
        z->gpa=7.3;                       //using thisdeyword
        z->rollnum=49;

    }
int main(){
//1st type initialization
Student a1;
a1.name= "Aryan";
a1.rollnum=42;
a1.gpa=6.7;
cout<<a1.gpa<<" "<<a1.name<<" "<<a1.rollnum<<endl;

//2nd type initialization

Student a2={07,6.9,"Abhinav Singh"};
cout<<a2.gpa<<" "<<a2.name<<" "<<a2.rollnum<<endl;

Student a3={7.1,15,"Adnan Ahmad"};
cout<<a3.gpa<<" "<<a3.name<<" "<<a3.rollnum<<endl;

//3rd type initialization
Student s3=Student{6.1,"Amir"};
s3.name="MD Amir";
s3.rollnum=23;
cout<<s3.gpa<<" "<<s3.name<<" "<<s3.rollnum<<endl;

//Passing class to functions
change(&s3);
cout<<s3.gpa<<" "<<s3.name<<" "<<s3.rollnum<<endl;
}