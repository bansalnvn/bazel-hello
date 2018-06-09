#include <ctime>
#include <string>
#include <iostream>
#include "add.h"
#include <immer/vector.hpp>

std::string get_greet(const std::string& who) {
  return "Hello " + who;
}

void print_localtime() {
  std::time_t result = std::time(nullptr);
  std::cout << std::asctime(std::localtime(&result));
}

int main(int argc, char** argv) {
  std::string who = "world";
  if (argc > 1) {
    who = argv[1];
  }
  std::cout << get_greet(who) << std::endl;
  print_localtime();
  std::cout << "2+2 = " << add(2,2) << std::endl;
  immer::vector<int> immer_vector{1,2,3,4};
  for(auto && i: immer_vector)
  {
  	std::cout << i << ",";
  }
  std::cout << "\n";
  return 0;
}
