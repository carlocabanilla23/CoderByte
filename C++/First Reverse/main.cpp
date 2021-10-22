#include <iostream>
#include <string>
using namespace std;

string FirstReverse(string str) {
    string temp=str;

    for(int i=1;i<=str.size();i++){
          temp[i-1] = str[str.size()-i];

    }
    str = temp;
  // code goes here  
  return str;

}

int main(void) { 
   
  // keep this function call here
  cout << FirstReverse(coderbyteInternalStdinFunction(stdin));
  return 0;
    
}
