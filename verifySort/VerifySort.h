/*****************************************************************************************
Neem Serra
CSE 331, Section 2
Project 2
*****************************************************************************************/

#ifndef _VERIFYSORT_H_
#define _VERIFYSORT_H_

#include <vector>

template<class T>
class CVerifySort{
public:
	//this function verifies if the array is sorted
	bool VerifySort(std::vector<T> *p_vec)
	{

		//if any are out of order, return false		
		for (int i=0; i<p_vec->size() - 1; i++)
		{	
			if (p_vec->operator [](i+1) < p_vec->operator [](i))
			{
				return false;
			}
		}
		
		//otherwise, list is sorted, return true
		return true;
		
	}
};

#endif
