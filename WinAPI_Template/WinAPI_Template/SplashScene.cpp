#include "stdafx.h"
#include "SplashScene.h"


SplashScene::SplashScene()
{
    m_szTagName = "splash";
    g_pImgManager->AddImageList(m_szTagName);
    while (g_pImgManager->AddImageByJson(m_szTagName));
    g_pSndManager->AddSoundList(m_szTagName);
    while (g_pSndManager->AddSoundByJson(m_szTagName));
}

SplashScene::~SplashScene()
{
}

void SplashScene::Start()
{
}

void SplashScene::Update()
{
}

void SplashScene::Render()
{
}

void SplashScene::Release()
{
}