//
//  Caterpie.hpp
//  Pokemon C++
//
//  Created by David Bayona on 28/04/25.
//
#pragma once
#include "Pokemon.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Charmander : public Pokemon
        {
        public:
            
            Charmander();
            
        private:
            void bugBite(Pokemon  *target);
            void attack(Pokemon *target) override;
        };
    }
}
