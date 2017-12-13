#include <appimage/appimage.h>
#include <stdio.h>

int main (int argc, char** argv) {
	appimage_unregister_in_system("/home/tmp", 0);
    char * out = get_md5("/home");
    printf("%s\n", out);

    return 0;
}
