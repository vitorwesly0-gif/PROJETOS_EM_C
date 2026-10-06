#include <stdio.h>

typedef struct {
    char estado[3];
    char codigo[5];
    char nome[50];
    long populacao;
    float area;
    double pib;
    int pontos_turisticos;
    float densidade;
    double pib_per_capita;
} Carta;
static void limpar_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

static int ler_int(const char *msg) {
    int v;
    printf("%s", msg);
    while (scanf("%d", &v) != 1) {
        limpar_buffer();
        printf("Entrada invalida. %s", msg);
    }
    limpar_buffer();
    return v;
}

static long ler_long_positivo(const char *msg) {
    long v;
    for (;;) {
        printf("%s", msg);
        if (scanf("%ld", &v) == 1 && v > 0) {
            limpar_buffer();
            return v;
        }
        limpar_buffer();
        printf("Valor invalido (precisa ser maior que zero).\n");
    }
}

static float ler_float_positivo(const char *msg) {
    float v;
    for (;;) {
        printf("%s", msg);
        if (scanf("%f", &v) == 1 && v > 0) {
            limpar_buffer();
            return v;
        }
        limpar_buffer();
        printf("Valor invalido (precisa ser maior que zero).\n");
    }
}

static double ler_double_positivo(const char *msg) {
    double v;
    for (;;) {
        printf("%s", msg);
        if (scanf("%lf", &v) == 1 && v >= 0) {
            limpar_buffer();
            return v;
        }
        limpar_buffer();
        printf("Valor invalido.\n");
    }
}

static void ler_carta(Carta *c, int numero) {
    printf("\n=== Cadastro da Carta %d ===\n", numero);

    printf("Digite a primeira letra do estado: ");
    scanf(" %1[^\n]", c->estado);
    limpar_buffer();

    printf("Digite o codigo da carta: ");
    scanf(" %4[^\n]", c->codigo);
    limpar_buffer();

    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", c->nome);
    limpar_buffer();

    c->populacao = ler_long_positivo("Digite a populacao: ");
    c->area = ler_float_positivo("Digite a area (km2): ");
    c->pib = ler_double_positivo("Digite o PIB: ");
    c->pontos_turisticos = ler_int("Digite o numero de pontos turisticos: ");

    c->densidade = (float)c->populacao / c->area;
    c->pib_per_capita = c->pib / (double)c->populacao;
}

static void mostrar_carta(const Carta *c, int numero) {
    printf("\n--- Carta %d ---\n", numero);
    printf("Estado: %s\n", c->estado);
    printf("Codigo: %s\n", c->codigo);
    printf("Cidade: %s\n", c->nome);
    printf("Populacao: %ld\n", c->populacao);
    printf("Area: %.2f km2\n", c->area);
    printf("PIB: %.2f\n", c->pib);
    printf("Pontos turisticos: %d\n", c->pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km2\n", c->densidade);
    printf("PIB per capita: %.4f\n", c->pib_per_capita);
}

static const char *nome_atributo(int op) {
    switch (op) {
        case 1: return "Populacao";
        case 2: return "Area";
        case 3: return "PIB";
        case 4: return "Pontos turisticos";
        case 5: return "Densidade populacional";
        case 6: return "PIB per capita";
        default: return "?";
    }
}

static double valor_atributo(const Carta *c, int op) {
    switch (op) {
        case 1: return (double)c->populacao;
        case 2: return (double)c->area;
        case 3: return c->pib;
        case 4: return (double)c->pontos_turisticos;
        case 5: return (double)c->densidade;
        case 6: return c->pib_per_capita;
        default: return 0.0;
    }
}

static int escolher_atributo(int ja_usada) {
    int op;
    for (;;) {
        printf("\n### Escolha um atributo para comparar ###\n");
        for (int i = 1; i <= 6; i++) {
            if (i != ja_usada)
                printf("%d. %s\n", i, nome_atributo(i));
        }
        op = ler_int("Escolha uma opcao: ");
        if (op < 1 || op > 6)
            printf("Opcao invalida.\n");
        else if (op == ja_usada)
            printf("Voce ja comparou esse atributo, escolha outro.\n");
        else
            return op;
    }
}

static void comparar(int op, const Carta *c1, const Carta *c2,
                     double *soma1, double *soma2) {
    double v1 = valor_atributo(c1, op);
    double v2 = valor_atributo(c2, op);

    printf("\n[%s] %s: %.2f | %s: %.2f\n",
           nome_atributo(op), c1->nome, v1, c2->nome, v2);

    if (v1 == v2) {
        printf("Empate neste atributo.\n");
    } else {
        int carta1_vence = (op == 5) ? (v1 < v2) : (v1 > v2);
        printf("Vencedora: Carta %d (%s)\n",
               carta1_vence ? 1 : 2,
               carta1_vence ? c1->nome : c2->nome);
    }

    *soma1 += v1;
    *soma2 += v2;
}

int main(void) {
    Carta c1, c2;
    double soma1 = 0, soma2 = 0;

    ler_carta(&c1, 1);
    mostrar_carta(&c1, 1);
    ler_carta(&c2, 2);
    mostrar_carta(&c2, 2);

    int atributo1 = escolher_atributo(0);
    comparar(atributo1, &c1, &c2, &soma1, &soma2);

    int atributo2 = escolher_atributo(atributo1);
    comparar(atributo2, &c1, &c2, &soma1, &soma2);

    printf("\n--- Resultado Final ---\n");
    printf("Atributos: %s e %s\n", nome_atributo(atributo1), nome_atributo(atributo2));
    printf("Soma Carta 1 (%s): %.2f\n", c1.nome, soma1);
    printf("Soma Carta 2 (%s): %.2f\n", c2.nome, soma2);

    if (soma1 > soma2)
        printf("Carta 1 venceu!\n");
    else if (soma2 > soma1)
        printf("Carta 2 venceu!\n");
    else
        printf("Empate!\n");

    return 0;
}