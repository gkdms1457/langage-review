#include <iostream>
#include <cstring>
using namespace std;

class Person {
    char *name;
    int age;

public:
    Person(char *myname, int myage) {
        int len = strlen(myname) + 1;
        name = new char[len];
        strcpy(name, myname);
        age = myage;
    }
    Person() {
        name = NULL;
        age = 0;
        cout << "called Person()" << endl;
    }

    void setPersonInfo(char *myname, int myage) {
        name = myname;
        age = myage;
    }
    void showPersonInfo() {
        cout << "name : " << name << ", ";
        cout << "age : " << age << endl;
    }
    ~Person() {
        delete []name;
        cout << "called destructor!" << endl;
    }
};

int main(void) {
    Person *parr[3];
    char namestr[100];
    int age;

    for(int i = 0; i < 3; i++) {
        cout << "name : ";
        cin >> namestr;
        cout << "age : ";
        cin >> age;
        parr[i] = new Person(namestr, age);
    }

    parr[0]->showPersonInfo();
    parr[1]->showPersonInfo();
    parr[2]->showPersonInfo();

    delete parr[0];
    delete parr[1];
    delete parr[2];    
    
    return 0;
}