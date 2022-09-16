#include "main.h"

/**
* _isalpha - check for an alphabetical letter
* @value: value for consideration
* Return: returns 1 if successful or 0 if otherwise
*/

int _isalpha(int c);

{
if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))

{
return (1);
}

else

{
return (0);
}
}
