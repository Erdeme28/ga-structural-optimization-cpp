#pragma once

#include <vector>

class Individual
{
public:
	Individual(int geneCount);

	void randomize(double minValue, double maxValue);
	void evaluateFitness(double minThickness, double maxThickness);

	double getFitness() const;
	const std::vector<double>& getGenes() const;

private:
	std::vector<double> genes;
	double fitness;
};