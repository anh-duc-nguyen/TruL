#include "eoftoken.h"

EofToken::EofToken()
{
  type = 7;
}

EofToken::~EofToken()
{}

EofToken::*tostring(){
	return "#7 end of File";
}