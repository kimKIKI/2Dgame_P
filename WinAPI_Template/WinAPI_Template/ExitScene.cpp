#include "stdafx.h"
#include "ExitScene.h"


ExitScene::ExitScene()
{
    m_szTagName = "exit";
    g_pImgManager->AddImageList(m_szTagName);
    while (g_pImgManager->AddImageByJson(m_szTagName));
    g_pSndManager->AddSoundList(m_szTagName);
    while (g_pSndManager->AddSoundByJson(m_szTagName));
}

ExitScene::~ExitScene()
{
}

void ExitScene::Start()
{
}

void ExitScene::Update()
{
    if (m_fCurrTime + 1.0f < g_pTimerManager->GetWorldTime())
    {
        PostQuitMessage(0);
    }
}

void ExitScene::Render()
{
}

void ExitScene::Release()
{
}