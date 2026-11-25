// Queue
#include <iostream>
#include <queue>
using namespace std;
void f1() {
 queue<int> q1;
 q1.push(10);
 q1.push(20);
 q1.push(30);
 cout << q1.size() << endl;
 cout << q1.front() << endl;
 cout << q1.back() << endl;
 q1.pop();
 cout << q1.front() << endl;
 cout << q1.back() << endl;

 // queue<int, vector<int>> q2; --> vector doesn't have pop_front function
 // queue<int, forward_list<int>> q2; --> forward_list doesn't have front function
 // function queue<int, array<int>> q2; --> array doesn't have pop_front function
}
int main() {
 f1();
 return 0;
}