#ifndef ABETARE__LOGIC_FORMULA_TRUE_HPP_
#define ABETARE__LOGIC_FORMULA_TRUE_HPP_

#include "Logic/Formula.hpp"

namespace Abetare
{
    class FormulaTrue : public Formula
    {
    public:
	FormulaTrue(void) : Formula()
	{
	}
	
	virtual ~FormulaTrue(void)
	{
	}
	
	virtual bool IsSatisfied(const int n, const int props[]) const
	{
	    return true;
	}	    
    };
}
    
#endif



