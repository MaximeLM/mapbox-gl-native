#pragma once

#include <mbgl/util/noncopyable.hpp>

#include <jni/jni.hpp>

namespace mbgl {
namespace android {

class TransitionOptions : private mbgl::util::noncopyable {
public:
    static constexpr auto Name() { return "com/mapbox/mapboxsdk/style/layers/TransitionOptions"; };

    static jni::Local<jni::Object<TransitionOptions>> fromTransitionOptions(jni::JNIEnv&, jlong duration, jlong offset);

    static void registerNative(jni::JNIEnv&);
};

} // namespace android
} // namespace mbgl