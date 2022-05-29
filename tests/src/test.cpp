#include <boost/ut.hpp>
#include <pqrs/sign.hpp>

int main(void) {
  using namespace boost::ut;
  using namespace boost::ut::literals;

  "sign"_test = [] {
    expect(pqrs::make_sign(100) == pqrs::sign::plus);
    expect(pqrs::make_sign(1) == pqrs::sign::plus);
    expect(pqrs::make_sign(1.5f) == pqrs::sign::plus);
    expect(pqrs::make_sign(1.5) == pqrs::sign::plus);

    expect(pqrs::make_sign(0) == pqrs::sign::zero);
    expect(pqrs::make_sign(0.0f) == pqrs::sign::zero);
    expect(pqrs::make_sign(0.0) == pqrs::sign::zero);

    expect(pqrs::make_sign(-100) == pqrs::sign::minus);
    expect(pqrs::make_sign(-1) == pqrs::sign::minus);
    expect(pqrs::make_sign(-1.5f) == pqrs::sign::minus);
    expect(pqrs::make_sign(-1.5) == pqrs::sign::minus);
  };

  return 0;
}
