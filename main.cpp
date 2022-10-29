

#include <iostream>



int main()
{
    int a,b,c ;
    std::cout<<"Enter number a"<<std::endl;
    std::cin>> a;
     std::cout<<"Enter number b"<<std::endl;
    std::cin>> b;
     std::cout<<"Enter number c"<<std::endl;
    std::cin>> c;
   if(a>b)
   {
      if(a>c) 
      {
      std::cout<<"a is graeter than b & c"<<std::endl;
      } 
   }
   else if(b>c)
   {
       std::cout<<"b is graeter than a & c"<<std::endl; 
   }
    else if(c>a)
    { 
        std::cout<<"c is graeter than a"<<std::endl;
        
    }
}
