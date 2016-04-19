 int main() {
    char first_name[] = "Jhon";
    char last_name[] = "Doe";
    char name[100];

    if (strncmp(first_name, "Jhon") != 0)
        return 1;
    if (strncmp(last_name, "Doe") != 0) 
        return 1;

    last_name[0] = 'B';
    sprintf(name, %s %s, first_name, last_name);
    
    
    if (strncmp(name, "Jhon Boe", 100) == 0){
        printf("Done!\n");
    }

