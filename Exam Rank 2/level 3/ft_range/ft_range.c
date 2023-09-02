#include <stdlib.h>
int* ft_range(int start, int end) 
{
    int size = (start <= end) ? (end - start + 1) : (start - end + 1);
    int* res = (int*)malloc(sizeof(int) * size);
    
	if (!res) 
		return NULL;
   
    int i = 0;
    while (i < size) 
	{
        res[i] = start;
        start += (start <= end) ? 1 : -1;
        i++;
    }
    return res;
}