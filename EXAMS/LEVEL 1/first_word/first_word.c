/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kaizen <axwellwork@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:45:09 by Kaizen            #+#    #+#             */
/*   Updated: 2023/05/11 20:45:09 by Kaizen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;

    if (argc == 2)
    {
        while (argv[1][i])
        {
            while (argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\n')
                i++;
            while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\n' && argv[1][i] != '\0')
            {
                write(1, &argv[1][i], 1);
                i++;
            }
            break;
        }
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
}