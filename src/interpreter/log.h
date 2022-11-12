/* LOG.H OF THE CEIROP PROJECT (CRP_INTERPRETER) */

#define OTHER 0
#define INFO 1
#define WARNING 2
#define ERROR 3
#define CRITICAL 4

void Log(int lvl, char string[]) {
    if (DEBUG == 0) { return; }
    switch lvl {
        case 0:
            printf("OTHER: %s\n", string);
        case 1:
            printf("INFO: %s\n", string);
        case 2:
            printf("WARNING: %s\n", string);
        case 3:
            printf("ERROR: %s\n", string);
        case 4:
            printf("CRITICAL: %s\n", string);
        default:
            printf("WARNING: Log level is not supported.\n");
    }
    return;
}
