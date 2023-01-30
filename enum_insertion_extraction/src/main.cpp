#include <iostream>
#include <sstream>

#include <first.h>
#include <second.h>

int main(int,char**) {

   std::string s1 = "two";

   {
      first::value v = first::value::one;

      std::cout << "First: " << v << '\n';

      std::stringstream ss;
      ss << s1;
      if(ss >> v) {
         std::cout << "Decoded " << s1 << " to " << v << '\n';
      }
      else {
         std::cout << "Failed to decoded " << s1 << '\n';
      }

   }

   {
      second::value v = second::value::one;

      std::cout << "Second: " << v << '\n';

      std::stringstream ss;
      ss << s1;
      if(ss >> v) {
         std::cout << "Decoded " << s1 << " to " << v << '\n';
      }
      else {
         std::cout << "Failed to decoded " << s1 << '\n';
      }

   }

   return 0;
}
