#include <description.h>

#if defined(CONFIG_DESCRIPTION)
void __weak show_description(void) {
    printf("Description: "CONFIG_DESCRIPTION "\n");
}
#endif