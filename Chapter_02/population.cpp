// (Population projection) UBoS projects population based on the
// following assumptions:
// One birth every 7 seconds
// One death every 13 seconds
// One new immigrant every 45 seconds
// Write a program to display the population for each of the next five years. Assume the current population is 312032486 and one year has 365 days.

#include <iostream>
using namespace std;

int main() {
    // Current population
    double population = 312032486;

    // Number of seconds in one year
    double secondsInYear = 365 * 24 * 60 * 60;

    // Population changes in one year
    double births = secondsInYear / 7;
    double deaths = secondsInYear / 13;
    double immigrants = secondsInYear / 45;

    // Calculate population for each of the next five years

    population = population + births - deaths + immigrants;
    cout << "Population after year 1: " << population << endl;

    population = population + births - deaths + immigrants;
    cout << "Population after year 2: " << population << endl;

    population = population + births - deaths + immigrants;
    cout << "Population after year 3: " << population << endl;

    population = population + births - deaths + immigrants;
    cout << "Population after year 4: " << population << endl;

    population = population + births - deaths + immigrants;
    cout << "Population after year 5: " << population << endl;

    return 0;
}
