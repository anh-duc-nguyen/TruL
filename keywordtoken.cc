#include "keywordtoken.h"

KeyWordToken::KeyWordToken(const &string attr)
{
  this->attribute = *attr;
  type = 0;

}

KeyWordToken::~KeyWordToken()
{}

// Set the attribute of this token
void KeyWordToken::set_attribute(keyword_attr_type attr){
	this->attribute = attr;
}
// Return the attribute of this token
keyword_attr_type KeyWordToken::get_attribute()
{
	return attribute;
}


