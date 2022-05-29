#include <boost/ut.hpp>
#include <pqrs/osx/process_info.hpp>

int main(void) {
  using namespace boost::ut;
  using namespace boost::ut::literals;

  "globally_unique_string"_test = [] {
    auto s1 = pqrs::osx::process_info::globally_unique_string();
    auto s2 = pqrs::osx::process_info::globally_unique_string();
    expect(s1 != s2);
  };

  return 0;
}
