#ifndef IDTOKEN_H
#define IDTOKEN_H

using namespace std;

#include "token.h"
#include <string>

class IdToken : public Token
{
 public:
  IdToken(const string& attr ="");
  ~IdToken() override;

  string get_attribute();
  void set_attribute(const string& attr);
  string to_string() const;

 private:
  const string attribute;
};

#endif
