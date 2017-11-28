#pragma once
#include "GameNode.h"
#include "SpritesObject.h"

class SplashScene : public GameNode
{
private:
public:
    SplashScene();
    virtual ~SplashScene();

    // GameNode��(��) ���� ��ӵ�
    virtual void Start() override;
    virtual void Update() override;
    virtual void Render() override;
    virtual void Release() override;
};