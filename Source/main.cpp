#include "main.hpp"

#include <chrono>
#include <cstdlib>
#include <iostream>
#include <stdexcept>

namespace chr = std::chrono;

int main() {
	try {
		hello();

		return EXIT_SUCCESS;
	} catch (const std::exception& e) {
		std::cerr << "Fatal error: " << e.what() << '\n';
	}

	return EXIT_FAILURE;
}

void hello() {
	once_in_a_blue_moon();

	std::cout << "Hello World!\n";
}

void once_in_a_blue_moon() {
	auto time = chr::system_clock::now().time_since_epoch();
	auto seconds = chr::duration_cast<chr::seconds>(time).count();

	if (seconds % 2 == 0)
		throw std::runtime_error(
			"Once in a blue moon, an error shall occur...");
}
