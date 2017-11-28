#pragma once

class UnitPos
{
public:
    double x;
    double y;

    UnitPos()
    {
        x = 0.0f;
        y = 0.0f;
    };

    template<class T>
    UnitPos(T inputX, T inputY)
    {
        x = (double)inputX;
        y = (double)inputY;
    };

    template<class T>
    UnitPos(T xy)
    {
        x = (double)xy;
        y = (double)xy;
    };
    
    UnitPos UnitPos::operator+(const UnitPos pos)
    {
        UnitPos result;
        result.x = this->x + pos.x;
        result.y = this->y + pos.y;
        return result;
    }

    UnitPos UnitPos::operator-(const UnitPos pos)
    {
        UnitPos result;
        result.x = this->x - pos.x;
        result.y = this->y - pos.y;
        return result;
    }

    UnitPos UnitPos::operator*(const UnitPos pos)
    {
        UnitPos result;
        result.x = this->x * pos.x;
        result.y = this->y * pos.y;
        return result;
    }

    UnitPos UnitPos::operator/(const UnitPos pos)
    {
        UnitPos result;
        result.x = this->x / pos.x;
        result.y = this->y / pos.y;
        return result;
    }

    void UnitPos::operator+=(const UnitPos pos)
    {
        this->x = this->x + pos.x;
        this->y = this->y + pos.y;
    }

    void UnitPos::operator-=(const UnitPos pos)
    {
        this->x = this->x - pos.x;
        this->y = this->y - pos.y;
    }

    void UnitPos::operator*=(const UnitPos pos)
    {
        this->x = this->x * pos.x;
        this->y = this->y * pos.y;
    }

    void UnitPos::operator/=(const UnitPos pos)
    {
        this->x = this->x / pos.x;
        this->y = this->y / pos.y;
    }
};

typedef UnitPos UnitSpeed;

struct UnitPos3D
{
    double x;
    double y;
    double z;

    UnitPos3D()
    {
        x = 0.0f;
        y = 0.0f;
        z = 0.0f;
    };

    template<class T>
    UnitPos3D(T inX, T inY, T inZ)
    {
        x = (double)inX;
        y = (double)inY;
        z = (double)inZ;
    };
};


class UnitSize
{
public:
    int w;
    int h;

    UnitSize()
    {
        w = 0;
        h = 0;
    };

    template<class T>
    UnitSize(T inputW, T inputH)
    {
        w = (int)inputW;
        h = (int)inputH;
    };

    UnitSize UnitSize::operator+(const UnitSize pos)
    {
        UnitSize result;
        result.w = this->w + pos.w;
        result.h = this->h + pos.h;
        return result;
    }

    UnitSize UnitSize::operator-(const UnitSize pos)
    {
        UnitSize result;
        result.w = this->w - pos.w;
        result.h = this->h - pos.h;
        return result;
    }

    UnitSize UnitSize::operator*(const UnitSize pos)
    {
        UnitSize result;
        result.w = this->w * pos.w;
        result.h = this->h * pos.h;
        return result;
    }

    UnitSize UnitSize::operator/(const UnitSize pos)
    {
        UnitSize result;
        result.w = this->w / pos.w;
        result.h = this->h / pos.h;
        return result;
    }

    void UnitSize::operator+=(const UnitSize pos)
    {
        this->w = this->w + pos.w;
        this->h = this->h + pos.h;
    }

    void UnitSize::operator-=(const UnitSize pos)
    {
        this->w = this->w - pos.w;
        this->h = this->h - pos.h;
    }

    void UnitSize::operator*=(const UnitSize pos)
    {
        this->w = this->w * pos.w;
        this->h = this->h * pos.h;
    }

    void UnitSize::operator/=(const UnitSize pos)
    {
        this->w = this->w / pos.w;
        this->h = this->h / pos.h;
    }
};

class GridVector
{
public:
    int x;
    int y;

    GridVector()
    {
        x = 0;
        y = 0;
    };

    template<class T>
    GridVector(T inputX, T inputY)
    {
        x = (int)inputX;
        y = (int)inputY;
    };

    GridVector GridVector::operator+(const GridVector pos)
    {
        GridVector result;
        result.x = this->x + pos.x;
        result.y = this->y + pos.y;
        return result;
    }

    GridVector GridVector::operator-(const GridVector pos)
    {
        GridVector result;
        result.x = this->x - pos.x;
        result.y = this->y - pos.y;
        return result;
    }

    GridVector GridVector::operator*(const GridVector pos)
    {
        GridVector result;
        result.x = this->x * pos.x;
        result.y = this->y * pos.y;
        return result;
    }

    GridVector GridVector::operator/(const GridVector pos)
    {
        GridVector result;
        result.x = this->x / pos.x;
        result.y = this->y / pos.y;
        return result;
    }

    void GridVector::operator+=(const GridVector pos)
    {
        this->x = this->x + pos.x;
        this->y = this->y + pos.y;
    }

    void GridVector::operator-=(const GridVector pos)
    {
        this->x = this->x - pos.x;
        this->y = this->y - pos.y;
    }

    void GridVector::operator*=(const GridVector pos)
    {
        this->x = this->x * pos.x;
        this->y = this->y * pos.y;
    }

    void GridVector::operator/=(const GridVector pos)
    {
        this->x = this->x / pos.x;
        this->y = this->y / pos.y;
    }
};

const GridVector V2_LEFT = { -1, 0 };
const GridVector V2_UP = { 0, -1 };
const GridVector V2_RIGHT = { 1, 0 };
const GridVector V2_DOWN = { 0, 1 };

struct RectMargin
{
    int left;
    int top;
    int right;
    int bottom;

    RectMargin()
    {
        left = 0;
        top = 0;
        right = 0;
        bottom = 0;
    };

    template<class T>
    RectMargin(T inLeft, T inTop, T inRight, T inBottom)
    {
        left = (int)inLeft;
        top = (int)inTop;
        right = (int)inRight;
        bottom = (int)inBottom;
    };
};

struct _RGBA
{
    int R;
    int G;
    int B;
    int A;
};

struct LoadResult
{
    int     nHead;
    int     nMax;

    LoadResult()
    {
        nHead = 0;
        nMax = 0;
    };
};