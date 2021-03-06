#pragma once
#include "GameNode.h"
#include "SpritesObject.h"

class SplashScene : public GameNode
{
private:
public:
    SplashScene();
    virtual ~SplashScene();

    // GameNode을(를) 통해 상속됨
    virtual void Start() override;
    virtual void Update() override;
    virtual void Render() override;
    virtual void Release() override;
};