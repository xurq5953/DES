//
// Created by Axurq on 2021/4/16.
//

#ifndef DES_ENCRYPTION_H
#define DES_ENCRYPTION_H






void Encrypt();

void IP();

void converseIP();

void roundFunction();

void keyExtension();

void Expansion(const unsigned char * R, unsigned char *temp);

void initSeedKey();

void loopKey(int round);

void loop(int num);

//test
void replaceBit(unsigned char * t, int size, const int * table);
bool compare(int a, int b, const unsigned char * backup);
void toggle(int a, unsigned char *t) ;
void printText();

#endif //DES_ENCRYPTION_H
