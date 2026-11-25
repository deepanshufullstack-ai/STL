// deque
#include <deque>
#include <iostream>
using namespace std;
void f1() {
 deque<int> d1 = {1, 2, 3, 4, 5};
 for (int i = 0; i < d1.size(); i++) {
   cout << d1[i] << " ";
 }
 cout << endl;

 for (int i = 0; i < d1.size(); i++) {
   cout << d1.at(i) << " ";
 }
 cout << endl;

 for (auto x : d1) {
   cout << x << " ";
 }
 cout << endl;

 for (auto i = d1.begin(); i != d1.end(); i++) {
   cout << *i << " ";
 }
 cout << endl;
}
void f2() {
 deque<int> d1 = {1, 2, 3, 4, 5};
 for (auto x : d1) {
   cout << x << " ";
 }
 cout << endl;

 d1.insert(d1.begin() + 2, 30);
 for (auto x : d1) {
   cout << x << " ";
 }
 cout << endl;
}
void f3() {
 deque<int> d1 = {1, 2, 3, 4, 5};
 for (auto x : d1) {
   cout << x << " ";
 }
 cout << endl;

 d1.pop_front();
 d1.pop_back();
 for (auto x : d1) {
   cout << x << " ";
 }
 cout << endl;

 d1.erase(d1.begin() + 2);
 for (auto x : d1) {
   cout << x << " ";
 }
 cout << endl;
 
 // empty()
 // front()
 // back()
 // size()
}
int main() {
 f1();
 f2();
 f3();
 return 0;
}