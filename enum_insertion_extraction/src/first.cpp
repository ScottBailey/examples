#include <first.h>


#define CASE_OF_VALUE \
   CASE_OF(none)      \
   CASE_OF(one)       \
   CASE_OF(two)       \
   CASE_OF(max)       \
   CASE_OF(unknown)   \
   /* end CASE_OF_VALUE */


std::ostream& operator<<(std::ostream& os, const first::value& e) {

   switch(e) {
#define CASE_OF(X) case first::value::X: { os << #X; return os; }
      CASE_OF_VALUE;
#undef CASE_OF
   }

   os << "unknown `first::value` (" << unsigned(e) << ')';
   return os;
}


std::istream& operator>>(std::istream& is, first::value& e) {

   std::string temp;
   if(is >> temp) {
#define CASE_OF(X) if(temp == #X) { e = first::value::X; return is; }
       CASE_OF_VALUE;
#undef CASE_OF
   }
   e = first::value::unknown;
   return is;
}
