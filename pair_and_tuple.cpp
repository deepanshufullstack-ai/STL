// pair is a predefined structure
// pair is a predefined structure in C++ that can hold two values of different data types.It is defined in the<utility> header file, which needs to be included in your program to use it.
// they are the utility and need to add header file to use it
#include <utility>
#include <iostream>  
#include <vector>
#include <tuple>
using namespace std;
void f1(){
    pair<int, string> p1;
    p1.first = 10;
    p1.second = "Hello";
    cout << p1.first << " " << p1.second << endl;

    pair<int, string> p3={123, "Hello"};
    cout << p1.first << " " << p1.second << endl;

    pair<string, vector<int>> p2;
    vector<int> v = {1, 2, 3, 4, 5};
    string str = "Numbers";
    p2=make_pair(str, v);
    cout << p2.first << " " << p2.second[0] << endl;
}   
void f2(){
    tuple<int, string, double> t1;
    t1 = make_tuple(10, "Hello", 3.14);
    cout << get<0>(t1) << " " << get<1>(t1) << " " << get<2>(t1) << endl;

    tuple<string, vector<int>, double> t2;
    vector<int> v = {1, 2, 3, 4, 5};
    string str = "Numbers";
    t2 = make_tuple(str, v, 3.14);
    cout << get<0>(t2) << " " << get<1>(t2)[0] << " " << get<2>(t2) << endl;
}                                                                                   
int main()
{
    f1();
    f2();
    return 0;
}