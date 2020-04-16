#include "CenterStackWidget.hpp"

//--------//
// PUBLIC //
//--------//

namespace GUI
{

//===============================================================================
//
CenterStackWidget::CenterStackWidget(sf::RenderWindow* window):
  p_window(window),
  m_button_spacing(70.f)
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

  for (uint item = 0; item < p_widget_vector.size(); ++item)
      p_widget_vector[item]->update(p_window);

  return;
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
// Calculate the positions of the buttons.
void CenterStackWidget::calculatePositions()
{
  uint vector_size         = p_widget_vector.size();
  sf::Vector2u window_size = p_window->getSize();

  sf::Vector2f window_pos;

  for (uint item = 0; item < vector_size; ++item)
  {
    window_pos.x = float(window_size.x/2) - p_widget_vector[item]->getSize().x/2;
    window_pos.y = window_size.y/4 + item * m_button_spacing;
    p_widget_vector[item]->setPosition(window_pos);
  }
}

}
