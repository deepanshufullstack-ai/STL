#include <array>
#include <iostream>
#include <stdexcept>
using namespace std;
void f1() {
  array<int, 5> a1 = {1, 2, 3, 4, 5};
  // how to access array elements

  // 1) []
  // for(int i=0; i<=4; i++){
  //     cout<<a1[i]<<" ";
  // }
  for (int i = 0; i < a1.size(); i++) {
    cout << a1[i] << " ";
  }
  cout << endl;

  // 2) at()
  try {
    for (int i = 0; i < a1.size(); i++) {
      cout << a1.at(i) << " ";
    }
    cout << endl;
  } catch (out_of_range e) {
    cout << "Exception: array index out of range" << endl;
  }

  // 3) implicit iterator
  for (auto x : a1) {
    cout << x << " ";
  }
  cout << endl;

  // 4) explicit iterator
  //   array methods to get iterator object
  //   begin() and end()  | iterator | can change
  array<int, 5>::iterator it;
  for (it = a1.begin(); it != a1.end(); it++) {
    cout << *it << " ";
  }
  it = a1.begin();
  *it = 12;
  for (it = a1.begin(); it != a1.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;

  //   rbegin() and rend() | reverse_iterator
  array<int, 5>::reverse_iterator rit;
  for (rit = a1.rbegin(); rit != a1.rend(); rit++) {
    cout << *rit << " ";
  }
  cout << endl;

  //   cbegin() and cend() | const_iterator | can't change

  //   crbegin() and crend() | const_reverse_iterator
}
void f2(){
  array<int, 5> a1 = {1, 2, 3, 4, 5};
  array<int, 5>::iterator it=a1.begin();
  *(it+2)=35;
  for(auto x: a1){
    cout<<x<<" ";
  }
  cout<<endl;

  cout<<a1.empty()<<endl;
  cout<<a1.front()<<endl;
  cout<<a1.back()<<endl;
  cout<<a1.data()<<endl;

}
int main() {
  f1();
  f2();
  return 0;
}

