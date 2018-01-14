#pragma once
#include "Color.h"
#include <SDL.h>
#include <string>
#include <SDL_image.h>


class Texture
{
public:
	Texture(const uint16_t p_width, const uint16_t p_height);
	Texture(std::string p_path);
	~Texture();

	void SetPixelColor(const uint16_t p_x, const uint16_t p_y, Color& p_color);
	uint16_t GetWidth();
	uint16_t GetHeight();
	uint16_t GetPaletteWidth();
	uint16_t GetPaletteHeight();
	Color* GetColor();
	void SetColor(Color* p_pColor);
	uint32_t* GetPixelBuffer();
	void ClearBuffer();

private:
	uint32_t* m_pixelBuffer;
	uint16_t m_width;
	uint16_t m_height;
	Color* m_palette;
	uint16_t m_paletteWidth;
	uint16_t m_paletteHeight;
};