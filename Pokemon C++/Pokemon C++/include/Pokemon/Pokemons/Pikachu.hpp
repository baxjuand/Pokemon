//
//  Pikachu.hpp
//  Pokemon C++
//
//  Created by David Bayona on 27/04/25.
//
#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Pikachu : public Pokemon
        {
        public:
            
            Pikachu();
            
        private:
            //void thunderShock(Pokemon *target);
            void attack(Move selectedMove, Pokemon *target) override;
            
        };
    }
}
