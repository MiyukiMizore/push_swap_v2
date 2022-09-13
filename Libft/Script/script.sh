# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    script.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/28 14:32:44 by mfusil            #+#    #+#              #
#    Updated: 2022/08/19 16:06:20 by mfusil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash


echo "
                     __                                       \n\
______  __ __  _____|  |__        ________  _  _______  _______ \n\
\____ \|  |  \/  ___/  |  \      /  ___/\ \/ \/ /\__  \ \____  \ \n\
|  |_     |  /\___ \|   Y  \     \___ \  \     /  / __ \|   |_ / \n\
|   __/|____//_____/____|__/____/_____/   \/\_/  (_____/|   __/  \n\
|__|                                                    |__|     \n\n"

sleep 1
function timer
{
i=0
printf "\n         \e[1;31m        AUTODESTRUCTION EN COURS"
sleep 0,1
printf ". "
sleep 0,5
printf ". "
sleep 0,5
printf ".\n\n"
printf "             \e[1;31m    ["
sleep 0,5
while [ $i -le 4 ]
do
    printf "\e[1;31m■■■■■"
    sleep 0,5
let i=$i+1
done
echo "]\n"
}
#Update
timer
sleep 0,5
echo "                 [\031Autodestruction terminée]\n\n\n"