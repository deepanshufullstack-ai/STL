#include<iostream>
#include<forward_list>
using namespace std ;
void f1(){
    forward_list<int> f = {10 , 20 , 30 , 40 ,50};
    f.insert_after(f.begin() , 70);
    f.insert_after(f.before_begin() , 2);
    f.push_front(3);
    f.pop_front();
    f.erase_after(f.before_begin());
    f.empty();
    f.front();
    
    for(auto x : f){
        cout<<x<<" ";
    }
}

int main(){
    f1();
}




// Random access not allowed [] , at() both are not allowed 
// push_back() and pop_back() not allowed
// push_front() is allowed 
// reverse const iterator and reverse iterator is not allowed
// before_begin() -- imaginary pointer before the first index
// begin() , end();

// cbefore_begin() , cbegin() , cend();
// #include<forward_list> include when we use forward list
