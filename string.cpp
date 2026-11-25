// string is class in stl need to add header file to use it
#include <string>
#include <iostream>
using namespace std;
void f1()
{
    string s1 = "Hello World";
    cout << s1 << endl;

    for (int i = 0; i < s1.size(); i++)
    {
        cout << s1[i] << endl;
    }

    for (int i = 0; i < s1.length(); i++)
    {
        cout << s1[i] << endl;
    }

    for (int i = 0; i < s1.size(); i++)
    {
        cout << s1.at(i) << endl;
    }

    for (auto x : s1)
    {
        cout << x << endl;
    }

    string::iterator it;
    for (it = s1.begin(); it != s1.end(); it++)
    {
        cout << *it << endl;
    }

    string s2 = "My name is";
    cout << s2.front() << endl;
    cout << s2.back() << endl;
    cout << s2.empty() << endl;

    s2.append(" Deepanshu");
    s2=s2 + " Mahawar";

    s2.insert(0, "hello ");

    s2.erase(0, 6);

    s2.pop_back();
    s2.push_back('!');
    s2.clear();
    s2.find("Deepanshu");
    s2.substr(0, 5);
    s2.replace(0, 5, "Hello");
    
}
int main()
{
    f1();
    return 0;
}