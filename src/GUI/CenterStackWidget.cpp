#include "CenterStackWidget.hpp"

namespace GUI
{

//===============================================================================
//
CenterStackWidget::CenterStackWidget()
{
  p_widget_vector.push_back(new Button());
  return;
}

//===============================================================================
//
void CenterStackWidget::setTitle(const std::string& title)
{}

//===============================================================================
//
void CenterStackWidget::addWidget()
{}

//===============================================================================
//
void CenterStackWidget::render(sf::RenderTarget* renderer)
{
  uint vector_size = p_widget_vector.size();
  for (unsigned int item = 0; item < vector_size; ++item)
   p_widget_vector[item]->render(renderer);

  return;
}

//===============================================================================
//
void CenterStackWidget::handleEvents()
{}

//===============================================================================
//
CenterStackWidget::~CenterStackWidget()
{}

}
