#include "numtoken.h"

NumToken::NumToken()
{
  type = 6;
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
