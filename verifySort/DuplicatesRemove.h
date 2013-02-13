/*****************************************************************************************
Neem Serra
CSE 331, Section 2
Project 2
*****************************************************************************************/

#ifndef _DUPLICATESREMOVE_H_
#define _DUPLICATESREMOVE_H_

#include <vector>

template<class T>
class CDuplicatesRemove{
public:
	//this function removes duplicate entries from a vector
	void DuplicatesRemove(std::vector<T> *p_vec)
	{
		int newvectorsize = 0;
		
		//This works by taking the contents of the array at i and i+1 and seeing
		//if they are not equal.  If they aren't equal, the first value is copied back to
		//the array, then it moves forward again.  If they are equal, the duplicate will
		//be overwritten.  There will be extra values at the end of the array but we
		//resize the array so that they aren't taken into account.

		for (int i=0; i<p_vec->size() - 1; i++)
		{
			if (!(p_vec->operator [](i) == p_vec->operator [](i+1)))
			{
				p_vec->operator [](newvectorsize) = p_vec->operator [](i);
				newvectorsize++;
			}
		}
			
		p_vec->resize(newvectorsize);
	}  
};

#endif
