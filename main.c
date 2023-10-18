#include "shell.h"

/**
 * main - initialize the variables of the program.
 * @argc: number of values received from the command line.
 * @argv: An array of strings contains values received from the command line.
 * @env: An array of strings that represent the environment variables.
 * Return: zero on succes.
 */
int main(int argc, char *argv[], char *env[])
{
	shell_data data_struct = {NULL}, *data = &data_struct;

	init(argc, argv, env, data);

	show_prompt(data);
}

/**
 * init - init the shell data.
 * @argc: number of values received from the command line.
 * @argv: An array of strings contains values received from the command line.
 * @env: An array of strings that represent the environment variables.
 * @data: shell data.
 */
void init(int argc, char *argv[], char *env[], shell_data *data)
{
	data->program_name = argv[0];
}
