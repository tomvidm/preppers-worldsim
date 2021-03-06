#ifndef TESTWORLDSIMCHARACTER_H
#define TESTWORLDSIMCHARACTER_H

#include "gtest/gtest.h"

#include "worldsim/WorldsimCharacter.h"
#include "worldsim/AttributeModifier.h"

namespace game {
    class TestWorldsimCharacter : public testing::Test 
    {
    protected:
        virtual void SetUp();
        
        WorldsimCharacter wc = WorldsimCharacter("wc");
        Attribute<float> attribute = Attribute<float>(1.f, 10.f);
    };
}

#endif