#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include <pqrs/sign.hpp>

TEST_CASE("sign") {
  REQUIRE(pqrs::make_sign(100) == pqrs::sign::plus);
  REQUIRE(pqrs::make_sign(1) == pqrs::sign::plus);
  REQUIRE(pqrs::make_sign(1.5f) == pqrs::sign::plus);
  REQUIRE(pqrs::make_sign(1.5) == pqrs::sign::plus);

  REQUIRE(pqrs::make_sign(0) == pqrs::sign::zero);
  REQUIRE(pqrs::make_sign(0.0f) == pqrs::sign::zero);
  REQUIRE(pqrs::make_sign(0.0) == pqrs::sign::zero);

  REQUIRE(pqrs::make_sign(-100) == pqrs::sign::minus);
  REQUIRE(pqrs::make_sign(-1) == pqrs::sign::minus);
  REQUIRE(pqrs::make_sign(-1.5f) == pqrs::sign::minus);
  REQUIRE(pqrs::make_sign(-1.5) == pqrs::sign::minus);
}
