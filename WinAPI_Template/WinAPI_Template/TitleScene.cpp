#include "stdafx.h"
#include "TitleScene.h"


TitleScene::TitleScene()
{
    m_szTagName = "title";
    g_pImgManager->AddImageList(m_szTagName);
    while (g_pImgManager->AddImageByJson(m_szTagName));
    g_pSndManager->AddSoundList(m_szTagName);
    while (g_pSndManager->AddSoundByJson(m_szTagName));
}


TitleScene::~TitleScene()
{
}

void TitleScene::Start()
{
}

void TitleScene::Update()
{
    InputController();
}

void TitleScene::Render()
{
}

void TitleScene::Release()
{
}

void TitleScene::InputController()
{
    if (g_pKeyManager->isOnceKeyDown(VK_RETURN))
    {
    }

    if (g_pKeyManager->isOnceKeyDown(VK_ESCAPE))
        g_pScnManager->ChangeScene("exit");
}
