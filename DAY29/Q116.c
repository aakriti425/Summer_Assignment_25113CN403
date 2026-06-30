// Inventory Management System

#include <stdio.h>
#include <string.h>

struct Product
{
    int id;
    char name[100];
    int quantity;
    float price;
};

void addProduct(FILE *fptr)
{
    struct Product p;

    printf("Enter Product ID : ");
    scanf("%d", &p.id);
    getchar();

    printf("Enter Product Name : ");
    scanf("%[^\n]", p.name);

    printf("Enter Quantity : ");
    scanf("%d", &p.quantity);

    printf("Enter Price : ");
    scanf("%f", &p.price);

    fwrite(&p, sizeof(p), 1, fptr);

    printf("Product Added Successfully!\n");
}

void displayProducts(FILE *fptr)
{
    struct Product p;

    rewind(fptr);

    printf("\n----- Product List -----\n");

    while (fread(&p, sizeof(p), 1, fptr))
    {
        printf("\nProduct ID : %d", p.id);
        printf("\nName       : %s", p.name);
        printf("\nQuantity   : %d", p.quantity);
        printf("\nPrice      : %.2f\n", p.price);
    }
}

void searchProduct(FILE *fptr)
{
    int id;
    struct Product p;
    int found = 0;

    printf("Enter Product ID : ");
    scanf("%d", &id);

    rewind(fptr);

    while (fread(&p, sizeof(p), 1, fptr))
    {
        if (p.id == id)
        {
            printf("\nProduct Found!");
            printf("\nProduct ID : %d", p.id);
            printf("\nName       : %s", p.name);
            printf("\nQuantity   : %d", p.quantity);
            printf("\nPrice      : %.2f\n", p.price);

            found = 1;
            break;
        }
    }

    if (!found)
        printf("Product Not Found!\n");
}

void updateQuantity(FILE *fptr)
{
    int id, qty;
    struct Product p;
    int found = 0;

    printf("Enter Product ID : ");
    scanf("%d", &id);

    rewind(fptr);

    while (fread(&p, sizeof(p), 1, fptr))
    {
        if (p.id == id)
        {
            found = 1;

            printf("Enter New Quantity : ");
            scanf("%d", &qty);

            p.quantity = qty;

            fseek(fptr, -sizeof(p), SEEK_CUR);
            fwrite(&p, sizeof(p), 1, fptr);

            printf("Quantity Updated Successfully!\n");
            break;
        }
    }

    if (!found)
        printf("Product Not Found!\n");
}

int main()
{
    FILE *fptr = fopen("inventory.dat", "r+b");

    if (fptr == NULL)
        fptr = fopen("inventory.dat", "w+b");

    int choice;

    while (1)
    {
        printf("\n===== Inventory Management System =====\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Quantity\n");
        printf("5. Exit\n");

        printf("Enter Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addProduct(fptr);
            break;

        case 2:
            displayProducts(fptr);
            break;

        case 3:
            searchProduct(fptr);
            break;

        case 4:
            updateQuantity(fptr);
            break;

        case 5:
            fclose(fptr);
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}