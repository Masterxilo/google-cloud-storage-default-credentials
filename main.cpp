#include "google/cloud/storage/client.h"
#include <iostream>

int main() {
    auto googleDefaultCredentials = google::cloud::storage::oauth2::GoogleDefaultCredentials().value();
    std::cout << googleDefaultCredentials->AuthorizationHeader().value();
    return 0;
}
