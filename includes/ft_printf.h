/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarceau <rmarceau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:28:10 by rmarceau          #+#    #+#             */
/*   Updated: 2022/11/18 14:30:43 by rmarceau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/includes/libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_formats(va_list arg, const char format);
int		ft_print_char(int c);
int		ft_print_str(char *str);
void	ft_printnbr_base(long nb, char *base, int *length);

#endif