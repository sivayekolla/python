void init(void) {
    printf("initialized.\n");
}

void start(void) {
    printf("Device started.\n");
}

void stop(void) {
    printf("Device stopped.\n");
}


typedef enum {
    CMD_INIT = 0,
    CMD_START,
    CMD_STOP,
    CMD_COUNT  
} Command;

int main() {
   
    void (*cmd_table[CMD_COUNT])(void) = {init, start, stop};

    
    for (int i = 0; i < CMD_COUNT; i++) {
        printf("Executing command %d: ", i);
        cmd_table[i]();  
    }

    Command cmd = CMD_START;
    printf("Executing selected command: ");
    cmd_table[cmd]();

    return 0;
}