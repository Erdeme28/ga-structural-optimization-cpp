#pragma once

#include "Node.h"
#include "Bar.h"
#include <vector>

class TrussModel
{
public:
	TrussModel() = default;

	void addNode(double x, double y);
	void addBar(int startNode, int endNode);

	const std::vector<Node>& getNodes() const;
	const std::vector<Bar>& getBars() const;

private:
	std::vector<Node> nodes;
	std::vector<Bar> bars;
};