#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE("Testing Sum function") {
    REQUIRE(Sum({1, 2, 3}) == Approx(6));
    REQUIRE(Sum({-1, -2, -3}) == Approx(-6));
    REQUIRE(Sum({}) == Approx(0.0));
    REQUIRE(Sum({0, 0, 0}) == Approx(0.0));
}

TEST_CASE("Testing Product function") {
    REQUIRE(Product({1, 2, 3}) == Approx(6));
    REQUIRE(Product({-1, 2, -3}) == Approx(6));
    REQUIRE(Product({}) == Approx(1));
    REQUIRE(Product({1, 0, 3}) == Approx(0));