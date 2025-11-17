//Harshit patil 25070521104



#include <stdio.h>

// Enum to track the type of data stored in the union
enum Type {
    INTEGER,
    FLOATING_POINT
};

// Union definition
union Data {
	int integer;
	float floating_point;
};

struct Value {
    enum Type type;
    union Data data;
};

int main() {
    struct Value variable1, variable2;
   

    
   
    scanf("%d", &variable1.data.integer);
    variable1.type = INTEGER;

    // Clear the input buffer
    while (getchar() != '\n');

    // Input for variable2 (float)
    scanf("%f", &variable2.data.floating_point);
    variable2.type = FLOATING_POINT;

    // Print variable1
    if (variable1.type == INTEGER)
        printf("%d\n", variable1.data.integer);
    else
        printf("%.1f\n", variable1.data.floating_point);

    // Print variable2
    if (variable2.type == INTEGER)
        printf("%d\n", variable2.data.integer);
    else
        printf("%.1f\n", variable2.data.floating_point);



    

	return 0;
}
