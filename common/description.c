#include <description.h>

void show_description(void) {
#if defined(CONFIG_DESCRIPTION)
    printf("Description: "CONFIG_DESCRIPTION "\n");
#endif
}