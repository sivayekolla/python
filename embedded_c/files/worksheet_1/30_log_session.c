/*Log Session a grocery store inventory where you can add, update, or remove items using a file.
Input: Add item: Milk, 2 litres, Rs.40
Output: Inventory file now includes the new item*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

typedef struct {
    char name[MAX_LENGTH];
    char quantity[MAX_LENGTH];
    float price;
} Item;

void add_item(const char *filename, Item item) {
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        perror("Unable to open file");
        return;
    }
    fprintf(file, "%s,%s,%.2f\n", item.name, item.quantity, item.price);
    fclose(file);
}

void update_item(const char *filename, const char *item_name, Item new_item) {
    FILE *file = fopen(filename, "r+");
    if (file == NULL) {
        perror("Unable to open file");
        return;
    }

    char line[MAX_LENGTH];
    long pos;
    int found = 0;

    while (fgets(line, sizeof(line), file)) {
        pos = ftell(file);
        if (strstr(line, item_name) != NULL) {
            found = 1;
            break;
        }
    }

    if (found) {
        fseek(file, pos - strlen(line), SEEK_SET);
        fprintf(file, "%s,%s,%.2f\n", new_item.name, new_item.quantity, new_item.price);
    }

    fclose(file);
}

void remove_item(const char *filename, const char *item_name) {
    FILE *file = fopen(filename, "r");
    FILE *temp = fopen("temp.txt", "w");
    if (file == NULL || temp == NULL) {
        perror("Unable to open file");
        return;
    }

    char line[MAX_LENGTH];

    while (fgets(line, sizeof(line), file)) {
        if (strstr(line, item_name) == NULL) {
            fputs(line, temp);
        }
    }

    fclose(file);
    fclose(temp);
    remove(filename);
    rename("temp.txt", filename);
}

void display_inventory(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Unable to open file");
        return;
    }

    char line[MAX_LENGTH];

    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file);
}

int main() {
    const char *filename = "inventory.txt";
    int choice;
    Item item;
    char name[MAX_LENGTH];

    while (1) {
        printf("\nGrocery Store Inventory\n");
        printf("1. Add item  2. Update item  3. Remove item  4. Display inventory  5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 
        switch (choice) {
            case 1:
                printf("Enter item name: ");
                fgets(item.name, MAX_LENGTH, stdin);
                item.name[strcspn(item.name, "\n")] = '\0';
                printf("Enter quantity: ");
                fgets(item.quantity, MAX_LENGTH, stdin);
                item.quantity[strcspn(item.quantity, "\n")] = '\0';
                printf("Enter price: ");
                scanf("%f", &item.price);
                getchar();
                add_item(filename, item);
                printf("Item added.\n");
                break;
            case 2:
                printf("Enter name of item to update: ");
                fgets(name, MAX_LENGTH, stdin);
                name[strcspn(name, "\n")] = '\0';
                printf("Enter new item name: ");
                fgets(item.name, MAX_LENGTH, stdin);
                item.name[strcspn(item.name, "\n")] = '\0';
                printf("Enter new quantity: ");
                fgets(item.quantity, MAX_LENGTH, stdin);
                item.quantity[strcspn(item.quantity, "\n")] = '\0';
                printf("Enter new price: ");
                scanf("%f", &item.price);
                getchar();
                update_item(filename, name, item);
                break;
            case 3:
                printf("Enter name of item to remove: ");
                fgets(name, MAX_LENGTH, stdin);
                name[strcspn(name, "\n")] = '\0';
                remove_item(filename, name);
                break;
            case 4:
                display_inventory(filename);
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}
