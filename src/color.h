#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"
#include <cstdint>
#include <iostream>
#include <vector>

// scale [0,1] to [0,255] (PPM)
inline void write_color(std::ostream &out, const color &pixel_color)
{
    double r = pixel_color.x();
    double g = pixel_color.y();
    double b = pixel_color.z();

    int rbyte = int(255.999 * r);
    int gbyte = int(255.999 * g);
    int bbyte = int(255.999 * b);

    out << rbyte << ' ' << gbyte << ' ' << bbyte << '\n';
}

// scale [0,1] to [0,255] (PNG)
inline void write_color(std::vector<uint8_t> &buffer, int pixel_index, const color &pixel_color)
{
    double r = pixel_color.x();
    double g = pixel_color.y();
    double b = pixel_color.z();

    int rbyte = int(255.999 * r);
    int gbyte = int(255.999 * g);
    int bbyte = int(255.999 * b);

    buffer[pixel_index * 3 + 0] = static_cast<uint8_t>(rbyte);
    buffer[pixel_index * 3 + 1] = static_cast<uint8_t>(gbyte);
    buffer[pixel_index * 3 + 2] = static_cast<uint8_t>(bbyte);
}

#endif
