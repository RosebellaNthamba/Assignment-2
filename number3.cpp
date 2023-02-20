#include <iostream>
using namespace std;

//Base Class
class Student {
    private: string name;
    private: string address;
    private: int age;
    private: string gender;

    public :Student(string n, string a, int age, string g) {
        name = n;
        address = a;
        age = age;
        gender = g;
    }

    public :string getName() {
        return name;
    }

    public: string getAddress() {
        return address;
    }

    public :int getAge() {
        return age;
    }

    public: string getGender() {
        return gender;
    }
};

//Derived Classes
 class Certificate extends Student {
    private: string course;
    private :int duration;

    public :Certificate(string n, string a, int a, string g, string c, int d) {
        super(n, a, a, g);
        course = c;
        duration = d;
    }

    public string getCourse() {
        return course;
    }

    public int getDuration() {
        return duration;
    }
}

class Diploma extends Student {
    private string course;
    private int duration
;
    public Diploma(string n, string a, int a, string g, string c, int d) {
        super(n, a, a, g);
        course = c;
        duration = d;
    }

    public string getCourse() {
        return course;
    }

    public int getDuration() {
        return duration;

 }}

class BSCITStage1 extends Student {
    private string course;
    private int semesterMarks;

    public BSCITStage1(string n, string a, int a, string g, string c, int m) {
        super(n, a, a, g);
        course = c;
        semesterMarks = m;
    }

    public string getCourse() {
        return course;
    }

    public int getSemesterMarks() {
        return semesterMarks;
    }
}

class BSCITStage2 extends Student {
    private string course;
    private int semesterMarks;

    public BSCITStage2(string n, string a, int a, string g, string c, int m) {
        super(n, a, a, g);
        course = c;
        semesterMarks = m;
    }
{

    return 0;
}
