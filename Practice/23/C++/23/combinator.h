#ifndef COMBINATOR_H
#define COMBINATOR_H

#include "factorial.h"

long int combine(int k,int n) 
{
	return factorial(n) / (factorial(k) * factorial(n - k));
}

#endif

