#include <iostream>
#include <string>
#include <cassert>


using namespace std; 

template<typename II, typename IO>
int char_2_Int(II b, II e, IO nums){

  int tensPlace = 1; 
  int x = 0;   // return value
  int ft = 0;


  while (b != e)
    {
     
      if (ft !=0) tensPlace *= 10;     //if not first time thru increase tensPlace
      
      int ch = *(e-1) - '0'; 
      x += (*(e-1) - '0') * tensPlace; 
      --e;
      ft = 1; 

    }
  
  return x;
}





int main(){


  assert (('2' - '0') == 2);
  assert (('3' - '0') == 3);
  cout << " '2' - '0' = " << ('2' - '0') << endl; 

  string nums = {"342"};

  auto b = nums.begin(); 
  auto e = nums.end(); 



  cout << R"(char string = "342")" << endl;
  int x = char_2_Int(b , e, nums);
  cout <<  "x = " << x << endl; 





}
