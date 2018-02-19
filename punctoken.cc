#include "puntoken.h"

PuncToken::PuncToken()
{
  type = 1;
}

PuncToken::~PuncToken()
{}

// Return the attribute of this token
punc_attr_type PuncToken::get_attribute()
{
	return attribute;
}

// Set the attribute of this token
void PuncToken::set_attribute(punc_attr_type attr){
	this->attribute = attr;
}





