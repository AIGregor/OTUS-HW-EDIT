#include "Visualizer.h"

/// Create visualizer
Visualizer::Visualizer(GrafDocument * document)
{
	m_gragDoc = document;
	m_gragDoc->addObserver(this);
}

Visualizer::~Visualizer()
{
}

/// Show changes in windows 
void Visualizer::update()
{	
}
