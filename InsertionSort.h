#ifndef _INSERTIONSORT_H_
#define _INSERTIONSORT_H_

#include <vector>

template<class T>
class CInsertionSort
{

public:
  void Sort(std::vector<T> *p_vec)
	{
		int j;
		std::vector<T> movie = *p_vec;
		for ( int p = 1; p < movie.size(); p++)
		{
   			T temp = movie[p];
   			for ( j = p; j >0 && temp < movie[ j - 1 ]; j--)
   			{
   				movie[j] = movie[j-1];
   			}
   			
   			movie[j] = temp;
   		}
	}
};


#endif