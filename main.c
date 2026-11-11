#include <stdio.h>
#include <sys/utsname.h>

int main() {

    struct utsname system;

    if (uname(&system) == -1) {
        perror("uname failed");
        return 1;
    }


    printf("      MY SYSTEM INFORMATION\n");

    printf("Operating System : %s\n", system.sysname);
    printf("Hostname         : %s\n", system.nodename);
    printf("Kernel Version   : %s\n", system.release);
    printf("Architecture     : %s\n", system.machine);

    return 0;
}
