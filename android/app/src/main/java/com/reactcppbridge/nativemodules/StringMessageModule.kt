package com.reactcppbridge.nativemodules

import com.facebook.react.bridge.Promise
import com.facebook.react.bridge.ReactApplicationContext
import com.facebook.react.bridge.ReactContextBaseJavaModule
import com.facebook.react.bridge.ReactMethod

class StringMessageModule(reactContext: ReactApplicationContext) :
        ReactContextBaseJavaModule(reactContext) {

    override fun getName() = "StringMessage"

    @ReactMethod
    fun newMessage(promise: Promise) {
        promise.resolve("Cazzo!")
    }
}