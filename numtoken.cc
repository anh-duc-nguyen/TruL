#include "numtoken.h"

NumToken::NumToken(const &string attr)
{
  type = 6;
  this->attribute = attr;
}

NumToken::~NumToken()
{}

// Return the attribute of this token
keyword_attr_type NumToken::get_attribute()
{
	return &attribute;
}

// Set the attribute of this token
void NumToken::set_attribute(const string& attr){
	this->attribute = *attr;
}

string* NumToken::to_string(){
	return "NumToken" + attribute;
}
