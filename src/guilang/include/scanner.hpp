#pragma once

#include <string>
#include <vector>

// A struct representing a token created by the Scanner
struct Token
{
  std::string name;
  std::string value;
};

// A scanner that can tokenize source file contents
namespace Scanner
{
  std::vector<Token> genTokens(std::string source);
}
