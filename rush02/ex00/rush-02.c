
#include <fcntl.h>
#include <unistd.h>
#include "ft_utils.h"
#include "rush-02.h"

// REMOVE BEFORE FLIGHT
#include <stdio.h>
// REMOVE ABOVE BEFORE FLIGHT

typedef struct	s_dict
{
	int		key;
	char	*str_value;
}	t_dict;

int count_dict_line(char *file)
{
	int		fd_dict;
	int		lines;
	char	buffer[1024]; // Buffer para ler blocos de texto
	int		bytes;
	int		i;

	lines = 0;
	i = 0;
	fd_dict = open(file, O_RDONLY); // Open file on read only mode
	if (fd_dict == -1)
		return -1; // Could not open the file
	// read returns the number of bytes of the file while > 0.
	while ((bytes = read(fd_dict, buffer, sizeof(buffer))) > 0)
	{
		while (i < bytes)
		{
			if (buffer[i] == '\n')
			{
				lines++;
			}
			i++;
		}
	}
	close(fd_dict);
	return lines;
}

int	add_dict_to_struct(char *file)
{
	int		fd_dict;
	int		lines;
	char	buffer[1024]; // Buffer para ler blocos de texto
	int		bytes;
	int		i;

	lines = 0;
	i = 0;
	fd_dict = open(file, O_RDONLY); // Open file on read only mode
	if (fd_dict == -1)
		return -1; // Could not open the file
	// read returns the number of bytes of the file while > 0.
	bytes = read(fd_dict, buffer, sizeof(buffer));
	while (buffer[i] != '\0')
	{
		while (buffer[i] != ':' && buffer[i] != '\0')
		{
			printf("%c", buffer[i]);
			i++;
		}
		i++;
		printf(": ");
		while (buffer[i] != '\n' && buffer[i] != '\0')
		{
			printf("%c", buffer[i]);
			i++;
		}
	}
	close(fd_dict);
	return lines;
}

int main(int argc, char **argv)
{
	int		nbr;

	nbr = 0;

	if (argc == 1)
	{
		ft_putstr("Usage: rush-02 <number>\n");
	}

	if (argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		printf("Number = %d\n", nbr);
	}

	if (argc == 3)
	{
		nbr = ft_atoi(argv[2]);
		printf("Dict = %s\n", argv[1]); // Este parametro é um arquivo
		printf("Number = %d\n", nbr);
	}

	int lines = count_dict_line(DICT_FILE_NAME);
	printf("Dict lines = %d\n", lines);

	add_dict_to_struct(DICT_FILE_NAME);
	return 0;
}
