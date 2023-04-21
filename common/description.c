#include <common.h>
#include <description.h>

#if defined(CONFIG_DESCRIPTION)
int show_description(void) {
    if(sizeof(CONFIG_DESCRIPTION) > 1)
        printf("Description: "CONFIG_DESCRIPTION "\n");

    return 0;
}
#endif