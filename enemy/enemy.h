#ifndef ENEMY_H
#define ENEMY_H

typedef struct {
    const char* name;
    int (*attack)();
    const char* (*getType)(char* biome);
} Enemy;

int attack();
const char* getType(char* biome);
Enemy lagoa();
Enemy init(char* biome);

#endif