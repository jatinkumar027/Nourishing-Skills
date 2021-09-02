#include<stdio.h>
#include<stdlib.h>
struct myArray{
    int total_size;
    int used_size;
    int *ptr;
};

void create_array(struct myArray *array, int Tsize, int Usize){
    array->total_size = Tsize;
    array->used_size = Usize;
    array->ptr = (int *)malloc(Tsize * sizeof(int));
}

void insert_array(struct myArray *array){
    int n;
    for(int i = 0;i<array->used_size;i++){
        printf("Enter the Element: ");
        scanf("%d", &n);
        (array->ptr)[i] = n;
    }
}

void show_array(struct myArray *array){
    for(int i=0;i<array->used_size;i++){
        printf("%d\n",array->ptr[i]);
    }
}

int main()
{
    int tsize, usize;
    struct myArray marks;
    printf("Enter the Total size: ");
    scanf("%d",&tsize);
    printf("Enter the Used size: ");
    scanf("%d", &usize);
    create_array(&marks, tsize,usize);
    insert_array(&marks);
    show_array(&marks);
    return 0;
}