#pragma once

#include "Utils.h"
#include <engine/EntityManager.h>

namespace sf
{
    class RenderWindow;
}

class Application
{
public:
    void Update();
    void Draw(RenderWindow& window);

private:
    Clock clock;
    Time lastUpdateTime;
    EntityComponentSystem::EntityManager entityManager;
};