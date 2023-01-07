/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataro-ga <abdoulaziztarogao@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:33:03 by ataro-ga          #+#    #+#             */
/*   Updated: 2023/01/07 19:35:25 by ataro-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*ft_get_remain(char *left);
char	*ft_full_str(int fd, char *store);
char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_get_line(char *all);
char	*ft_strchr(char *s, int c);
int		ft_strlen(char *s);
#endif