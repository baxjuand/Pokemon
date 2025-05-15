//
//  ParalyzedEffect.hpp
//  Pokemon C++
//
//  Created by David Bayona on 11/05/25.
//
#pragma once
#include "IStatusEffect.hpp"

namespace N_Pokemon
{
    namespace N_StatusEffects
    {
        class ParalyzedEffect : public IStatusEffect
        {
        private:
            int turnsLeft;
            
        public:
            void applyEffect(N_Pokemon::Pokemon *target) override;
            string getEffectName() override;
            bool turnEndEffect(Pokemon *target) override;
            void clearEffect(Pokemon *target) override;
        };
    }

}


