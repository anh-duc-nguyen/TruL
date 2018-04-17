#ifndef EMITTER_H
#define EMITTER_H

#include <iostream>
#include "register.h"
using namespace std;

typedef enum instruction_type
{
	INST_MOVE = 802,
	INST_ADD =  803,
	INST_SUB =  804,
	INST_MUL =  805,
	INST_DIV =  806,
	INST_NEG =  807,
	INST_NOT =  808,
	INST_LEA =  809,
	INST_BRUN = 810,
	INST_BREZ = 811,
	INST_BRPO = 812,
	INST_BRNE = 813,
	INST_OUTB = 814,
    INST_HALT = 815,
    INST_GARBAGE = 899
};

class Emitter{
	public :
		Emitter();
		~Emitter();

		string * get_new_label();
		void emit_label(const string * label) const;
		
}