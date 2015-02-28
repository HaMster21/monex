/**
 * Print a simple "Hello world!"
 *
 * @file main.cpp
 * @section LICENSE

    This code is under MIT License, http://opensource.org/licenses/MIT
 */

#include <iostream>
#include <boost/cerrno.hpp>
#include <boost/asio.hpp>

int main() {
  std::cout << "Hello world!\n";
  return boost::system::error_code().value();
}
