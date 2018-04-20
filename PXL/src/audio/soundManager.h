#pragma once

#include <iostream>
#include <map>
#include <string>
#include <algorithm>

#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>

class SoundManager
{
public:
	SoundManager();

	void play();

	bool loadSound(const std::string& name, const std::string& path);
	void playSound(const std::string& name, int channel = -1, int loop = 0);

	~SoundManager();

private:
	std::map<std::string, Mix_Chunk*> m_sounds;

};