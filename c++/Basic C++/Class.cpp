#include <bits/stdc++.h>
using namespace std;

class demo{
    string name;
    string uid;
    public: // now it will run perfectly
    demo(){
        cout << "Hello\n";
    }
    void intialize();
    void display();
};
 // outside definition of the method
void demo :: intialize(){
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the uid: ";
    cin >> uid;
}
void demo :: display(){
    cout << "\nname is : " << name << endl;
    cout << "uid is: " << uid << endl;
}

int main(){
    // objects are created at runtime
    demo* temp=new demo(); // it will throw an error by default it is private in class
    temp->intialize();
    temp->display();
}