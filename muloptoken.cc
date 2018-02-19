#include "muloptoken.h"

MulopToken::MulopToken()
{
  type = 4;
}

MulopToken::~MulopToken()
{}

// Return the attribute of this token
mulop_attr_type MulopToken::get_attribute()
{
	return attribute;
}

// Set the attribute of this token
void MulopToken::set_attribute(mulop_attr_type attr){
	this->attribute = attr;
}





