#include "Simulator.h"

Simulator airport;

int main() {
	
	airport.enter_data();
	/*
	int totalPlanesServed = 0;
	int iterations = 100;
	for (int ndx = 0; ndx < iterations; ndx++) {
		airport.run_simulation();
		//airport.show_stats();
		totalPlanesServed += airport.totalPlanesServed;
	}
	std::cout << "Planes arrived: " << totalPlanesServed << ". Planes per run: " << totalPlanesServed / iterations << ".\n";
	*/
	airport.run_simulation();
	airport.show_stats();
	int dummy;
	std::cin >> dummy;
	return 0;
}