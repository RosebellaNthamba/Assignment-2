#include<iostream>
using namespace std;
//computer class-Parent class
class computer
{
  public:
      string type;
      int speed ;
      int RAM;
      void printDetails()
      {
          cout<< "Type:"<<type<<endl;
          cout<< "speed:"<<speed<<endl;
          cout<< "RAM:"<<RAM<<endl;
      }
};
// client class-child class
class client :public computer
{public:
int numberofclients;


    void printDetails()
    {
        cout<<"number of clients."<<numberofclients<<endl;


    }
};
//server class -child class
class server :public computer
{
public:
    string OS;

    void printDetails()

    {
        cout<<"Operating system:"<<OS<<endl;

    }
};

//Main function
int main()

{
    // create an object of computer class
    computer objcomputer;
    objcomputer.type= "Laptop";
    objcomputer.speed =8;
    objcomputer.RAM =4;
    // create an object of client class
    client objclient;
    objclient.numberofclients =10;
    // create an object of server class
    server objserver;
    objserver.OS ="Redhat";

     cout <<"Your computer details are as shown below:"<<endl;
     objcomputer.printDetails();

    cout <<"The computer has:"<<endl;
    objclient.printDetails();

    cout<<"The computer uses:"<<endl;
    objserver.printDetails();

    return 0;
}
