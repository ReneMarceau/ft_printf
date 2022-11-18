/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarceau <rmarceau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:45:01 by rmarceau          #+#    #+#             */
/*   Updated: 2022/11/18 18:29:27 by rmarceau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char		character 				= 'c';
	char		*string 				= "Bien ou bien la famille ?";
	char		*ptr_character 			= &character;
	int			decimal 				= 1234;
	int			integer 				= 2000;
	unsigned int unsigned_decimal 		= 4589;
	unsigned int hexadecimal 			= 3000;
	unsigned int hexadecimal_forte 		= 3000;

	ft_printf("\
	------------------------------------------------------------------------------------\n\
	My printf:\n\n\
	character: %c\n\
	string: %s\n\
	ptr_character : %p\n\
	decimal: %d\n\
	integer : %i\n\
	unsigned_decimal: %u\n\
	hexadecimal: %x\n\
	hexadecimal_forte : %X\n\
	percentage: %%\n\n",\
	 character,\
	 string,\
	 ptr_character,\
	 decimal,\
	 integer,\
	 unsigned_decimal,\
	 hexadecimal,\
	 hexadecimal_forte\
	);

	printf("\
	------------------------------------------------------------------------------------\n\
	The real printf:\n\n\
	character: %c\n\
	string: %s\n\
	ptr_character : %p\n\
	decimal: %d\n\
	integer : %i\n\
	unsigned_decimal: %u\n\
	hexadecimal: %x\n\
	percentage: %%\n\n",\
	 character,\
	 string,\
	 ptr_character,\
	 decimal,\
	 integer,\
	 unsigned_decimal,\
	 hexadecimal\
	);
	return (0);
}
