#include <iostream>
using namespace std;

class Student {
    public: 
    int age;
    string name;
    int id;
    int nos;

    //default constructor
    Student() {
        cout << "Default constructor called" << endl;
    }

    //parameterised costuctor
    Student(int age, string name, int id, int nos) {
        this->age = age;
        this->name = name;
        this->id = id;
        this->nos = nos;
    }

    Student(int _age, string _name, int _id) {
        age = _age;
        name = _name;
        id = _id;
    }

    private:
    void study() {
        cout << "Studying" << endl;
    }
    void sleep() {
        cout << "sleeping" << endl;
    }
    void bunk() {
        cout << "bunking" << endl;
    }
};

int main() {

    Student s1;
    // s1.name = "Ankit";

    Student s2(21, "Ankit", 1, 10);

    cout << s2.name << endl;

    //allocating on heap memory
    Student *s3 = new Student(21, "Shreya", 2, 1);

    //we can perform both the below methods to access the elements in the object s3 but we cannot 
    //be able to perform s3.name or access any value with this method.
    cout << s3->name << endl;
    cout << (*s3).name << endl;

    delete s3;

    // cout << s1.name << endl;
    // cout << sizeof(s1) << endl;

    return 0;
}