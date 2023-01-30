#ifndef first_h
#define first_h

#include <iostream>

namespace first {

enum class value {
   none=0,
   one,
   two,
   max,
   unknown,
};

} // namespace first


std::ostream& operator<<(std::ostream& os, const first::value& e);
std::istream& operator>>(std::istream& is, first::value& e);


#endif
