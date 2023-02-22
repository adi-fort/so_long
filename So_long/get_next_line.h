/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:20:34 by adi-fort          #+#    #+#             */
/*   Updated: 2023/02/22 15:21:31 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# define BUFFER_SIZE 10000


char	*get_next_line(int fd);
int		ft_check_read(int ret, char	*line);
void	ft_movebuffer(char *buffer);
char	*ft_realloc(char *line, char *buffer);
char	*ft_strjoin(char *line, char *buffer);

#endif
