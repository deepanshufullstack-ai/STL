#include<vector>
#include<iostream>
using namespace std;
void f1(){
vector<int> v1={1, 2, 3, 4, 5};

for(int i=0; i<=v1.size(); i++){
  cout<<v1[i]<<" ";
}
cout<<endl;

for(int i=0; i<v1.size(); i++){
  cout<<v1.at(i)<<" ";
}
cout<<endl;

for(auto x: v1){
  cout<<x<<" ";
}
cout<<endl;

vector<int>::iterator it;
for(it=v1.begin(); it!=v1.end(); it++){
  cout<<*it<<" ";
}
cout<<endl;
}
void f2(){
vector<int> v1={1, 2, 3, 4, 5};
v1.insert(v1.begin(), 70);
for(auto x:v1){
  cout<<x<<" ";
}
cout<<endl;

v1.insert(v1.begin()+2, 40);
for(auto x:v1){
  cout<<x<<" ";
}
cout<<endl;

v1.insert(v1.begin()+3, {2, 3, 4});
for(auto x:v1){
  cout<<x<<" ";
}
cout<<endl;

vector<int> v2={11, 12, 13, 14, 15};
v1.insert(v1.end()-1, v2.begin()+1, v2.begin()+4);
for(auto x:v1){
  cout<<x<<" ";
}
cout<<endl;

v1.push_back(100);
for(auto x:v1){
  cout<<x<<" ";
}
cout<<endl;

v1.push_back(101);
for(auto x:v1){
  cout<<x<<" ";
}
cout<<endl;


}
void f3(){
   vector<int> v1={1, 2, 3, 4, 5};
   for(auto x: v1){
       cout<<x<<" ";
   }
   cout<<endl;

   v1.pop_back();
   for(auto x: v1){
       cout<<x<<" ";
   }
   cout<<endl;

   v1.erase(v1.begin()+2);
   for(auto x: v1){
       cout<<x<<" ";
   }
   cout<<endl;

   v1.erase(v1.begin()+2, v1.begin()+5);
       for(auto x: v1){
       cout<<x<<" ";
   }
   cout<<endl;
}
int main(){
f1();
f2();
f3();
return 0;
}
