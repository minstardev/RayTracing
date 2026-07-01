#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"
#include <iostream>

// [0,1] 범위의 색상 값을 [0,255] 정수 픽셀 값으로 변환하여 출력
inline void write_color(std::ostream& out, const color& pixel_color) {
    double r = pixel_color.x();
    double g = pixel_color.y();
    double b = pixel_color.z();

    int rbyte = int(255.999 * r);
    int gbyte = int(255.999 * g);
    int bbyte = int(255.999 * b);

    out << rbyte << ' ' << gbyte << ' ' << bbyte << '\n';
}

#endif
