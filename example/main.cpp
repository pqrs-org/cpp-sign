#include <iostream>
#include <pqrs/sign.hpp>

int main(void) {
  auto sign = pqrs::make_sign(100);

  if (sign == pqrs::sign::plus) {
    std::cout << "pqrs::sign::plus" << std::endl;
  }

  return 0;
}
