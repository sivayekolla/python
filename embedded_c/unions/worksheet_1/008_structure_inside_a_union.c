enum DataType { INT, FLOAT };

struct Variant {
    enum DataType type;
    union {
        int i;
        float f;
    } data;
};

int main() {
    struct Variant v;

    v.type = INT;
    v.data.i = 42;

    if (v.type == INT)
        printf("Integer: %d\n", v.data.i);
    else
        printf("Float: %f\n", v.data.f);

    return 0;
}
