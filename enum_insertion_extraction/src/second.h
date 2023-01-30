#ifndef second_h
#define second_h

#include <iostream>

namespace second {

enum class value {
   none=0,
   one,
   two,
   max,
   unknown,
};

} // namespace second


std::ostream& operator<<(std::ostream& os, const second::value& e);
std::istream& operator>>(std::istream& is, second::value& e);


#endif
