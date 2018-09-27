#include "Model.h"
//#include "Tool.h"

deta GrafDocument::GetCreatingDeta()
{
	return deta();
}

std::string & GrafDocument::GetAutor()
{
	// TODO: insert return statement here
	return m_autor;
}

Contour::Contour()
{
}

Contour::~Contour()
{
}

void Contour::AddPoint()
{
}

Point2D * Contour::GetPoint()
{
	return nullptr;
}

GrafDocument::GrafDocument()
{
}

GrafDocument::~GrafDocument()
{
}

void GrafDocument::Create(std::chrono::time_point<std::chrono::system_clock> creatingDetaTime, std::string autor)
{
}

void GrafDocument::SaveDocument(std::string path)
{
}

void GrafDocument::LoadDocument(std::string path)
{
}

void GrafDocument::SetCreatingDeta(const deta creatingDetaTime)
{
}

void GrafDocument::SetAutor(const std::string & autorName)
{
}

Point2D::Point2D()
{
}

Point2D::~Point2D()
{
}
