# include <stdio.h>
# include  <stdlin.h>

typedef struct 
{
    int **values;
    int nrows;
    int ncols;
} Matrix;

Matrix *create(int nrows,int ncols)
{
    Matrix *matrix = malloc(sizeof(Matrix));

    if (matrix == NULL)
    {
        printf("ERRO: falha ao alocar memória para a matriz\n");
    }
    matrix->values = malloc(nrows * sizeof(int *));

    if(matrix-> values == NULL)
    {
        
        printf("ERRO: falha ao alocar memória para a matriz\n");
    }
    for (int i = 0; i < nrows; i++)
    {
        matrix->values[i] = malloc(ncols * sizeof(int));

        if (matrix ->values[i] == NULL)
        {
        printf("ERRO: falha ao alocar memória para a matriz\n");
        break;
        }
        
    }
    matrix->nrows = nrows;
    matrix->ncols = ncols;
    return matrix;
}
void print(Matrix *matrix)
{
    for (int i = 0; i < matrix->nrows; i++)
    {
        for (int j = 0; j < matrix->ncols; j++)
        {
            printf("%i", matrix->values[i][j]);
        }
        printf("\n");
    }
    
}
//utilizar a matriz como base para uma nova com o resultado
Matrix scale(Matrix *matrix,int scale)
{

}

int *extractDiagonal(Matrix *matrix)
{

}

int trace(Matrix *matrix)
{

}
