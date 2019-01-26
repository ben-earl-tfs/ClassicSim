#ifndef ASSASSINATION_H
#define ASSASSINATION_H

#include "TalentTree.h"

class Rogue;
class RogueSpells;

class Assassination: public TalentTree {
public:
    Assassination(Rogue* pchar);

    Talent* get_improved_eviscerate();

private:
    Rogue* rogue;
    RogueSpells* spells;
};

#endif // ASSASSINATION_H
