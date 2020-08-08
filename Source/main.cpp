#include "main.hpp"

#include <cstdlib>
#include <iostream>
#include <random>
#include <stdexcept>

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
	std::random_device rand_dev;
	std::mt19937 rng(rand_dev());
	const std::uniform_int_distribution<int> d10(1, 10);
	const auto roll = d10(rng);

	if (roll <= 2)
		throw std::runtime_error(
			"Once in a blue moon, an error shall occur...");
}
