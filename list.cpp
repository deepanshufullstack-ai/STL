// list
#include<iostream>
#include<list>
using namespace std ;
void f1(){
    list<int>l = {10 , 20 , 30 , 40 , 50};
    list<int>::iterator it = l.begin();
    
    // l.insert(l.begin()+1 , 60);// wrong way
    
    it++;
    it++;
    l.insert(it , 60);
    l.insert(it , {1 , 2 ,3 });
    l.erase(it);// erase only single element 
    l.erase(l.begin() , it);//multiple elements erase 
    for(auto x : l){
        cout<<x<<" ";
    }
}
void f2(){
list<int>l = {10 , 20 , 30 , 40 , 50};
list<int>l2 = {10 , 20 , 30 , 40 , 50};

l.push_front(23);
l.push_back(34);
l.pop_front();
l.reverse();
l.pop_back();
l.empty();
l.size();
l.clear();
l.swap(l2);
l.front();
l.back();
}
int main(){
    f1();
    f2();
}




