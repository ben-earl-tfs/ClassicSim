
#include "Hunter.h"

std::string Hunter::get_name(void) const {
    return "Hunter";
}

int Hunter::get_strength_modifier(void) const {
    return 0;
}

int Hunter::get_agility_modifier(void) const {
    return 3;
}

int Hunter::get_stamina_modifier(void) const {
    return 1;
}

int Hunter::get_intellect_modifier(void) const {
    return 0;
}

int Hunter::get_spirit_modifier(void) const {
    return 1;
}

void Hunter::rotation() const {
    return;
}