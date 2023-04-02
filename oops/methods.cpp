#include <bits/stdc++.h>
using namespace std;
//methods 
// this Keyword --> always refers to the current class 
class demo{
    public:
    int a;
    string str1; // by default it is private otherwise outside accessiblity will throw an error
    demo(){ // automatically get called (no need to do explicitly)
        cout << "The" << endl;
    }
    void initialize(int s,string str){
        this->a=s;
        this->str1=str;
    }
    void display(){
        cout << this->a << endl;
        cout << this->str1 << endl;
    }
    void display1();
}obj,obj1;

void demo::display1(){
    cout << "NO\n";
}
struct name{
    int num; // by default it is public
    string str2;
    void print(){
        cout << "Done for sure" << endl;
    }
}temp;
int main(){
    //objects are the instance of the class
    //-------------------------------------------------------------------------
    // created at run time  (imp***) *******************************************
    //-------------------------------------------------------------------------
    obj.initialize(10,"Abhinay");
    obj.display();
    temp.print();
    obj.display1();
    // obj.display1(); // this will throw ann error 
    // it is unable to refer to that method 
}