#include <stdio.h>
#include <string.h>

struct personal {
    char name[100];
    char doj[20];
    float salary;
};

int main() {
    struct personal p;
    
    fgets(p.name, sizeof(p.name), stdin);
    p.name[strcspn(p.name, "\n")] = '\0';
    
    fgets(p.doj, sizeof(p.doj), stdin);
    p.doj[strcspn(p.doj, "\n")] = '\0';
    
    scanf("%f", &p.salary);
    
    printf("%s\n%s\n%.2f", p.name, p.doj, p.salary);
    return 0;
}