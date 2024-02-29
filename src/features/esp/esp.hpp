/*
 *   Copyright (c) 2024 vsantos1
 *   All rights reserved.
 */
#ifndef FEATURES_ESP_WEAPON_H_
#define FEATURES_ESP_WEAPON_H_
#include "../../window/draw/drawing.hpp"
#include "../../sdk/entity_list.hpp"
#include "../../sdk/player_controller.hpp"
#include "../globals.h"
#include "../math.h"

namespace esp {

void render();

void _inferno(const BaseEntity &ent);

void _chicken(const BaseEntity &ent);

void _player();


}; // namespace esp

#endif // FEATURES_ESP_WEAPON_H_