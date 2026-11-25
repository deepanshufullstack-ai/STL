#include<iostream>
#include<stack>
// #include<vector>
// #include<list>
// #include<forward_list>
using namespace std;
void f1(){
    stack <int> s1;
    // stack <int, vector<int>> s1;
    // stack <int, list<int>> s1;
    // stack <int, forward_list<int>> s1; ---> error because forward_list does not have push_back() and pop_back() methods

    s1.push(10);
    s1.push(20);
    s1.push(30);
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
}
int main(){
    f1();
    return 0;
}