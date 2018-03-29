#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
int x=0;
string word;
cin>>word;
for(int i=0;i<word.size();i++){
    if(word[i]=='n'){
        x=x+1;
    }
  }
cout<<x;

}
