/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/03 16:47:20 by abrault           #+#    #+#             */
/*   Updated: 2014/03/03 18:14:59 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_putchar(const char c);
int		ft_putstr(const char *str);
int		ft_putendl(const char *str);
int		ft_strlen(const char *str);

char	*ft_new_str(int n);
char	*ft_strchr(const char *str, char c);
char	*ft_strstr(const char *str_1, const char *str_2);
char	*get_next_line(int fd, char **line);
char	*ft_fustr(char *str_1, char *str_2);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strcat(char *dest, const char *src);

#endif
