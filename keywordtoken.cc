#include "keywordtoken.h"

KeyWordToken::KeyWordToken()
{
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
	/**if ()
	{
		return 100;
	}else if( )
	{
		return 101;
	}else if( )
	{
		return 102;
	}else if( )
	{
		return 103;
	}else if( )
	{
		return 104;
	}else if( )
	{
		return 105;
	}else if( )
	{
		return 106;
	}else if( )
	{
		return 107;
	}else if( )
	{
		return 108;
	}else if( )
	{
		return 109;	
	}else if( )
	{
		return 110;
	}else if( )
	{
		return 111;	
	}else if( )
	{
		return 112;
	}else
	{
		return 199;
	}
	*/
}


