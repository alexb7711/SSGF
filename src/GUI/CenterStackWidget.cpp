#include "CenterStackWidget.hpp"

//--------//
// PUBLIC //
//--------//

namespace GUI
{

//===============================================================================
//
CenterStackWidget::CenterStackWidget(sf::RenderWindow* window):
  p_window(window)
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
void CenterStackWidget::update()
{
  this->calculatePositions();
}

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

//---------//
// PRIVATE //
//---------//
  
//===============================================================================
//
void CenterStackWidget::calculatePositions()
{
  
}

}
