#include <iostream>
#include <string>

#include "guilang/include/util.hpp"
#include "guilang/include/scanner.hpp"

int main(int argc, char **argv)
{
  // read the contents
  std::string source = Utilities::readSource("../examples/simple_program.gl");

  // get the token list
  std::vector<Token> tokens = Scanner::genTokens(source);
  
  // display each token
  for (auto &tkn : tokens)
  {
    std::cout << tkn.name << ", " << tkn.value << '\n';
  }

  return 0;
}
