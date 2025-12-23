#include "TrussModel.h"

void TrussModel::addNode(double x, double y)
{
	nodes.push_back({x, y});
}

void TrussModel::addBar(int startNode, int endNode)
{
	bars.push_back({startNode, endNode});
}

const std::vector<Node>& TrussModel::getNodes() const
{
	return nodes;
}

const std::vector<Bar>& TrussModel::getBars() const
{
	return bars;
}
