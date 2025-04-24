#include <stdio.h>
#include <stdlib.h>


int main(){
    int composer_exists;
    int is_setup_exists;
    int dependency_installed;

    composer_exists = system("composer --version > nul 2>&1");
    if (composer_exists == 0) {
        printf("[+] Installing composer dependencies...\n");
        dependency_installed = system("composer install");
        if (dependency_installed == 0) {
            printf("[+] Composer dependencies installed successfully.\n");
            return 0;
        }
        return 1;
    }

    // Download composer-setup.php if it doesn't exist (for windows only | linux doesn't really need this!!)
    else {
        // check if composer-setup exists
        is_setup_exists = system("ls composer-setup.exe > nul 2>&1");
        
        // if it doesn't exist, download it
        is_setup_exists= is_setup_exists!=0 ? 
        system("curl  https://getcomposer.org/Composer-Setup.exe -o composer-setup.exe") && printf("[+] composer-setup.exe downloaded !!\n")
        : 0;

        if (is_setup_exists == 0) {
            ;
            printf("[+] Installing composer...\n");
            system("composer-setup.exe");

            printf("[+] Composer installed successfully.\n");
            system("rm composer-setup.exe");
            
            printf("[-] Restart the shell or VS code to access composer.\n");
            return 1;
        }
        else {
            printf("[-] Failed to download composer-setup.exe\n");
            return 1;
        }
    }
    
}
