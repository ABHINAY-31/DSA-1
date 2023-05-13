#include <bits/stdc++.h> // have all the libraries and load them all while execution
// also loaded the ones which not in use better to do only that library
using namespace std;
//--------------------------------- NAMESPACE -------------------------------------
// now using the concept of namespace to avoid name conflict error
namespace Abhinay{
    int val=10;
    //char val='a'; //give error
    int print(){
        return val*10;
    }
}

int main(){
    std::cout << "hello" << endl;
    //   int val =10; // it will throw an error beacause of conflicting name
    double val =10.0; 
    // now if i try to print it .. it will print 10.0
    cout << val  << "\n";

    // now for the integer val 
    cout << Abhinay::val << endl;
    cout << Abhinay::print() << endl;
    cout << "\n\n";

    //----------------------------------------------------------------------------------------------------
    //----------------------------- Array --> int arr[100] ------------------------------------------------------
    //-------------------------------------------------------------------------------------------
    cout << "ARRAY ------------------------------------------------------" << endl;
    array<int, 5> arr; // it will create an array of size 5
    // it will hold garbage value (it could be anything) if declared locally 
    // if globally than it will hold the 0 (zeroes)
    array<int, 3> v={1,2,3} ;// the rest two will be having the 0
    arr.fill(2);
    // entire array filled with 2 (whaterver will be the size)
    for(int i=0;i<5;i++){
        cout << arr.at(i) << " "; // to acces the specific element in the array use at function
    }
    cout << endl;

    // iterator -----------------------------------------------------------------------

    /*
        begin() -> starting index of the array
        end() -> right after the end of the array
        rbegin() -> reverse (from last)
        rend() -> left before the start(from beginning)
    */
    array<int ,5> arr1={1,2,3,4,5};
    
    // vector<int>::iterator ptr=arr1.begin()// iterator to a vector

    // for(auto it=arr1.begin();it!=arr1.end();it++){ // begin end
    //     cout << *it << " ";
    // }
    cout << endl;
    for(auto i=arr1.rbegin();i!=arr1.rend();i++){// rbegin rend
        cout << *i << " ";
    }
    cout << endl;
    for(auto it=arr1.end()-1;it>=arr1.begin();it--){
        cout << *it << " ";
    }
    cout << endl;
    //---------------
    for(auto it:arr1){ // the element itself while in above it's a pointer (reference)
        cout << it << " ";
    }
    cout << endl;

    cout << arr1.size() << endl;
    cout << arr1.front() << endl; // arr1.at(0);
    cout << arr1.back() <<"\n\n\n"; // arr1.at(n-1)

    
    //------------------------------------------------------------------------------------
    //---------------------------- VECTOR ------------------------------------------------
    //------------------------------------------------------------------------------------

    /*
        Inside the main max array size of the array is 10 power 6: int double char 
        int arr[1000000]

        but if we define it globally it become 10 power 7: 
        int arr[10000000]

        --------boolean
        for boolean inside the main size will be 10 power 7:
        bool arr[10000000]

        outside main it will be 10 power 8
        bool arr[100000000]
    */
    cout << "Vector ---------------------------------------------\n";
    // vector it is a dynamic array : size increases dynamically
    vector<int> v2;//-->{} size 0
    v2.push_back(1); //{1}
    v2.push_back(2); //{1,2} dynamically size increases
    v2.pop_back();
    cout << v2.size() << endl;
    // size is same 10 power 6 otherwise segmentation fault
    v2.clear(); // empty the vector

    vector<int> v1(4,0);
    vector<int> v3(4,10);// {10,10,10,10}
    // copy the content of vec 3 to vec 4
    vector<int> vec4(v3.begin(),v3.end());
    vector<int> vec5(v3);
    for(auto i:vec4){
        cout << i << " ";
    }
    cout << endl;
    // lower bound upper bound
    // swap(v1,v2)

    // ----------------------------------- 2D VECTOR --------------------------------------------
    vector<vector<int>> vec;
    vec.push_back(v1);
    vec.push_back(v3);
    for(auto i: vec){
        for(auto j:i){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "\n\n";
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    //define 10 X 20
    vector<vector<int>> vec7(10,vector<int>(20,0));

    // 10 X 20 X 30
    vector<vector<vector<int>>> vec6(10,vector<vector<int>> (20,vector<int> (30,0)));
}


