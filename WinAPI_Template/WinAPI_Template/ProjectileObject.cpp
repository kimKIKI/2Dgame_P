#include "stdafx.h"
#include "ProjectileObject.h"


ProjectileObject::ProjectileObject()
{
    m_fActivateTime = -1.0f;
    m_fGenTime = 0.0f;
    m_fExistTime = 0.1f;
    m_nDamage = 1;
    m_isActivate = true;
}


ProjectileObject::~ProjectileObject()
{
}

void ProjectileObject::Start()
{
    //  
}

void ProjectileObject::Update()
{
    if (m_isActivate == false)
        if (m_fActivateTime < g_pTimerManager->GetWorldTime())
            Activate();
    
    if (m_fActivateTime + m_fExistTime < g_pTimerManager->GetWorldTime())
        SetDead();
    
    SpritesObject::Update();
}

void ProjectileObject::Render(HDC hdc)
{
    SpritesObject::Render(hdc);
}