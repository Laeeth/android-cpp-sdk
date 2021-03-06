/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.sql.Clob
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_CLOB_HPP_DECL
#define J2CPP_JAVA_SQL_CLOB_HPP_DECL


namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class Writer; } } }
namespace j2cpp { namespace java { namespace io { class Reader; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/io/Reader.hpp>
#include <java/io/Writer.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class Clob;
	class Clob
		: public object<Clob>
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
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)

		explicit Clob(jobject jobj)
		: object<Clob>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::io::InputStream > getAsciiStream();
		local_ref< java::io::Reader > getCharacterStream();
		local_ref< java::lang::String > getSubString(jlong, jint);
		jlong length();
		jlong position(local_ref< java::sql::Clob >  const&, jlong);
		jlong position(local_ref< java::lang::String >  const&, jlong);
		local_ref< java::io::OutputStream > setAsciiStream(jlong);
		local_ref< java::io::Writer > setCharacterStream(jlong);
		jint setString(jlong, local_ref< java::lang::String >  const&);
		jint setString(jlong, local_ref< java::lang::String >  const&, jint, jint);
		void truncate(jlong);
	}; //class Clob

} //namespace sql
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_CLOB_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_CLOB_HPP_IMPL
#define J2CPP_JAVA_SQL_CLOB_HPP_IMPL

namespace j2cpp {



java::sql::Clob::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::io::InputStream > java::sql::Clob::getAsciiStream()
{
	return call_method<
		java::sql::Clob::J2CPP_CLASS_NAME,
		java::sql::Clob::J2CPP_METHOD_NAME(0),
		java::sql::Clob::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::io::InputStream >
	>(get_jobject());
}

local_ref< java::io::Reader > java::sql::Clob::getCharacterStream()
{
	return call_method<
		java::sql::Clob::J2CPP_CLASS_NAME,
		java::sql::Clob::J2CPP_METHOD_NAME(1),
		java::sql::Clob::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::io::Reader >
	>(get_jobject());
}

local_ref< java::lang::String > java::sql::Clob::getSubString(jlong a0, jint a1)
{
	return call_method<
		java::sql::Clob::J2CPP_CLASS_NAME,
		java::sql::Clob::J2CPP_METHOD_NAME(2),
		java::sql::Clob::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject(), a0, a1);
}

jlong java::sql::Clob::length()
{
	return call_method<
		java::sql::Clob::J2CPP_CLASS_NAME,
		java::sql::Clob::J2CPP_METHOD_NAME(3),
		java::sql::Clob::J2CPP_METHOD_SIGNATURE(3), 
		jlong
	>(get_jobject());
}

jlong java::sql::Clob::position(local_ref< java::sql::Clob > const &a0, jlong a1)
{
	return call_method<
		java::sql::Clob::J2CPP_CLASS_NAME,
		java::sql::Clob::J2CPP_METHOD_NAME(4),
		java::sql::Clob::J2CPP_METHOD_SIGNATURE(4), 
		jlong
	>(get_jobject(), a0, a1);
}

jlong java::sql::Clob::position(local_ref< java::lang::String > const &a0, jlong a1)
{
	return call_method<
		java::sql::Clob::J2CPP_CLASS_NAME,
		java::sql::Clob::J2CPP_METHOD_NAME(5),
		java::sql::Clob::J2CPP_METHOD_SIGNATURE(5), 
		jlong
	>(get_jobject(), a0, a1);
}

local_ref< java::io::OutputStream > java::sql::Clob::setAsciiStream(jlong a0)
{
	return call_method<
		java::sql::Clob::J2CPP_CLASS_NAME,
		java::sql::Clob::J2CPP_METHOD_NAME(6),
		java::sql::Clob::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::io::OutputStream >
	>(get_jobject(), a0);
}

local_ref< java::io::Writer > java::sql::Clob::setCharacterStream(jlong a0)
{
	return call_method<
		java::sql::Clob::J2CPP_CLASS_NAME,
		java::sql::Clob::J2CPP_METHOD_NAME(7),
		java::sql::Clob::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::io::Writer >
	>(get_jobject(), a0);
}

jint java::sql::Clob::setString(jlong a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		java::sql::Clob::J2CPP_CLASS_NAME,
		java::sql::Clob::J2CPP_METHOD_NAME(8),
		java::sql::Clob::J2CPP_METHOD_SIGNATURE(8), 
		jint
	>(get_jobject(), a0, a1);
}

jint java::sql::Clob::setString(jlong a0, local_ref< java::lang::String > const &a1, jint a2, jint a3)
{
	return call_method<
		java::sql::Clob::J2CPP_CLASS_NAME,
		java::sql::Clob::J2CPP_METHOD_NAME(9),
		java::sql::Clob::J2CPP_METHOD_SIGNATURE(9), 
		jint
	>(get_jobject(), a0, a1, a2, a3);
}

void java::sql::Clob::truncate(jlong a0)
{
	return call_method<
		java::sql::Clob::J2CPP_CLASS_NAME,
		java::sql::Clob::J2CPP_METHOD_NAME(10),
		java::sql::Clob::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::sql::Clob,"java/sql/Clob")
J2CPP_DEFINE_METHOD(java::sql::Clob,0,"getAsciiStream","()Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(java::sql::Clob,1,"getCharacterStream","()Ljava/io/Reader;")
J2CPP_DEFINE_METHOD(java::sql::Clob,2,"getSubString","(JI)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::sql::Clob,3,"length","()J")
J2CPP_DEFINE_METHOD(java::sql::Clob,4,"position","(Ljava/sql/Clob;J)J")
J2CPP_DEFINE_METHOD(java::sql::Clob,5,"position","(Ljava/lang/String;J)J")
J2CPP_DEFINE_METHOD(java::sql::Clob,6,"setAsciiStream","(J)Ljava/io/OutputStream;")
J2CPP_DEFINE_METHOD(java::sql::Clob,7,"setCharacterStream","(J)Ljava/io/Writer;")
J2CPP_DEFINE_METHOD(java::sql::Clob,8,"setString","(JLjava/lang/String;)I")
J2CPP_DEFINE_METHOD(java::sql::Clob,9,"setString","(JLjava/lang/String;II)I")
J2CPP_DEFINE_METHOD(java::sql::Clob,10,"truncate","(J)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_CLOB_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
