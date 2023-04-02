#include <bits/stdc++.h>
using namespace std;
/*
Access modeifiers 
Private --> not accesible outside the class throws an error
*/
class demo{
    // private:
    public:
    int a=10;
    double c=90.098;
    demo(){ // constructors -->used for the initialization purpose
        cout << "Abhinay" << endl;
    } // at the moment when object is created for a class automattically counstructor is being called
    
}temp;
// demo obj;
int main(void){
    // cout << obj.a << " " << obj.c << endl;
    cout << temp.a << " " << temp.c << endl;
}