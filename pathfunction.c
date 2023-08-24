#include "main.h"

/**
 *pathfinder - is a function find path in enviroment val
 * @env: the double pinter env
 * Return: 0 on sucess 1 for failer
**/

int pathfinder(char **env)
{
	char *token;
	char *path;
	char *location;
	struct stat stat_var;

	path = get_env("PATH");

	token = strtok(path, ":");

	while (token)
	{
		location = malloc(_strlen(token) + _strlen(*env) + 2);
		_memset(location, 0, _strlen(token) + _strlen(*env) + 2);
		_strcat(location, token);
		_strcat(location, "/");
		_strcat(location, *env);

		if (stat(location, &stat_var) == 0)
		{
			*env = _strdup(location);
			free(location);
			free(path);
			return (0);
		}
		free(location);
		token = strtok(NULL, ":");

	}

	free(path);
	return (1);
}
