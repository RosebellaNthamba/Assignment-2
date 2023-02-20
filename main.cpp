#include <iostream>
#include <string>
using namespace std;
class Person{
private:
    int age;
    std::string firstname;
    std:: string lastname;


public:
    Person(int a,std::string fname ,std::string lname){
        age=a, firstname=fname, lastname=lname ;
}


    void getValues(){
    std::cout<<"Age:"<<age<<std::endl;
    std::cout<<"First name;"<<firstname<<std::endl;
    std::cout<<"Last name;"<<lastname<<std::endl;
    }
    void setValues (int a,std::string fname ,std::string lname)
    {
    age = a;
    firstname= fname;
    lastname = lname;

    }
     class Student:public Person
     {
    private:
        std::string institution;
        int year;
        int REG No;
        }; public:
        Student (int a, std::string fname,std:: string lname, std:: string inst,int y,int rNo):
            Person(a,fname,lname),
            institution(inst),year(y),REG No(rNo){};

            void getValues (){
            Person:: getValues();
            std::cout<<"Institution:"<< institution <<std::endl;
            std::cout<<"Year:"<< year <<std::endl;
            std::cout<<"Registration Number:"<< REG No<<std::endl;

            }
             void setValues (int a,std::string fname ,std::string lname,, std:: string inst,int y,int rNo){

             Person:: setValues(a,fname,lname);
             institution =inst;
             year=y;
             REG No=r No:


             }
return 0;
};




