#include <boost/ut.hpp>
#include <pqrs/osx/process_info.hpp>
#include <unistd.h>

int main() {
  using namespace boost::ut;
  using namespace boost::ut::literals;

  "globally_unique_string"_test = [] {
    auto s1 = pqrs::osx::process_info::globally_unique_string();
    auto s2 = pqrs::osx::process_info::globally_unique_string();
    expect(s1 != s2);
  };

  "process_identifier"_test = [] {
    expect(pqrs::osx::process_info::process_identifier() == getpid());
  };

  "scoped_sudden_termination_blocker"_test = [] {
    pqrs::osx::process_info::scoped_sudden_termination_blocker blocker;
  };

  return 0;
}
