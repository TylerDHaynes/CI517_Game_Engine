#include "UIEngine.h"
namespace UIEngine {
	UIEngine::UIEngine()
	{
	}

	void UIEngine::registerButton(const std::shared_ptr<Button>& button)
	{
		m_buttons.push_back(button);
	}

	void UIEngine::checkForButtonsClicked(Point2 clickPosition)
	{
		for (std::shared_ptr<Button> button : m_buttons) {
			if (button->getBoundingBox().contains(clickPosition))
			{
				button->firePayLoad();
			}
		}
	}


	Button::Button(std::function<void()> payLoad, Rectangle2f boundingBox)
		: m_payLoad(payLoad)
		, m_boundingBox(boundingBox)
	{
		
	}

	Button::~Button()
	{
	}
	void Button::firePayLoad()
	{
		m_payLoad();
	}
	Rectangle2f Button::getBoundingBox()
	{
		return m_boundingBox;
	}

}

