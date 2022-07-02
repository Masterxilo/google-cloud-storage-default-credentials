WORK-IN-PROGRESS

Reads environment variable GOOGLE_APPLICATION_CREDENTIALS and outputs the `GoogleDefaultCredentials().AuthorizationHeader()` on stdout.

Similar to https://github.com/Masterxilo/google-auth-library-token and 

```bash
gcloud auth application-default print-access-token
```
But does not depend on the entire google-cloud-sdk.


# Dependencies
## google-cloud-storage
C++ API for Google Cloud Storage, see
* https://github.com/googleapis/google-cloud-cpp
* https://googleapis.dev/cpp/google-cloud-storage/latest/
