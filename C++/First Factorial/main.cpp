#include <iostream>
#include <string>
using namespace std;

int FirstFactorial(int num) {
  
  // code goes here  
for (int i=num-1;i>0;i--){

    num = num*i;
}

  return num;

}

int main(void) { 
   
  // keep this function call here
  cout << FirstFactorial(coderbyteInternalStdinFunction(stdin));
  return 0;
    
}
