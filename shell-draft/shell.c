#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>


char *prompt_command(void)
{
	char *line;
	size_t n = 0;

	printf("$ ");

	if (getline(&line, &n, stdin) == -1)
	{
		dprintf(STDERR_FILENO, "Error: we ignore what is it\n");
		exit(-1);
	}
	return(line);
}

char **split_str_to_arr(char* line)
{
	char **tokens_list;
	char *token;
	int i, num;

	i = 0;
	num = 0;
	while (line[i])
	{
		if ((line[i] == ' ' && line[i + 1] != ' ') || line[i] == '\n')
			num++;
		i++;
	}

	tokens_list = malloc((num + 1) * sizeof(char *));
	token = strtok(line, " \n");

	i = 0;
	while (token)
	{
		tokens_list[i] = malloc((strlen(token) + 1) * sizeof(char));
		if (!tokens_list)
		{
			exit(-1);
		}
		strcpy(tokens_list[i], token);
		token = strtok(NULL, " \n");
		i++;
	}
	tokens_list[i] = token;
	return (tokens_list);
}
int main(void)
{
	char *line;
	char **tokens_list;
	int i;

	line = prompt_command();
	tokens_list = split_str_to_arr(line);

	for (i = 0; tokens_list[i]; i++)
		printf("tokens_list[%d]: %s\n", i, tokens_list[i]);

	for (i = 0; tokens_list[i]; i++)
		free(tokens_list[i]);
	free(tokens_list);
	free(line);	
       	return (0);
 }
