#include "reloptoken.h"

RelopToken::RelopToken()
{
  type = 2;
}

RelopToken::~RelopToken()
{}

// Return the attribute of this token
relop_attr_type PuncToken::get_attribute()
{
	return attribute;
}

// Set the attribute of this token
void PuncToken::set_attribute(relop_attr_type attr){
	this->attribute = attr;
}