/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 13:19:55 by hlefevre          #+#    #+#             */
/*   Updated: 2024/03/31 19:49:19 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

int		ft_strerror(char *str);
int		ft_atoi(const char *str);
int		print_nb(char **dico, char *nb);
int		ft_isprint(int c);
int		powerlen(int power, char *dico);

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	free_tab(char **tab);
void	print_all(char **dico, int i, int j);
void	ft_print_power(int power, char **dico);

char	**ft_split(const char *s, char c);

char	*ft_itoa(int n);

size_t	ft_strlen(const char *str);

#endif