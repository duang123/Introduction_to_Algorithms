#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include "Test.h"

int main()
{
	//testAdjacencylistGraph();
	//testAdjacencymatrixGraph();
	//testBFS();
	//testBFSTraverse();
	//testDFS();
	//testTopologicalSort();
	//testStronglyConnectedComponents();
	//testComponentGraph();
	//testEulerTour();
	//testMSTKruskal();
	//testMSTPrim();
	//testBellmanFord();
	//testDagShortestPaths();
	testDijkstra();
	_CrtDumpMemoryLeaks();
	return 0;
}