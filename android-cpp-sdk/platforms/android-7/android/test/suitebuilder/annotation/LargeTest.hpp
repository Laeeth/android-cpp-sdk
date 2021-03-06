/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.test.suitebuilder.annotation.LargeTest
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_SUITEBUILDER_ANNOTATION_LARGETEST_HPP_DECL
#define J2CPP_ANDROID_TEST_SUITEBUILDER_ANNOTATION_LARGETEST_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { namespace annotation { class Annotation; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/annotation/Annotation.hpp>


namespace j2cpp {

namespace android { namespace test { namespace suitebuilder { namespace annotation {

	class LargeTest;
	class LargeTest
		: public object<LargeTest>
	{
	public:

		J2CPP_DECLARE_CLASS


		explicit LargeTest(jobject jobj)
		: object<LargeTest>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::annotation::Annotation>() const;

	}; //class LargeTest

} //namespace annotation
} //namespace suitebuilder
} //namespace test
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_SUITEBUILDER_ANNOTATION_LARGETEST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_SUITEBUILDER_ANNOTATION_LARGETEST_HPP_IMPL
#define J2CPP_ANDROID_TEST_SUITEBUILDER_ANNOTATION_LARGETEST_HPP_IMPL

namespace j2cpp {



android::test::suitebuilder::annotation::LargeTest::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::test::suitebuilder::annotation::LargeTest::operator local_ref<java::lang::annotation::Annotation>() const
{
	return local_ref<java::lang::annotation::Annotation>(get_jobject());
}

J2CPP_DEFINE_CLASS(android::test::suitebuilder::annotation::LargeTest,"android/test/suitebuilder/annotation/LargeTest")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_SUITEBUILDER_ANNOTATION_LARGETEST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
