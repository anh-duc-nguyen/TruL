#include "parser.h"
#include <string>

Parser::Parser(Scanner *scanner_) {
	lex = scanner_;
	word = lex ->next_token();
}