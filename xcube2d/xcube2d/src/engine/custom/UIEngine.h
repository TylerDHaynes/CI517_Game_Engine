#ifndef __MY_ENGINE_H__
#define __MY_ENGINE_H__

#include "../EngineCommon.h"
#include "../GraphicsEngine.h"
#include "../AudioEngine.h"
#include "../EventEngine.h"

#include <functional>
#include <vector>

namespace UIEngine {

	class Button
	{
	public:
		Button(std::function<void()> payLoad, Rectangle2f boundingBox);
		~Button();
		void firePayLoad();
		Rectangle2f getBoundingBox();
	private:
		std::function<void()> m_payLoad;
		Rectangle2f m_boundingBox;
	};

	class UIEngine {
		friend class XCube2Engine;

	private:
		std::vector<std::shared_ptr<Button>> m_buttons;

	public:

		UIEngine();

		void registerButton(const std::shared_ptr<Button>& button);

		void checkForButtonsClicked(Point2 clickPosition);

	};

};
#endif

