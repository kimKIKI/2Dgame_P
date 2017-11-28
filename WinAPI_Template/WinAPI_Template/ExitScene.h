#pragma once
#include "GameNode.h"
#include "SpritesObject.h"

class ExitScene : public GameNode
{
private:
    float m_fCurrTime;
public:
    ExitScene();
    virtual ~ExitScene();

    // GameNode��(��) ���� ��ӵ�
    virtual void Start() override;
    virtual void Update() override;
    virtual void Render() override;
    virtual void Release() override;
};

