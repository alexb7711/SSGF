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
  uint vector_size         = p_widget_vector.size();
  sf::Vector2u window_size = p_window->getSize();

  sf::Vector2f window_pos;
  window_pos.x = window_size.x/2;

  for (uint item = 0; item < vector_size; ++item)
  {
    window_pos.y = window_size.y/2 + item * 55.f;
    p_widget_vector[item]->setPosition(window_pos);
  }
}

}
