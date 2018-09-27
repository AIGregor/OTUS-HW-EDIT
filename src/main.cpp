#include "Model.h"
#include "Visualizer.h"
#include "Tool.h"

int main()
{
	GrafDocument mainDoc;
	Visualizer mainView(&mainDoc);
	Tool mainController(&mainDoc);
	
	/// For example
	mainController.CreateLine();

	return 0;
}