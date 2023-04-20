#include <description.h>

#if defined(CONFIG_DESCRIPTION)
void show_description(void) {
    printf("Description: "CONFIG_DESCRIPTION "\n");
}
#endif