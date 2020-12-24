#include <catch2/catch.hpp>

#include <pqrs/osx/process_info.hpp>

TEST_CASE("globally_unique_string") {
  auto s1 = pqrs::osx::process_info::globally_unique_string();
  auto s2 = pqrs::osx::process_info::globally_unique_string();
  REQUIRE(s1 != s2);
}
