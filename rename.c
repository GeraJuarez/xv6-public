#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    // Exit if does not have enough parameters
    if(argc != 3){
        printf(2, "Usage: rename old_name new_name\n");
        exit();
    }

    // Create a link with a different name
    if(link(argv[1], argv[2]) < 0) {
        printf(2, "rename %s %s: failed\n", argv[1], argv[2]);
        exit();
    }
  
    // Delete the previous link with the old name
    if(unlink(argv[1]) < 0){
        printf(2, "rename: %s failed to rename\n", argv[1]);
        exit();
    }

  exit();
}
