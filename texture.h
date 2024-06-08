/**
  ******************************************************************************
  * @file           : texture.h
  * @author         : toastoffee
  * @brief          : None
  * @attention      : None
  * @date           : 2024/6/8
  ******************************************************************************
  */



#ifndef RAY_TRACING_THE_NEXT_WEEK_TEXTURE_H
#define RAY_TRACING_THE_NEXT_WEEK_TEXTURE_H

#include "rtweekend.h"

class texture {
public:
    virtual ~texture() = default;

    virtual color value(double u, double v, const point3& p) const = 0;
};

class solid_color : public texture {
public:
    solid_color(const color& albedo) : albedo(albedo) {}

    solid_color(double red, double green, double blue) : solid_color(color(red,green,blue)) {}

    color value(double u, double v, const point3& p) const override {
        return albedo;
    }

private:
    color albedo;
};


#endif //RAY_TRACING_THE_NEXT_WEEK_TEXTURE_H
