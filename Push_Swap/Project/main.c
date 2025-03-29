/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 04:02:43 by mzanana           #+#    #+#             */
/*   Updated: 2025/03/29 00:13:36 by mzanana          ###   ########.fr       */
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
        (free_stack(&sta), exit(0));
    size = ft_size(sta);
    ft_sort(&sta, &stb, size);
    free_stack(sta);
}


