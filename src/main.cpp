#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"

#include "color.h"
#include "vec3.h"

#include <cstdint>
#include <iostream>
#include <vector>

int main()
{
	int image_width = 256;
	int image_height = 256;

	std::vector<uint8_t> buffer(image_width * image_height * 3);

	// render
	for (int j = 0; j < image_height; j++)
	{
		std::clog << "\rScanlines remaining: " << (image_height - j) << ' ' << std::flush;
		for (int i = 0; i < image_width; i++)
		{
			auto pixel_color = color(double(i) / (image_width - 1), double(j) / (image_height - 1), 0.0);
			int pixel_index = j * image_width + i;
			write_color(buffer, pixel_index, pixel_color);
		}
	}

	std::clog << "\rDone.                          \n";

	// save as png
	const char* filename = "./output/image.png";
	int stride = image_width * 3; // #bytes per row == width * #channels
	if (!stbi_write_png(filename, image_width, image_height, 3, buffer.data(), stride))
	{
		std::cerr << "Failed to save as PNG: " << filename << '\n';
		return 1;
	}

	std::clog << "Save completed: " << filename << '\n';
}
