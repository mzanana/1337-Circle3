/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 04:02:43 by mzanana           #+#    #+#             */
/*   Updated: 2025/03/26 03:30:20 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_stack *sta;
    t_stack *stb;
    
    if (ac < 2)
        return (0);
    stb = NULL;
    sta = ft_parsing(av, ac);
    if (!sta)
    {
        //freeing ...;
        return 1;
    }
    
}
