#include <bits/stdc++.h>
using namespace std;

struct demo{ 
    // by default access modifier is public other we can use private and protected
    string name;
    int age;

    // lets create an constructor
    demo(){} // created a default constructor other wise while creating new object it will throw an error
    demo(string naming,int ag){
        this->name=naming; // this keyword refers to current class
        this->age=ag;
    }
    void initialize(string name,int age){
        this->name=name;
        this->age=age;
    }
    void display(){
        cout << name << " " << age << "\n";
    }
    // try create and intialize value outside the structure
    int get_value(); 
    void print(string name);
};

int demo :: get_value(){
    int num=10;
    return num*num;
}

void demo :: print(string name){
    cout  << "\n" << name << endl;
}

int main(){
    demo* obj=new demo("Abhinay",20);
    obj->display();
    struct demo temp;
    temp.initialize("hello Abhinay",21);
    temp.display();
    demo temp1; // not a good way to initialize (avoid it)
    temp1.name="Abhinay Singh";
    temp1.age=21;
    cout << temp1.name << " " << temp1.age << "\n";
    
    // -------------------------------- outside structure method definition ----------------
    cout << temp.get_value() << endl;
    temp.print("End of structure");

}