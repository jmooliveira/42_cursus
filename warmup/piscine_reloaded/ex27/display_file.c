/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:36:34 by jemorais          #+#    #+#             */
/*   Updated: 2024/11/06 18:36:57 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void	ft_readfile(char *ptr)
{
	char	c;
	int		fd;

	fd = open(ptr, O_RDONLY);
	if (fd < 0)
		return ;
	while (read(fd, &c, 1))
		write(1, &c, 1);
	close(fd);
}

int	main(int argc, char *argv[])
{
	if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else if (argc == 1)
		write(1, "File name missing.\n", 19);
	else
		ft_readfile(argv[1]);
	return (0);
}

/*
Exercise 27
display_file
Turn-in directory : ex27/
Files to turn in : Makefile, e todos os arquivos necessários para o seu
programa
Allowed functions : close, open, read, write

Escreva um program chamado ft_display_file que mostre, no output padrão,
somente o conteúdo do arquivo dado como argumento.
• O diretório de entrega deve ter um Makefile com as seguintes regras: all, clean,
fclean. O binário se chamará ft_display_file.
• A função malloc é proibida. Você somente pode fazer esse exercício declarando
uma array de tamanho fixo.
• Todos os arquivos passados como argumento serão válidos.
• Mensagens de erro devem ser mostradas em seu output reservado.
$> ./ft_display_file
File name missing.
$> ./ft_display_file Makefile
*content of file Makefile*
$> ./ft_display_file Makefile display_file.c
Too many arguments.
$>
*/
