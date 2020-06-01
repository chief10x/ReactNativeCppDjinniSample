package com.reactcppbridge.nativemodules

import com.facebook.react.bridge.Promise
import com.facebook.react.bridge.ReactApplicationContext
import com.facebook.react.bridge.ReactContextBaseJavaModule
import com.facebook.react.bridge.ReactMethod
import com.reactcppbridge.StringMessage

class StringMessageModule(reactContext: ReactApplicationContext) :
        ReactContextBaseJavaModule(reactContext) {

    companion object {

        init {
            System.loadLibrary("stringmessage")
        }
    }

    val cppApi = StringMessage.create()

    override fun getName() = "StringMessage"

    @ReactMethod
    fun newMessage(promise: Promise) {

        val message = cppApi.stringMessage

        promise.resolve(message)
    }
}