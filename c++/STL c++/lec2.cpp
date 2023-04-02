#include <bits/stdc++.h>
using namespace std;

int main(){
    cout <<" -------------------------- SETS ----------------------------\n";
    // arr {2,5,2,3,1}
    // find unique element for that I can use set or map as well
    set<int> s;
    // store element in the sorted order without any dublicacy
    for(int i=0;i<=4;i++){
        s.insert(i);  // log n Time taken by insert()
        // insert function used for inserting the value in SETS
    }
    for(auto i:s){ // for accessing the value we use pointer concept not by some indexing
        cout << i << " ";
    }
    cout << "\n";
    //----------------------------------
    for(auto it=s.begin();it!=s.end();it++){
        cout << *it << " ";
    }
    cout << "\n\n";
    //{0,1,2,3,4}
    //erase function
    s.erase(s.begin()); // s.erase(iterator);
    //s.erase(startiterator , end Iterator);
    s.erase(4); // delete the key
    for(auto i:s){
        cout << i << " ";
    }
    cout << "\n";

    auto it=s.find(3); // it will point to 3
    auto it1=s.find(8); // it=s.end() pe point karega
    s.emplace(5); // bit faster than insert
    cout << s.size() << "\n";
    s.erase(s.begin(),s.end());// remove all the elements

    //----------------------------------------- UNORDERED SET ------------------------------
    unordered_set<int> st; //same as above but having the random order 
    // average time complexity is O(1)
    // but in worst case it is linear in nature
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(5);
    st.count(2); // count the occurence of the value 
    for(auto i:st){
        cout << i << " ";
    }
    cout << "\n";

    //--------------------------------------------- multiset -----------------------------------
    multiset<int> mst;
    mst.emplace(1);
    mst.emplace(3);
    mst.emplace(1);
    mst.emplace(5);
    mst.emplace(5);
    for(auto i:mst){
        cout << i << " ";
    }
    cout << "\n";

    mst.erase(1); // all the instances will be erased
    auto it2=mst.find(2); // returns an iterator pointing to first occurence
    mst.clear(); //delete the entire set
    //mst.erase(mst.begin(),mst.end())  delete the entire set

    // -------------------------------------------------------------------------------------------
    // -------------------------------------- MAP ------------------------------------------------
    // -------------------------------------------------------------------------------------------

    map<string,int> mp; // all function take logarithmic of time
    mp["abhinay"]=21; // works according to the keys
    mp["jas"]=17;
    mp["loop"]=45;
    mp["abhinay"]=20;
    for(auto i:mp){
        cout << i.first << " " <<i.second << "\n";
    }
    for(auto i=mp.begin();i!=mp.end();i++){
        cout << i->first << " " << i->second << "\n";
    }
    //functions
    mp.emplace("soni",12);
    mp.erase("soni");
    mp.erase(mp.begin());
    auto it4=mp.find("jas");
    mp.clear();// entire map cleaned
    mp.count("abhinay");// always return 1
    if(mp.empty()){ // boolean value either true or false
        cout << "Empty \n\n";
    }

    //------------------------------------ UNORDERED MAP ----------------------------------
    unordered_map<int,int> m;
    m[1]=2;
    m[2]=3;
    m[3]=4;
    for(auto i:m){
        cout << i.first << " " << i.second << "\n";
    }
    //O(1) in nearly all the cases
    //in worst case it will be O(n)


    //-------------------------------------------------------------------------------------------
    //----------------------------------- PAIR --------------------------------------------------
    //-------------------------------------------------------------------------------------------
    cout << "\n\n PAIR --------------------------";
    pair<int,int> pr; // pair class
    pr.first=1;
    pr.second=3;
    // nested pair
    pair<pair<int,int>,int> pr1={{1,2},2};
    cout << pr1.first.second << " \n";
    pair<pair<int,int>,pair<int,int>> pr2={{1,2},{3,4}};
    
    //--------------- allowed ---------
    set<pair<int,int>>st5;
    map<pair<int,int>,int> mp4;

    vector<pair<int,int>> vect;
    vect.push_back(make_pair(2,3));
    vect.push_back(make_pair(1,2));
    vect.push_back(make_pair(5,6));
    for(auto i:vect){
        cout << i.first << " " << i.second << "\n";
    }

    // we can not define a pair of unordered map ------------ (IMPORTANT)

    //----------------------------- MULTIMAP -----------------------------
    multimap<int,int> mp3;
    mp3.emplace(1,4); // maintains key wise order
    mp3.emplace(1,3);
    mp3.emplace(3,6);
    for(auto i:mp3){
        cout << i.first << " " << i.second << "\n";
    }
    

    //--------------------------------------------------------------------------------------
    //------------------------------- STACK AND QUEUE --------------------------------------
    //--------------------------------------------------------------------------------------
    cout << "\n\n STACK -------------------\n";
    stack<int> sta;// LIFO logic
    sta.push(3);//insertion (Last one at the top)
    sta.push(1);// emplace
    sta.push(2);
    sta.push(4);
    cout << sta.size() << endl;
    while(!sta.empty()){
        cout << sta.top() << " ";
        sta.pop();
    }
    cout << endl;
    

    // -------- QUEUE ---------
    cout << "QUEUE ---------------\n\n";
    queue<int> q; // FIFO
    q.push(1); // or emplace
    q.emplace(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    cout << q.size() << endl;
    while(!q.empty()){ // linear time
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\nPriority Queue\n"; // kind of stack structure
    priority_queue<int> prt; // stores all in sorted order in log n.(descending)
    prt.push(2);
    prt.emplace(3);
    prt.emplace(1);
    prt.push(5);
    cout << prt.size() << endl;
    while(!prt.empty()){
        cout << prt.top() << " ";
        prt.pop();
    }
    cout << endl;
    cout << "\n ------ min Priority QUEUE -------\n\n";
    priority_queue<int,vector<int> , greater<int>> prio; // priority_queue<pair<int,int>> pr; 
    prio.emplace(5);//pr.push(1,2);
    prio.emplace(4);
    prio.emplace(3);
    prio.emplace(4);
    while(!prio.empty()){
        cout << prio.top() << " ";
        prio.pop();
    }
    cout << endl;


    //------------------ DEQUE --------------------------
    deque<int> dq; // from both the ends
    // begin end rbegin rend
    // clear 
    // empty 
    // at
    dq.push_front(2);
    dq.push_front(1);
    dq.push_front(5);
    dq.push_back(3);
    dq.push_back(7);
    dq.push_back(8);
    for(auto i=dq.begin();i!=dq.end();i++){
        cout << *i << " ";
    }
    cout << endl;


    cout <<"\n\nLIST----------------------\n";
    //push_front back
    //pop_front back
    // begin end rbegin rend
    // clear 
    // empty 
    // at
    // size
    // remove ---->  O(1)
    list<int> l;
    l.push_front(1);
    l.push_front(2);
    l.push_front(5);
    l.push_front(3);
    for(auto i=l.begin();i!=l.end();i++){
        cout << *i <<" ";
    }
    cout << "\n\n";
    l.remove(2);
    for(auto i=l.begin();i!=l.end();i++){
        cout << *i <<" ";
    }
    cout << endl;

}