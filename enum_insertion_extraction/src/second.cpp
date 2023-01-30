#include <second.h>


std::ostream& operator<<(std::ostream& os, const second::value& e) {

   // TBD: implement insertion here.

   os << "unknown `second::value` (" << unsigned(e) << ')';
   return os;
}


std::istream& operator>>(std::istream& is, second::value& /*e*/) {

   std::string temp;
   if(is >> temp) {

      // TBD implement extraction here

   }
   return is;
}
