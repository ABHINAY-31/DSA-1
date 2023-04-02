#include <bits/stdc++.h>
using namespace std;

bool comp(int a,int b){
    if(a>b){
        return true;
    }return false;
}

bool comp1(pair<int,int> a,pair<int,int> b){
    if(a.first==b.first){
        if(a.second < b.second){
            return true;
        }return false;
    }
    else if(a.first<b.first){
        return true;
    }return false;
}

int main(){
    //----------------------------------------------------------------------------------
    //---------------------------- BITSET ------------------------------------------

    bitset<5> bt={1111}; // indexing will be from 0 ---- 9   just like an array
    //int 16bits (2byte) // used in case of segment tree
    //char 8bits
    //bitset ----> 1 bit
    // cin >> bt; // 11111

    //all
    //count
    //any
    //flip none set reset size test

    cout << bt.all()<<"\n"; // it will return true if all bit are set
    cout << bt.any()<<"\n";// 1000 if any of the bit is set return true
    cout << bt.count()<<"\n";// count the set bits
    // cout << bt.flip(2)<<"\n";// flip the bit
    cout << bt.none()<<"\n"; //if any bit is set return false
    bt.set();// entirely as one
    bt.set(2,0);//set it as 0
    // reset about of set makes 00000 or bt.set(2,1)
    cout << bt.size() << "\n";
    cout << bt.test(3)<<"\n";//check if the bit is set at index 1 or not


    //---------------------------------- ALGORITHMS --------------------------------------------
    cout << "\n\n SORT function\n";
    vector<int> arr={1,1,5,4,6};
    sort(arr.begin(),arr.end());
    // or
    // sort(arr,arr+5); for an array
    for(auto i:arr){
        cout << i << " ";
    }
    cout << "\n\n";


    //reverse the array or vector--------------------------------------------------------
    reverse(arr.begin(),arr.end());
    for(auto i:arr){
        cout << i << " ";
    }
    cout << "\n";
    sort(arr.begin(),arr.end());
    // find the max or min element between the specified range

    cout << *max_element(arr.begin()+1,arr.begin()+3) << "\n"; // if not '*' gives iterator
    cout << *min_element(arr.begin()+1,arr.begin()+3) << "\n";

    //-------------------------------
    //find the sum in a range --------------------------------------------------------

    int sum=accumulate(arr.begin(),arr.end(),0);
    // accumulate(arr,arr+n,0);
    cout << sum << "\n";


    // count the frequency of specific element in the array
    int ans=count(arr.begin(),arr.end(),1);
    cout << ans << "\n";

    //find the occurence of 1
    auto it=find(arr.begin(),arr.end(),1);// returns the iterator
    cout << *it << "\n"; //first occurence will be returned otherwise poin to the end
    int ind=it-arr.begin();// gives the index value
    

    //binary search -----------------------------------------------------------------
    cout << binary_search(arr.begin(),arr.end(),1)<<"\n\n";


    //lower and upper bound -----------------------------------------------------------
    // return an iterator
    // or auto it=lower_bound(arr.begin(),arr.end(),1);  then int index=it-arr.begin();
    // first element not less than x
    cout << *lower_bound(arr.begin(),arr.end(),1) << "\n";

    // upperbound points to jsut grater 1---> 4(4 is next to 1) if 3 (not in the array but still point to 4)
    cout << *upper_bound(arr.begin(),arr.end(),1) << "\n\n";

    //-----------------------------------------------------------------------------
    // next_permutation and prev_permutation -- return true or false------------------------------------------
    string s="abc";
    do{
        cout << s << endl;
    }while(next_permutation(s.begin(),s.end()));
    cout << "\n\n";

    s="bca";
    do{
        cout << s << endl;
    }while(prev_permutation(s.begin(),s.end()));

    //------------------------------------------------------------------------------------
    //---------------------- COMPARATOR ------------------------------------------

    vector<int> v={1,4,2,3,6,5};
    sort(v.begin(),v.end(),comp);
    //in descending
    // sort(v.begin(),v.end(),greater<int>);
    cout << "\n\n";
    for(auto i:v){
        cout << i << " ";
    }
    cout << "\n\n";

    pair<int,int> vec[]={{1,2},{3,4},{3,1},{1,3},{2,5},{2,1}};
    sort(vec,vec+6,comp1);
    //for pair
    //sort(vec,vec+6,greater<pair<int,int>>);
    for(auto i:vec){
        cout << i.first << " " << i.second << "\n";
    }
}