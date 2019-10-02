
#include <stdio.h>
#include <string.h>


enum Langue {
    LANGUE_EN,
    LANGUE_FR,

    LANGUE_INVALIDE
};

static char const * chaines_langues[] = {
    [LANGUE_EN] = "en",
    [LANGUE_FR] = "fr"
};


static char const * prompts[] = {
    [LANGUE_EN] = "Please enter an integer N:",
    [LANGUE_FR] = "Veuillez entrer un entier N :"
};


char const * chaine_langue(char const * chaines[], char const * chaine_langue) {
    enum Langue langue;
    char const * chaine = NULL;

    for (langue = 0; !chaine && langue <= LANGUE_INVALIDE; langue++) {
        if (!strcmp(chaines_langues[langue], chaine_langue)) {
            chaine = chaines[langue];
        }
    }

    return chaine;
}

int main(int argc, char * argv[]) {
    (void)argc;
    (void)argv;

    unsigned n;

    printf("%s\n", chaine_langue(prompts, argv[1]));
    scanf("%u", &n);

    printf("2^N = %u\n", 1 << n);
    return 0;
}
