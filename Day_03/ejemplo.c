/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ejemplo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crengifo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 00:01:43 by crengifo          #+#    #+#             */
/*   Updated: 2018/10/27 00:38:27 by crengifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int main()
{
	char letra;
	char *abc = & letra;

	for(letra = 'a';letra<='z';letra++)
	{
		printf("%c, *abc);
	}

	return 0;
}
