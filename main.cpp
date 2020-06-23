#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>
#include <Windows.h>

using namespace std;

static const char pool[] =
"QWERTYUIOPASDFGHJKLZXCVBNM"
"qwertyuiopasdfghjklzxcvbnm"
"1234567890";

int poolSize = sizeof(pool) - 1;

char getRandomChar()
{
	return pool[rand() % poolSize];
}


int main() {
	system("color 04");
	system("title Discord Nitro Codes Generator By MuDzYn");
	while (true) {
		int numberOfCodes;
		string filename;
		srand(time(0));
		string code;
		std::cout << R"(  _   _ _ _                ____          _              ____                           _               _           )" << "\n";
		Sleep(100);
		std::cout << R"( | \ | (_) |_ _ __ ___    / ___|___   __| | ___  ___   / ___| ___ _ __   ___ _ __ __ _| |_ ___  _ __  | |__  _   _ )" << "\n";
		Sleep(100);
		std::cout << R"( |  \| | | __| '__/ _ \  | |   / _ \ / _` |/ _ \/ __| | |  _ / _ \ '_ \ / _ \ '__/ _` | __/ _ \| '__| | '_ \| | | |)" << "\n";
		Sleep(100);
		std::cout << R"( | |\  | | |_| | | (_) | | |__| (_) | (_| |  __/\__ \ | |_| |  __/ | | |  __/ | | (_| | || (_) | |    | |_) | |_| |)" << "\n";
		Sleep(100);
		std::cout << R"( |_| \_|_|\__|_|__\___/ __\____\___/ \__,_|\___||___/  \____|\___|_| |_|\___|_|  \__,_|\__\___/|_|    |_.__/ \__, |)" << "\n";
		Sleep(100);
		std::cout << R"( |  \/  |_   _|  _ \ ___\ \ / / __                                                                           |___/ )" << "\n";
		Sleep(100);
		std::cout << R"( | |\/| | | | | | | |_  /\ V / '_ \                                                                                )" << "\n";
		Sleep(100);
		std::cout << R"( | |  | | |_| | |_| |/ /  | || | | |                                                                               )" << "\n";
		Sleep(100);
		std::cout << R"( |_|  |_|\__,_|____//___| |_||_| |_|                                                                               )" << "\n";
		Sleep(100);
		std::cout << R"(                                                                                                                   )" << "\n";
		Sleep(100);


		std::cout << "\n";
		std::cout << "\n";
		std::cout << "Enter ammount codes to generate: ";
		std::cin >> numberOfCodes;
		std::cout << "\nEnter file name: ";
		std::cin >> filename;
		filename = filename + ".txt";
		std::cout << "\nGenerating codes...\n";
		std::ofstream save(filename);
		//output
		for (int i = 0; i < numberOfCodes; i++)
		{
			for (int j = 0; j < 16; j++)
			{
				code += getRandomChar();
			}
			save << code << "\n";
			code = "";
		}
		save.close();
		std::cout << "\nSuccessfully generated " << numberOfCodes << " Discord Nitro codes";
		std::cout << "\nSuccessfully saved codes to file: " << filename << "\n\n";
		system("pause");
		system("cls");
	}
}