#include <bits/stdc++.h>
using namespace std;

 

int main(){
  
  int a , b , c , cases;
  cin >> cases;
  while (cases-- > 0)
  {
    cin >> a >> b >> c;
    if(a < b && b < c){
      cout << "STAIR"<<endl;
    }else if (a < b && b > c){
      cout << "PEAK" <<endl;
    }else
    {
      cout << "NONE" << endl;
    }

  }
  
  return 0;
}