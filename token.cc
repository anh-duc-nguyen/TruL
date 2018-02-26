#include "token.h"

Token::Token(const token_type type_ ) : type(type_) {}

Token::~Token() {}

void Token::set_token_type (token_type_type type_)
{
  this->type = type_;
}

token_type_type Token::get_token_type() const
{
  return type;
}
