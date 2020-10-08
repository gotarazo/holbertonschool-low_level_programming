#include "2-strlen_recursion.c"

/**
* palindrome- Check if s[left] is equal to s[right]
* @s: String to be checked
* @left: Point for left char to be evaulated
* @right: Point for right char to be evaluated
* Return: (1) If No more to compare and all (0) If s is not a palindrome
*/

int palindrome(int left, int right, char *s)
{
if (right > left)
return (s[left] != s[right] ? 0 : palindrome(left + 1, right - 1, s));

return (1);
}


/**
* is_palindrome- Returns 1 if a string is a palindrome and 0 if not
* @s: String
* Return: 1 or 0
*/


int is_palindrome(char *s)
{
return (palindrome(0, (_strlen_recursion(s) - 1), s));
}
