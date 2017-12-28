#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <SDL2/SDL.h>

#include "clock.h"
#include "display.h"
#include "sceneManager.h"
#include "shaderManager.h"

class Engine
{
public:
	Engine();
	~Engine();

	void render(std::function<void()> callback);
	Display* getWindow();


private:
	Display * m_window;
	Clock* m_clock;
	SceneManager* m_sceneManager;
	ShaderManager* m_shaderManager;
};

