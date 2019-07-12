## How NDK can help on security

With NDK we can store api key in an .so file, making it very hard for the attacker (.so files can hardly be 

decompiled, and disassembling those files is far from being a comfortable option).

## When to use?
When you have 3rd party library static api key eg Firebase **app_key**, **app_secret** that need to be in application code base to run the apk 

then we can use this mechanism. Also the REST api server url **https://** can be added there


## Reference 

- https://github.com/googlesamples/android-ndk
- https://medium.com/@abhi007tyagi/storing-api-keys-using-android-ndk-6abb0adcadad
- https://proandroiddev.com/developing-secure-android-apps-8edad978d8ba
- https://blog.squareboat.com/securing-api-keys-inside-android-apps-using-android-ndk-be2e7e29dfd3


## Hiding API keys from your Android repository

- https://medium.com/code-better/hiding-api-keys-from-your-android-repository-b23f5598b906
