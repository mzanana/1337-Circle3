/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 04:02:43 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/05 00:48:25 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_stack *sta;
    t_stack *stb;
    int     size;

    if (ac < 2)
        return (0);
    stb = NULL;
    sta = ft_parsing(av, ac);
    if (!sta)
        ft_error(NULL, NULL);
    if (is_sorted(sta))
        return (free_stack(&sta), 0);
    size = lst_size(sta);
    if (size <= 10)
        easy_sorting(&sta, &stb);
    free_stack(&sta);
    
}


