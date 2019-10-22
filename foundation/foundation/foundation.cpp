// foundation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cstdio>
#include <string>
#include <iostream>
#include <windows.h>
#include <stdlib.h>
using namespace std;


void tekst(const char str[]) {
	int len = strlen(str);

	for (int i = 0; i < len; i++) {

		putchar(str[i]);
		Sleep(20);

	}
}
int main()
{
	

	system("COLOR 2");
	std::string ONE;
	std::string B;
	printf("Input -\n");
	std::cin >> ONE;
	tekst("ajax ready\n");
	std::cin >> ONE;
	tekst("~~GATHERING~~\n");
	Sleep(900);
	tekst( "REPORT FORMAT? (V/A/T)\n");
	std::cin >> ONE;
	tekst("MUSIC (Y/N/M)\n");
	std::cin >> ONE;
	tekst("CENSOR 1-5\n");
	std::cin >> B;
	tekst("EXTRAPOLATE MISSING FROM DATA Y/N\n");
	std::cin >> B;
	tekst("CHRONOLOGICAL (C) / IN ORDER OF RECOVERY (R)\n");
	std::cin >> B;
	tekst("TEXT TO SPEECH Y/N\n");
	std::cin >> B;
	tekst("SPEECH TO TEXT (SUB) Y/N\n");
	std::cin >> B;
	tekst("COMPILE RADIO TRAFFIC WHEN RELEVANT Y/N\n");
	std::cin >> B;
	tekst("MAX REPORT LENGTH (In Minutes / Pages)\n");
	std::cin >> B;
	tekst("Generate Report on: \n SCP - 4949 Recovery and Exploration Log #1 on [REDACTED] May 2004. \n Video format \n Minimal / Background Music \n Censorship level : Acces level 3 \n Extrapolate missing data using machine learning. \n Extrapolated data will be marked with the symbol(Ext) \n Use Text to speech on all important non - audio recordings. \n Generate subtitles to all Voices with voice allocation. \n  Compose in Radio Traffic(when relevant) \n  Maximum length(in minutes) - Unlimited. \n Confirm(Y / N) \n");
	std::cin >> B;

	

	
	
	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
