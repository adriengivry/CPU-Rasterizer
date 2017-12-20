#include <SDL.h>
#include <cstdlib>
#include <iostream>
#include "Mat4.h"

#define SDL_INIT_SUCCESS 0
#define SDL_LOG(logMessage) std::cout << "[SDL] " << logMessage << std::endl

int SDL_main(int argc, char** argv)
{
	{
		SDL_LOG("Attempting to init");
		if (SDL_Init(SDL_INIT_VIDEO) != SDL_INIT_SUCCESS)
		{
			SDL_LOG("Initialization failed");
			return EXIT_FAILURE;
		}

		SDL_LOG("Initialization succeed");

		// TODO Core of the program
		Mat4 m1;
		m1.DisplayData();

		std::cout << std::endl;

		Mat4 m2;
		m2.DisplayData();

		std::cout << std::endl;

		Mat4 result = m1 * m2;

		result.DisplayData();

		SDL_Quit();
		SDL_LOG("Closed");
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}
