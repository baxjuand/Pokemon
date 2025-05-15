//
//  IStatusEffect.hpp
//  Pokemon C++
//
//  Created by David Bayona on 11/05/25.
//
#pragma once
#include <string>
#include "Pokemon.hpp"

namespace N_Pokemon
{
    namespace N_StatusEffects
    {
        class IStatusEffect
        {
        public:
            virtual void applyEffect(Pokemon *target) = 0;
            virtual string getEffectName() = 0;
            virtual bool turnEndEffect(Pokemon *target) = 0;
            virtual void clearEffect(Pokemon *target) = 0;
            virtual ~IStatusEffect() = default;
        };
    }

}


