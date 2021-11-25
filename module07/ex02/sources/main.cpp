/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:31:09 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/25 22:34:53 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Array.hpp>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>

#define MAX_VAL 10
int main(int, char**)
{
	Array<char> letters;
	Array<char>	mirrorLetters(4);

	std::cout << "assigne in empty array: ";
	mirrorLetters[0] = 'y';
	mirrorLetters[1] = 'o';
	mirrorLetters[2] = 'l';
	mirrorLetters[3] = 'o';
	letters = mirrorLetters;
	for (int i = 0; i < 4; i++)
		std::cout << letters[i];
	std::cout << std::endl << std::endl;




    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];

	srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % 100;
        numbers[i] = value;
        mirror[i] = value;
    }



	std::cout << "check if copy/assignation won’t affect anything in the other array..." << std::endl;
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
	std::cout << "everythings is okay !" << std::endl;
	std::cout << std::endl;




    try {
		std::cout << "numbers[-2]: ";
        numbers[-2] = 0;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    try {
		std::cout << "numbers[MAX_VAL]: ";
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
	std::cout << std::endl;




	std::cout << "before rand(): ";
	for (int i = 0; i < MAX_VAL; i++)
		std::cout << numbers[i] << " ";
    
	std::cout << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
        numbers[i] = rand() % 100;
	
	std::cout << "after rand(): ";
	for (int i = 0; i < MAX_VAL; i++)
		std::cout << numbers[i] << " ";
	std::cout << std::endl;
    delete[] mirror;
    return 0;
}