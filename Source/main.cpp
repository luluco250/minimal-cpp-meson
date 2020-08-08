#include "main.hpp"

#include <cstdlib>
#include <iostream>
#include <random>
#include <stdexcept>

int main() {
	try {
		once_in_a_blue_moon();
		hello();

		return EXIT_SUCCESS;
	} catch (const std::exception& e) {
		std::cerr << "Fatal error: " << e.what() << '\n';
	}

	return EXIT_FAILURE;
}

void hello() {
	std::cout << "Hello World!\n";
}

void once_in_a_blue_moon() {
	if (roll(10) <= 2)
		throw std::runtime_error(
			"Once in a blue moon, an error shall occur...");
}

int roll(int sides) {
	static thread_local std::mt19937 rng((std::random_device())());

	std::uniform_int_distribution<int> die(1, sides);

	return die(rng);
}
