#include <bits/stdc++.h>
using namespace std;

 

int main(){
  
  int noOfYogurt , normalValue , discountedValue , cases;
  cin >> cases;
  while (cases-- > 0)
  {
    cin >> noOfYogurt >> normalValue >> discountedValue;
    if(!((noOfYogurt & 1) == 1)){
      if(normalValue * noOfYogurt < (discountedValue * noOfYogurt / 2)){
        cout << normalValue * noOfYogurt << endl;
      }
      else{
        cout << discountedValue * noOfYogurt / 2 << endl;
      }
    }else{
      if(normalValue*2 < discountedValue){
        cout << normalValue * noOfYogurt << endl;
      }else{
        cout << ((noOfYogurt - (noOfYogurt % 2))*discountedValue/2) + (noOfYogurt % 2)* normalValue)
      }
    }

  }
  
  return 0;
}