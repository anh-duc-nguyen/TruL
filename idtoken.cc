#include "idtoken.h"

IdToken::IdToken()
{
  type = 5;
}

IdToken::~IdToken()
{}

// Return the attribute of this token
keyword_attr_type IdToken::get_attribute()
{
	return &attribute;
}

// Set the attribute of this token
void IdToken::set_attribute(const string& attr){
	this->attribute = *attr;
}


