/*****************************************************************************************
Neem Serra
CSE 331, Section 2
Project 2
*****************************************************************************************/

#ifndef _QUICKSORT_H_
#define _QUICKSORT_H_

#include <vector>

template<class T>
class CQuickSort{
//this class sorts an array using the algorithm quicksort
public:
	void Sort(std::vector<T> *p_vec)
		{
			int i;
			int left;
			int j = p_vec->size() - 1;
			int right = p_vec->size() - 1;
			 
			T tmp;
			//middle value is pivot
			T pivot = p_vec->operator [](p_vec->size()/2);
			
			//while the two sides don't intersect yet
			while (i <= j)
			{
				//increments counters if in correct order
				while (p_vec->operator [](i) < pivot)
				{
					i++;
				}

				//increments counters if in correct order				
				while (pivot < p_vec->operator [](j))
				{
					j--;
				}
				
				//switches position
            	if (i <= j) 
            	{
					tmp = p_vec->operator [](i);
					p_vec->operator [](i) = p_vec->operator [](j);
					p_vec->operator [](j) = tmp;
				
					i++;
					j--;
				}
			}
			
			//recursively sort
			if (left < j)
			{
				recurSort(p_vec, left, j);
			}

			if (i < right)
			{
				recurSort(p_vec, i, right);
			}
		}
	
private:	
	//new function that takes in two additional parameters of a left and right int
	//does Quicksort but with these additional parameters
	void recurSort(std::vector<T> *p_vec, int left, int right)
		{
			int i = left;
			int j = right;
			 
			T tmp;
			//middle value is pivot
			T pivot = p_vec->operator []((left + right)/2);
			
			//while the two sides don't intersect yet
			while (i <= j)
			{
				//increments counters if in correct order
				while (p_vec->operator [](i) < pivot)
				{
					i++;
				}
				
				//increments counters if in correct order
				while (pivot < p_vec->operator [](j))
				{
					j--;
				}
				
				//switches position
            	if (i <= j) 
            	{
					tmp = p_vec->operator [](i);
					p_vec->operator [](i) = p_vec->operator [](j);
					p_vec->operator [](j) = tmp;
				
					i++;
					j--;
				}
			}
			
			//recursively sort!
			if (left < j)
			{
				recurSort(p_vec, left, j);
			}

			if (i < right)
			{
				recurSort(p_vec, i, right);
			}
		}
};

#endif
