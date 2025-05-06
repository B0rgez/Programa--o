#include <stdio.h>

int main()
{

    int voto, A = 0, B = 0, C = 0, branco = 0, nulo = 0;

    printf("Opcoes de votos: \n1 - Candidato A. \n2 - Candidato B. \n3 - Candidato c. \n4 - Branco. \n5 - Nulo. \n");

    for (int votoT = 1; votoT <= 20; votoT++)
    {
        printf("Vote no seu candidato: \n");
        scanf("%d", &voto);

        switch (voto)
        {
        case 1:
            A += 1;
            break;

        case 2:
            B += 1;
            break;

        case 3:
            C += 1;
            break;

        case 4:
            branco += 1;
            break;

        case 5:
            nulo += 1;
            break;

        default:
            if (voto > 5)
            {
                printf("Candidato invalido.\n");
                printf("Vote em um candidato valido: \n");
                scanf("%d", &voto);
            }
            break;
        }

        if (votoT == 20)
        {
            printf("Total de votos: \n-----------------------\nCandidato A = %d \nCandidato B = %d \nCandidato C = %d \nVotos em Branco = %d \nVotos Nulos = %d \n-----------------------\n", A, B, C, branco, nulo);
        }
    }

    if (A > B && A > C)
    {
        printf("Candidato A teve a maior quantidade de votos = %d.", A);
    }
    else if (B > A && B > C)
    {
        printf("Candidato B teve a maior quantidade de votos = %d.", B);
    }
    else if (C > A && C > B)
    {
        printf("Candidato C teve a maior quantidade de votos = %d.", C);
    }
    else if (A == B && B == C)
    {
        printf("Houve empate entre Candidatos A, B e C = %d.", A);
    }
    else if (A == B)
    {
        printf("Houve empate entre Candidato A e B = %d.", B);
    }
    else if (A == C)
    {
        printf("Houve empate entre Candidato A e C = %d.", A);
    }
    else if (B == C)
    {
        printf("Houve empate entre Candidato B e C = %d.", C);
    }

    return 0;
}