#include <iostream>
#include "model/TrussModel.h"

int main() 
{
    TrussModel model;

	model.addNode(0.0, 1.0); // A
	model.addNode(2.0, 1.0); // B
	model.addNode(1.0, 0.0); // C

	model.addBar(0, 1); // AB
	model.addBar(0, 2); // AC
	model.addBar(1, 2); // BC

	std::cout << "Nodes:\n";
	int index = 0;
	for (const auto& node : model.getNodes())
	{
		std::cout << "Node " << index++ << " (" << node.x << ", " << node.y << ")\n";
	}

	std::cout << "\nBars:\n";
	for (const auto& bar : model.getBars())
	{
		std::cout << "Bar from Node " << bar.startNode << " to Node " << bar.endNode << "\n";
	}

    return 0;
}
