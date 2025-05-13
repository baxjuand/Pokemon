//
//  PoisonEffect.hpp
//  Pokemon C++
//
//  Created by David Bayona on 12/05/25.
//
#pragma once
//#include <iostream>
#include "IStatusEffect.hpp"

namespace N_Pokemon
{
    namespace  N_StatusEffect
    {
        class PoisonEffect : public IStatusEffect
        {
        private:
            float poisonPercentageReduction = 0.3f;
            int turnsLeft = 5;
            int ticks = turnsLeft;
            float hpReduced;
            int hpToReduce;
            
            
        public:
            void applyEffect(Pokemon *target) override;
            string getEffectName() override;
            bool turnEndEffect(Pokemon *target) override;
            void clearEffect(Pokemon *target) override;
        };
    }
}

