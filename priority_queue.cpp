// priority_queue
#include<iostream>
#include<queue>
#include<string>
using namespace std;
void f1(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    cout<<pq.top()<<endl;

    priority_queue<string> pq1;
    pq1.push("apple");
    pq1.push("banana");
    cout<<pq1.top()<<endl;
}
int main(){
    f1();
    return 0;
}