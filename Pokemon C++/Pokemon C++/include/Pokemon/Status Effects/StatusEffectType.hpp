//
//  StatusEffectType.hpp
//  Pokemon C++
//
//  Created by David Bayona on 14/05/25.
//
#pragma once

namespace N_Pokemon
{
    namespace N_StatusEffects
    {
        enum class StatusEffectType
        {
            Paralyzed = 0,
            Sleeping,
            Burned,
            Poisoned,
            MaxValue = 0xff
        };
    }
}
