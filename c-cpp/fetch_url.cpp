#include <stdio.h>
#include <curl/curl.h>

int main(void) {
    CURL *curl;
    CURLcode res;

    // Initializing libcurl library
    curl_global_init(CURL_GLOBAL_DEFAULT);

    // curl handle
    curl = curl_easy_init();
    if(curl) {
        //URL to fetch
        curl_easy_setopt(curl, CURLOPT_URL, "https://sprucebot.tech");

        // Perform the request and capture the result
        res = curl_easy_perform(curl);

        // Check for errors
        if(res != CURLE_OK)
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));

        // Cleanup
        curl_easy_cleanup(curl);
    }

    // Cleanup global state
    curl_global_cleanup();

    return 0;
}