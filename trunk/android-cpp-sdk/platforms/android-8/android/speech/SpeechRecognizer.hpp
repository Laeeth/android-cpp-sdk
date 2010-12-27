/*================================================================================
  code generated by: java2cpp
  class: android.speech.SpeechRecognizer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_SPEECH_SPEECHRECOGNIZER_HPP_DECL
#define J2CPP_ANDROID_SPEECH_SPEECHRECOGNIZER_HPP_DECL


namespace j2cpp { namespace android { namespace speech { class RecognitionListener; } } }
namespace j2cpp { namespace android { namespace content { class ComponentName; } } }
namespace j2cpp { namespace android { namespace content { class Intent; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <android/content/ComponentName.hpp>
#include <android/content/Context.hpp>
#include <android/content/Intent.hpp>
#include <android/speech/RecognitionListener.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace speech {

	class SpeechRecognizer;
	class SpeechRecognizer
		: public cpp_object<SpeechRecognizer>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)

		SpeechRecognizer(jobject jobj)
		: cpp_object<SpeechRecognizer>(jobj)
		{
		}

		static cpp_boolean isRecognitionAvailable(local_ref< android::content::Context > const&);
		static local_ref< android::speech::SpeechRecognizer > createSpeechRecognizer(local_ref< android::content::Context > const&);
		static local_ref< android::speech::SpeechRecognizer > createSpeechRecognizer(local_ref< android::content::Context > const&, local_ref< android::content::ComponentName > const&);
		void setRecognitionListener(local_ref< android::speech::RecognitionListener > const&);
		void startListening(local_ref< android::content::Intent > const&);
		void stopListening();
		void cancel();
		void destroy();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > RESULTS_RECOGNITION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > ERROR_NETWORK_TIMEOUT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > ERROR_NETWORK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > ERROR_AUDIO;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > ERROR_SERVER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > ERROR_CLIENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > ERROR_SPEECH_TIMEOUT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), cpp_int > ERROR_NO_MATCH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), cpp_int > ERROR_RECOGNIZER_BUSY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), cpp_int > ERROR_INSUFFICIENT_PERMISSIONS;
	}; //class SpeechRecognizer

} //namespace speech
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_SPEECH_SPEECHRECOGNIZER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_SPEECH_SPEECHRECOGNIZER_HPP_IMPL
#define J2CPP_ANDROID_SPEECH_SPEECHRECOGNIZER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::speech::SpeechRecognizer > create< android::speech::SpeechRecognizer>()
{
	return local_ref< android::speech::SpeechRecognizer >(
		environment::get().get_jenv()->NewObject(
			get_class<android::speech::SpeechRecognizer::J2CPP_CLASS_NAME>(),
			get_method_id<android::speech::SpeechRecognizer::J2CPP_CLASS_NAME, android::speech::SpeechRecognizer::J2CPP_METHOD_NAME(0), android::speech::SpeechRecognizer::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_boolean android::speech::SpeechRecognizer::isRecognitionAvailable(local_ref< android::content::Context > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::speech::SpeechRecognizer > android::speech::SpeechRecognizer::createSpeechRecognizer(local_ref< android::content::Context > const &a0)
{
	return local_ref< android::speech::SpeechRecognizer >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::speech::SpeechRecognizer > android::speech::SpeechRecognizer::createSpeechRecognizer(local_ref< android::content::Context > const &a0, local_ref< android::content::ComponentName > const &a1)
{
	return local_ref< android::speech::SpeechRecognizer >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::speech::SpeechRecognizer::setRecognitionListener(local_ref< android::speech::RecognitionListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void android::speech::SpeechRecognizer::startListening(local_ref< android::content::Intent > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

void android::speech::SpeechRecognizer::stopListening()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void android::speech::SpeechRecognizer::cancel()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

void android::speech::SpeechRecognizer::destroy()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}


static_field<
	android::speech::SpeechRecognizer::J2CPP_CLASS_NAME,
	android::speech::SpeechRecognizer::J2CPP_FIELD_NAME(0),
	android::speech::SpeechRecognizer::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::speech::SpeechRecognizer::RESULTS_RECOGNITION;

static_field<
	android::speech::SpeechRecognizer::J2CPP_CLASS_NAME,
	android::speech::SpeechRecognizer::J2CPP_FIELD_NAME(1),
	android::speech::SpeechRecognizer::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::speech::SpeechRecognizer::ERROR_NETWORK_TIMEOUT;

static_field<
	android::speech::SpeechRecognizer::J2CPP_CLASS_NAME,
	android::speech::SpeechRecognizer::J2CPP_FIELD_NAME(2),
	android::speech::SpeechRecognizer::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::speech::SpeechRecognizer::ERROR_NETWORK;

static_field<
	android::speech::SpeechRecognizer::J2CPP_CLASS_NAME,
	android::speech::SpeechRecognizer::J2CPP_FIELD_NAME(3),
	android::speech::SpeechRecognizer::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::speech::SpeechRecognizer::ERROR_AUDIO;

static_field<
	android::speech::SpeechRecognizer::J2CPP_CLASS_NAME,
	android::speech::SpeechRecognizer::J2CPP_FIELD_NAME(4),
	android::speech::SpeechRecognizer::J2CPP_FIELD_SIGNATURE(4),
	cpp_int
> android::speech::SpeechRecognizer::ERROR_SERVER;

static_field<
	android::speech::SpeechRecognizer::J2CPP_CLASS_NAME,
	android::speech::SpeechRecognizer::J2CPP_FIELD_NAME(5),
	android::speech::SpeechRecognizer::J2CPP_FIELD_SIGNATURE(5),
	cpp_int
> android::speech::SpeechRecognizer::ERROR_CLIENT;

static_field<
	android::speech::SpeechRecognizer::J2CPP_CLASS_NAME,
	android::speech::SpeechRecognizer::J2CPP_FIELD_NAME(6),
	android::speech::SpeechRecognizer::J2CPP_FIELD_SIGNATURE(6),
	cpp_int
> android::speech::SpeechRecognizer::ERROR_SPEECH_TIMEOUT;

static_field<
	android::speech::SpeechRecognizer::J2CPP_CLASS_NAME,
	android::speech::SpeechRecognizer::J2CPP_FIELD_NAME(7),
	android::speech::SpeechRecognizer::J2CPP_FIELD_SIGNATURE(7),
	cpp_int
> android::speech::SpeechRecognizer::ERROR_NO_MATCH;

static_field<
	android::speech::SpeechRecognizer::J2CPP_CLASS_NAME,
	android::speech::SpeechRecognizer::J2CPP_FIELD_NAME(8),
	android::speech::SpeechRecognizer::J2CPP_FIELD_SIGNATURE(8),
	cpp_int
> android::speech::SpeechRecognizer::ERROR_RECOGNIZER_BUSY;

static_field<
	android::speech::SpeechRecognizer::J2CPP_CLASS_NAME,
	android::speech::SpeechRecognizer::J2CPP_FIELD_NAME(9),
	android::speech::SpeechRecognizer::J2CPP_FIELD_SIGNATURE(9),
	cpp_int
> android::speech::SpeechRecognizer::ERROR_INSUFFICIENT_PERMISSIONS;


J2CPP_DEFINE_CLASS(android::speech::SpeechRecognizer,"android/speech/SpeechRecognizer")
J2CPP_DEFINE_METHOD(android::speech::SpeechRecognizer,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::speech::SpeechRecognizer,1,"isRecognitionAvailable","(Landroid/content/Context;)Z")
J2CPP_DEFINE_METHOD(android::speech::SpeechRecognizer,2,"createSpeechRecognizer","(Landroid/content/Context;)Landroid/speech/SpeechRecognizer;")
J2CPP_DEFINE_METHOD(android::speech::SpeechRecognizer,3,"createSpeechRecognizer","(Landroid/content/Context;Landroid/content/ComponentName;)Landroid/speech/SpeechRecognizer;")
J2CPP_DEFINE_METHOD(android::speech::SpeechRecognizer,4,"setRecognitionListener","(Landroid/speech/RecognitionListener;)V")
J2CPP_DEFINE_METHOD(android::speech::SpeechRecognizer,5,"startListening","(Landroid/content/Intent;)V")
J2CPP_DEFINE_METHOD(android::speech::SpeechRecognizer,6,"stopListening","()V")
J2CPP_DEFINE_METHOD(android::speech::SpeechRecognizer,7,"cancel","()V")
J2CPP_DEFINE_METHOD(android::speech::SpeechRecognizer,8,"destroy","()V")
J2CPP_DEFINE_FIELD(android::speech::SpeechRecognizer,0,"RESULTS_RECOGNITION","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::SpeechRecognizer,1,"ERROR_NETWORK_TIMEOUT","I")
J2CPP_DEFINE_FIELD(android::speech::SpeechRecognizer,2,"ERROR_NETWORK","I")
J2CPP_DEFINE_FIELD(android::speech::SpeechRecognizer,3,"ERROR_AUDIO","I")
J2CPP_DEFINE_FIELD(android::speech::SpeechRecognizer,4,"ERROR_SERVER","I")
J2CPP_DEFINE_FIELD(android::speech::SpeechRecognizer,5,"ERROR_CLIENT","I")
J2CPP_DEFINE_FIELD(android::speech::SpeechRecognizer,6,"ERROR_SPEECH_TIMEOUT","I")
J2CPP_DEFINE_FIELD(android::speech::SpeechRecognizer,7,"ERROR_NO_MATCH","I")
J2CPP_DEFINE_FIELD(android::speech::SpeechRecognizer,8,"ERROR_RECOGNIZER_BUSY","I")
J2CPP_DEFINE_FIELD(android::speech::SpeechRecognizer,9,"ERROR_INSUFFICIENT_PERMISSIONS","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_SPEECH_SPEECHRECOGNIZER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION