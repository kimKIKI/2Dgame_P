#pragma once
#include "stdafx.h"

namespace komastar
{
    inline RECT MakeRect(POINT lt, POINT rb)
    {
        return RECT{ lt.x, lt.y, rb.x, rb.y };
    }

    inline RECT MakeRect(UnitPos pt, POINT size)
    {
        return RECT{ (int)pt.x - (int)(size.x * 0.5f)
                    , (int)pt.y - (int)(size.y * 0.5f)
                    , (int)pt.x + (int)(size.x * 0.5f)
                    , (int)pt.y + (int)(size.y * 0.5f) };
    }

    inline void DrawRect(HDC hdc, RECT rt)
    {
        Rectangle(hdc, rt.left, rt.top, rt.right, rt.bottom);
    }

    inline void DrawRect(HDC hdc, POINT lt, POINT rb)
    {
        Rectangle(hdc, lt.x, lt.y, rb.x, rb.y);
    }

    inline void DrawRect(HDC hdc, UnitPos pos, UnitSize size)
    {
        Rectangle(hdc
            , (int)(pos.x - size.w * 0.5f)
            , (int)(pos.y - size.h * 0.5f)
            , (int)(pos.x + size.w * 0.5f)
            , (int)(pos.y + size.h * 0.5f));
    }
}