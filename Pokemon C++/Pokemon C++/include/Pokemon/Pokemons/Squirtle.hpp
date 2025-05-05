//
//  Squirtle.hpp
//  Pokemon C++
//
//  Created by David Bayona on 29/04/25.
//
#pragma once
#include "Pokemon.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Squirtle : public Pokemon
        {
        public:
            Squirtle();
            
        private:
            void waterSplash(Pokemon &target);
            virtual void attack(Pokemon *target) override;
            
        };
    }
}
