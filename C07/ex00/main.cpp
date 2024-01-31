/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:24:04 by achansar          #+#    #+#             */
/*   Updated: 2024/01/16 17:34:23 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "temp.hpp"

void putString(std::string str) {
    
    std::cout << str << std::endl;
    return;
}

int main( void )
{
	{
	putString("<<<<<<  TEST SWAP  >>>>>>");
		putString("init: ");
		int a = 2;
		int b = 3;
		std::cout << "int a = " << a << std::endl << "int b = " << b << std::endl;
		::swap( a, b );
		putString("result: ");
		std::cout << "a = " << a << std::endl << "b = " << b << std::endl << std::endl;
	}
	{
		putString("init: ");
		float a = 2.211;
		float b = 3.999;
		std::cout << "float a = " << a << std::endl << "float b = " << b << std::endl;
		::swap( a, b );
		putString("result: ");
		std::cout << "a = " << a << std::endl << "b = " << b << std::endl << std::endl;
	}
	{
		putString("init: ");
		char a = 'a';
		char b = 'b';
		std::cout << "char a = " << a << std::endl << "char b = " << b << std::endl;
		::swap( a, b );
		putString("result: ");
		std::cout << "a = " << a << std::endl << "b = " << b << std::endl << std::endl;
	}
	{
		putString("init: ");
		std::string a = "chaine1";
		std::string b = "chaine2";
		std::cout << "string a = " << a << std::endl << "string b = " << b << std::endl;
		::swap( a, b );
		putString("result: ");
		std::cout << "a = " << a << std::endl << "b = " << b << std::endl << std::endl;
	}

	putString("<<<<<<  TEST MIN  >>>>>>");
	{
		putString("init: ");
		int a = 2;
		int b = 3;
		std::cout << "int a = " << a << std::endl << "int b = " << b << std::endl;
		putString("result: ");
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl << std::endl;
	}
	{
		putString("init: ");
		float a = 2.211;
		float b = 3.999;
		std::cout << "float a = " << a << std::endl << "float b = " << b << std::endl;
		putString("result: ");
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl << std::endl;
	}
	{
		putString("init: ");
		char a = 'a';
		char b = 'b';
		std::cout << "char a = " << a << std::endl << "char b = " << b << std::endl;
		putString("result: ");
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl << std::endl;
	}
	{
		putString("init: ");
		std::string a = "chaine1";
		std::string b = "chaine2";
		std::cout << "string a = " << a << std::endl << "string b = " << b << std::endl;
		putString("result: ");
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl << std::endl;
	}
			putString("<<<<<<  TEST MAX  >>>>>>");
	{
		putString("init: ");
		int a = 2;
		int b = 3;
		std::cout << "int a = " << a << std::endl << "int b = " << b << std::endl;
		putString("result: ");
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl << std::endl;
	}
	{
		putString("init: ");
		float a = 2.211;
		float b = 3.999;
		std::cout << "float a = " << a << std::endl << "float b = " << b << std::endl;
		putString("result: ");
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl << std::endl;
	}
	{
		putString("init: ");
		char a = 'a';
		char b = 'b';
		std::cout << "char a = " << a << std::endl << "char b = " << b << std::endl;
		putString("result: ");
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl << std::endl;
	}
	{
		putString("init: ");
		std::string a = "chaine1";
		std::string b = "chaine2";
		std::cout << "string a = " << a << std::endl << "string b = " << b << std::endl;
		putString("result: ");
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl << std::endl;
	}
	return 0;
}