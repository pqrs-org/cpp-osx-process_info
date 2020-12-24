#include <iostream>
#include <pqrs/osx/process_info.hpp>

int main(void) {
  std::cout << "globally_unique_string " << pqrs::osx::process_info::globally_unique_string() << std::endl;
  std::cout << "process_identifier " << pqrs::osx::process_info::process_identifier() << std::endl;

  return 0;
}
