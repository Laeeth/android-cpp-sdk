/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.database.ContentObserver
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_CONTENTOBSERVER_HPP_DECL
#define J2CPP_ANDROID_DATABASE_CONTENTOBSERVER_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Handler; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/os/Handler.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace database {

	class ContentObserver;
	class ContentObserver
		: public object<ContentObserver>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit ContentObserver(jobject jobj)
		: object<ContentObserver>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		ContentObserver(local_ref< android::os::Handler > const&);
		jboolean deliverSelfNotifications();
		void onChange(jboolean);
		void dispatchChange(jboolean);
	}; //class ContentObserver

} //namespace database
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_CONTENTOBSERVER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_CONTENTOBSERVER_HPP_IMPL
#define J2CPP_ANDROID_DATABASE_CONTENTOBSERVER_HPP_IMPL

namespace j2cpp {



android::database::ContentObserver::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::database::ContentObserver::ContentObserver(local_ref< android::os::Handler > const &a0)
: object<android::database::ContentObserver>(
	call_new_object<
		android::database::ContentObserver::J2CPP_CLASS_NAME,
		android::database::ContentObserver::J2CPP_METHOD_NAME(0),
		android::database::ContentObserver::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


jboolean android::database::ContentObserver::deliverSelfNotifications()
{
	return call_method<
		android::database::ContentObserver::J2CPP_CLASS_NAME,
		android::database::ContentObserver::J2CPP_METHOD_NAME(1),
		android::database::ContentObserver::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject());
}

void android::database::ContentObserver::onChange(jboolean a0)
{
	return call_method<
		android::database::ContentObserver::J2CPP_CLASS_NAME,
		android::database::ContentObserver::J2CPP_METHOD_NAME(2),
		android::database::ContentObserver::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

void android::database::ContentObserver::dispatchChange(jboolean a0)
{
	return call_method<
		android::database::ContentObserver::J2CPP_CLASS_NAME,
		android::database::ContentObserver::J2CPP_METHOD_NAME(3),
		android::database::ContentObserver::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::database::ContentObserver,"android/database/ContentObserver")
J2CPP_DEFINE_METHOD(android::database::ContentObserver,0,"<init>","(Landroid/os/Handler;)V")
J2CPP_DEFINE_METHOD(android::database::ContentObserver,1,"deliverSelfNotifications","()Z")
J2CPP_DEFINE_METHOD(android::database::ContentObserver,2,"onChange","(Z)V")
J2CPP_DEFINE_METHOD(android::database::ContentObserver,3,"dispatchChange","(Z)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_CONTENTOBSERVER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
