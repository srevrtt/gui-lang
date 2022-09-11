#include <iostream>
#include <string>

#include "include/scanner.hpp"

// Reads the source code and converts it into a stream of tokens
std::vector<Token> Scanner::genTokens(std::string source)
{
  Token currentToken; // global token variable to save memory
  std::vector<Token> tokens; // token stream

  // loop through each character in the source code
  for (auto &c : source)
  {
    // if the character is an addition symbol
    if (c == '+')
    {
      currentToken.name = "$T_ADD";
    }

    // if the character is a subtraction symbol
    else if (c == '-')
    {
      currentToken.value = "$T_SUB";
    }
    
    // if the character is a multiplication symbol
    else if (c == '*')
    {
      currentToken.name = "$T_MUL";
    }

    // if the character is a division symbol
    else if (c == '/')
    {
      currentToken.value = "$T_DIV";
    }

    // if it is not any math symbol
    else
    {
      // check to see if it's a number
      for (auto &num : "1234567890")
      {
        // if it is
        if (c == num)
        {
          currentToken.name = "$T_NUM";
        }
      }
    }

    // if there is a new token ready
    if (currentToken.name != "" && currentToken.value == "")
    {
      currentToken.value = c;
      tokens.push_back(currentToken); // add the token

      // reset the token
      currentToken.name = "";
      currentToken.value = "";
    }
  }

  return tokens; // return the token stream
}
