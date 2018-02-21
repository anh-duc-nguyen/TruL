#include "reloptoken.h"

RelopToken::RelopToken()
{
  type = 2;
}

RelopToken::~RelopToken()
{}

// Return the attribute of this token
relop_attr_type RelopToken::get_attribute()
{
	return attribute;
}

// Set the attribute of this token
void RelopToken::set_attribute(relop_attr_type attr){
	this->attribute = attr;
}
string* RelopToken::to_string(){
	return "RelopToken Attr_Number:" + attribute;
}