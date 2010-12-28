/*================================================================================
  code generated by: java2cpp
  class: java.util.HashSet
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_HASHSET_HPP_DECL
#define J2CPP_JAVA_UTIL_HASHSET_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }
namespace j2cpp { namespace java { namespace util { class Iterator; } } }
namespace j2cpp { namespace java { namespace util { class AbstractSet; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/util/AbstractSet.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Set.hpp>


namespace j2cpp {

namespace java { namespace util {

	class HashSet;
	class HashSet
		: public cpp_object<HashSet>
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
		J2CPP_DECLARE_METHOD(11)

		explicit HashSet(jobject jobj)
		: cpp_object<HashSet>(jobj)
		{
		}

		operator local_ref<java::util::AbstractSet>() const;
		operator local_ref<java::util::Set>() const;
		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::io::Serializable>() const;


		HashSet();
		HashSet(cpp_int const&);
		HashSet(cpp_int const&, cpp_float const&);
		HashSet(local_ref< java::util::Collection > const&);
		cpp_boolean add(local_ref< java::lang::Object > const&);
		void clear();
		local_ref< java::lang::Object > clone();
		cpp_boolean contains(local_ref< java::lang::Object > const&);
		cpp_boolean isEmpty();
		local_ref< java::util::Iterator > iterator();
		cpp_boolean remove(local_ref< java::lang::Object > const&);
		cpp_int size();
	}; //class HashSet

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_HASHSET_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_HASHSET_HPP_IMPL
#define J2CPP_JAVA_UTIL_HASHSET_HPP_IMPL

namespace j2cpp {



java::util::HashSet::operator local_ref<java::util::AbstractSet>() const
{
	return local_ref<java::util::AbstractSet>(get_jtype());
}

java::util::HashSet::operator local_ref<java::util::Set>() const
{
	return local_ref<java::util::Set>(get_jtype());
}

java::util::HashSet::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jtype());
}

java::util::HashSet::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jtype());
}


java::util::HashSet::HashSet()
: cpp_object<java::util::HashSet>(
	environment::get().get_jenv()->NewObject(
		get_class<java::util::HashSet::J2CPP_CLASS_NAME>(),
		get_method_id<java::util::HashSet::J2CPP_CLASS_NAME, java::util::HashSet::J2CPP_METHOD_NAME(0), java::util::HashSet::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}



java::util::HashSet::HashSet(cpp_int const &a0)
: cpp_object<java::util::HashSet>(
	environment::get().get_jenv()->NewObject(
		get_class<java::util::HashSet::J2CPP_CLASS_NAME>(),
		get_method_id<java::util::HashSet::J2CPP_CLASS_NAME, java::util::HashSet::J2CPP_METHOD_NAME(1), java::util::HashSet::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
{
}



java::util::HashSet::HashSet(cpp_int const &a0, cpp_float const &a1)
: cpp_object<java::util::HashSet>(
	environment::get().get_jenv()->NewObject(
		get_class<java::util::HashSet::J2CPP_CLASS_NAME>(),
		get_method_id<java::util::HashSet::J2CPP_CLASS_NAME, java::util::HashSet::J2CPP_METHOD_NAME(2), java::util::HashSet::J2CPP_METHOD_SIGNATURE(2), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}



java::util::HashSet::HashSet(local_ref< java::util::Collection > const &a0)
: cpp_object<java::util::HashSet>(
	environment::get().get_jenv()->NewObject(
		get_class<java::util::HashSet::J2CPP_CLASS_NAME>(),
		get_method_id<java::util::HashSet::J2CPP_CLASS_NAME, java::util::HashSet::J2CPP_METHOD_NAME(3), java::util::HashSet::J2CPP_METHOD_SIGNATURE(3), false>(),
		a0.get_jtype()
	)
)
{
}


cpp_boolean java::util::HashSet::add(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::HashSet::clear()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::HashSet::clone()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_boolean java::util::HashSet::contains(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::HashSet::isEmpty()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< java::util::Iterator > java::util::HashSet::iterator()
{
	return local_ref< java::util::Iterator >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_boolean java::util::HashSet::remove(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::HashSet::size()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::HashSet,"java/util/HashSet")
J2CPP_DEFINE_METHOD(java::util::HashSet,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::HashSet,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::util::HashSet,2,"<init>","(IF)V")
J2CPP_DEFINE_METHOD(java::util::HashSet,3,"<init>","(Ljava/util/Collection;)V")
J2CPP_DEFINE_METHOD(java::util::HashSet,4,"add","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::HashSet,5,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::HashSet,6,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::HashSet,7,"contains","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::HashSet,8,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(java::util::HashSet,9,"iterator","()Ljava/util/Iterator;")
J2CPP_DEFINE_METHOD(java::util::HashSet,10,"remove","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::HashSet,11,"size","()I")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_HASHSET_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION