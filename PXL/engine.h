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
#include "assetManager.h"
#include "renderer.h"

class Engine
{
public:
	Engine();
	~Engine();

	void render(std::function<void()> callback);

	inline Display* getWindow() { return m_window; }
	inline Clock* getClock() { return m_clock; }
	inline SceneManager* getSceneManager() { return m_sceneManager; }
	inline ShaderManager* getShaderManager() { return m_shaderManager; }
	inline Renderer* getRenderer() { return m_renderer; }
	inline AssetManager* getAssetManager() { return m_assetManager; }

private:
	Display * m_window;
	Clock* m_clock;
	SceneManager* m_sceneManager;
	ShaderManager* m_shaderManager;
	AssetManager* m_assetManager;
	Renderer* m_renderer;
};

