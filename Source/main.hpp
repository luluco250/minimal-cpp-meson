#ifndef MAIN_HPP
#define MAIN_HPP

/**
 * Print "Hello World".
 */
void hello();

/**
 * Throw an std::runtime_error sometimes.
 */
void once_in_a_blue_moon();

/**
 * "Roll a die" and get the result.
 *
 * @param sides The number of sides of the die.
 * @returns A random integer value between 1 and sides.
 */
int roll(int sides);

#endif // Include guard.
