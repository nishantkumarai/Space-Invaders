#pragma once

namespace Element
{

	class ElementService
	{
	private:
		void destroy();

	public:
		ElementService();
		virtual ~ElementService();

		void initialize();
		void update();
		void render();

	};
}