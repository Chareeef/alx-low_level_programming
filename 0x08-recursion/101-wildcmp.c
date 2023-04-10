#include "main.h"
#include <string.h>

int compare_strings(char *s1, int i, char *s2, int j, int *iden);
void skip_wild(char *s2, int *j);

/**
 * wildcmp - Compares two string using recursion
 * @s1: our first string
 * @s2: our second string, can contain wildcard (*)
 *
 * Return: 1 if s1 and s2 are identical, 0 if not.
 */
int wildcmp(char *s1, char *s2)
{
	int i = 0, j = 0, iden = 1;

	compare_strings(s1, i, s2, j, &iden);
	return (iden);
}

/**
 * compare_strings - Compares two string using recursion
 * @s1: our first string
 * @i: s1 tracker
 * @s2: our second string, can contain wildcard (*)
 * @j: s2 tracker
 * @iden: identity tracker
 *
 * Return: 1 if s1 and s2 are identical, 0 if not.
 */
int compare_strings(char *s1, int i, char *s2, int j, int *iden)
{
	if (s2[j] == '*')
		skip_wild(s2, &j);
	if (s2[j] == '\0')
		return (1);
	look_forward(s1, &i, s2, j)

	if (s1[i] != s2[j])
	{
		*iden = 0;
		return (0);
	}
	compare_strings(s1, i, s2, j, iden);
	return (1);
}

/**
 * skip_wild - skip wildcards using recursion
 * @s2: our second string containing wildcard (*)
 * @j: s2 tracker
 *
 * Return: void.
 */
void skip_wild(char *s2, int *j)
{
	if (s2[*j] == '*')
	{
		*j += 1;
		skip_wild(s2, j);
	}
}

/**
 * look_forward - look for next correspondence in s1
 * @s1: our first string
 * @i: s1 tracker
 * @s2: our second string containing wildcard (*)
 * @j: s2 tracker
 *
 * Return: 1 if a correspondence is found, 0 otherwise.
 */
int look_forward(char *s1, int *i, char *s2, int j)
{
	if (s1[*i] != s2[j])
	{
		i++;
		look
	}
	else
