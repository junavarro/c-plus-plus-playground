#include <vector>
#include <iostream>

int positive_sum (const std::vector<int> arr){
  // Your code here
  int result = 0;
  //necesarry shift to get the most significant bit.
  const int shift = (sizeof(int)*8-1);
  for (auto& num: arr){
    // f(num) = ((~num) >> shift)
    // f: negates num and then gets the msb using shift expressions
    // you will get 1 if the number is posotive, 0 if number is negative.
    // f(num) = 1 if num > 0, 
    // f(num) = 0 if num < 0
    // the and expression is used to turn on/off based on the sign of num
    result += ((~num) >> shift) & num;
  }
  return result;
}

int main() {
    std::cout << "Sum psotives: "  << positive_sum ({1,2,4,-5,3,-1}) << "\n";
    return 0;
}