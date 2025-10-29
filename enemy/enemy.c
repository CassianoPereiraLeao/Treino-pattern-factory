#include <enemy.h>

static Enemy* enemy;

int attack() {
    return 10;
}

const char* getType(char* biome) {
    if(biome == "lagoa") return "(Sapo)";
}

Enemy lagoa() {
    return (Enemy) {
        "sapo",
        .attack = attack,
        .getType = getType("lagoa")
    };
}

Enemy init(char* biome) {
    if(biome == "lagoa") return lagoa();
}
