#include "main.h"
 /**
  *_isalpha - prints alphabet
  *
  *@c is called
  *Return:Always zero
*/
int _isalpha(int c)

	{
			return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
	}
