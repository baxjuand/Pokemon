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
        class Caterpie : public Pokemon
        {
        public:
            
            Caterpie();
            
        private:
            void bugBite(Pokemon &target);
            virtual void attack(Pokemon *target) override;
        };
    }
}
