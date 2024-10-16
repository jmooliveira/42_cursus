/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:04:21 by jemorais          #+#    #+#             */
/*   Updated: 2024/10/04 19:26:58 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort(int argc, char *ptr[]);
int		ft_strcmp(char *s1, char *s2);
void	ft_swap(char **a, char **b);
void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int		number_argument;
	int		i;
	char	*ptr[50];

	i = 1;
	while (i < argc)
	{
		ptr[i - 1] = &argv[i][0];
		i++;
	}
	ft_sort(argc, ptr);
	number_argument = 0;
	while (number_argument < argc - 1)
	{
		i = 0;
		while (ptr[number_argument][i])
		{
			ft_putchar(ptr[number_argument][i]);
			i++;
		}
		number_argument++;
		ft_putchar('\n');
	}
}

void	ft_sort(int argc, char *ptr[])
{
	int	i;
	int	j;

	i = 0;
	while (i < argc - 2)
	{
		j = 0;
		while (j < argc - 2)
		{
			if (ft_strcmp(ptr[j], ptr[j + 1]) > 0)
				ft_swap(&ptr[j + 1], &ptr[j]);
			j++;
		}
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*swap;

	swap = *b;
	*b = *a;
	*a = swap;
}

/*
void	ft_putchar(char a)
{
	write (1, &a, 1);
}
*/
