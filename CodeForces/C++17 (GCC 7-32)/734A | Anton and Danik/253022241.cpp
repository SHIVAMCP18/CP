#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int n;
  cin >> n;
 
  string s;
  cin >> s;
 
  int an=0,da=0;
 
  for(int i =0 ; i < s.size() ; i++){
    if(s[i] == 'A'){
      an++;
    }
 
    else if(s[i] == 'D'){
      da++;
    }
  }
 
  if(an > da){
    cout << "Anton" << endl;
  }
 
  else if(da > an){
    cout << "Danik" << endl;
  }
 
  else{
    cout << "Friendship" << endl;
  }
  }