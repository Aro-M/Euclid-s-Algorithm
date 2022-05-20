#include <iostream>

int  largest_divider(int one_num,int  two_num){
  if (two_num == 0){
    return one_num;
  }
    return largest_divider(two_num,(one_num%two_num) );
}
int main(){
    
   int one_num ; 
   int two_num ;
   std::cout << "Please input two integers numbers: "<<std::endl;
   std::cin >> one_num >> two_num;
   std::cout << largest_divider(one_num,two_num);
}

