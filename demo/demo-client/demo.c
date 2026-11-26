#include <stdlib.h>
#include <stdio.h>
#include <wayland-client.h>


int
main (int argc, char *argv[])
{
	printf("%s\n", "## demo wayland-client ##");

	struct wl_display *ref_display = wl_display_connect(NULL);

	if (!ref_display) {
		fprintf(stderr, "%s\n", ":: Failed to connect Wayland display." );
		return EXIT_FAILURE;
	}

	fprintf(stderr, "%s\n", ":: Wayland display connection established." );

	wl_display_disconnect(ref_display);

	return EXIT_SUCCESS;
}
