// FLSReport.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <Windows.h>

int main()
{
    std::cout << "Testing available FLS slots\n"; 

	DWORD result = 0;
	UINT count = 0;

	while (result != FLS_OUT_OF_INDEXES)
	{	
		result = FlsAlloc(NULL);
		count += 1;
	}

	std::cout << "Out of slots at attempt " << count << "\n";
}

