/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.CompoundButton
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_COMPOUNDBUTTON_HPP_DECL
#define J2CPP_ANDROID_WIDGET_COMPOUNDBUTTON_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class Callback; } } } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } } }
namespace j2cpp { namespace android { namespace view { namespace accessibility { class AccessibilityEventSource; } } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { namespace ViewTreeObserver_ { class OnPreDrawListener; } } } }
namespace j2cpp { namespace android { namespace widget { class TextView; } } }
namespace j2cpp { namespace android { namespace widget { namespace CompoundButton_ { class OnCheckedChangeListener; } } } }
namespace j2cpp { namespace android { namespace widget { class Button; } } }
namespace j2cpp { namespace android { namespace widget { class Checkable; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/Context.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/os/Parcelable.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewTreeObserver.hpp>
#include <android/view/accessibility/AccessibilityEvent.hpp>
#include <android/view/accessibility/AccessibilityEventSource.hpp>
#include <android/widget/Button.hpp>
#include <android/widget/Checkable.hpp>
#include <android/widget/CompoundButton.hpp>
#include <android/widget/TextView.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class CompoundButton;
	namespace CompoundButton_ {

		class OnCheckedChangeListener;
		class OnCheckedChangeListener
			: public object<OnCheckedChangeListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnCheckedChangeListener(jobject jobj)
			: object<OnCheckedChangeListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onCheckedChanged(local_ref< android::widget::CompoundButton >  const&, jboolean);
		}; //class OnCheckedChangeListener

	} //namespace CompoundButton_

	class CompoundButton
		: public object<CompoundButton>
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
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)

		typedef CompoundButton_::OnCheckedChangeListener OnCheckedChangeListener;

		explicit CompoundButton(jobject jobj)
		: object<CompoundButton>(jobj)
		{
		}

		operator local_ref<android::graphics::drawable::Drawable_::Callback>() const;
		operator local_ref<android::view::accessibility::AccessibilityEventSource>() const;
		operator local_ref<android::view::View>() const;
		operator local_ref<android::view::ViewTreeObserver_::OnPreDrawListener>() const;
		operator local_ref<android::widget::TextView>() const;
		operator local_ref<android::widget::Button>() const;
		operator local_ref<android::widget::Checkable>() const;
		operator local_ref<java::lang::Object>() const;


		CompoundButton(local_ref< android::content::Context > const&);
		CompoundButton(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		CompoundButton(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, jint);
		void toggle();
		jboolean performClick();
		jboolean isChecked();
		void setChecked(jboolean);
		void setOnCheckedChangeListener(local_ref< android::widget::CompoundButton_::OnCheckedChangeListener >  const&);
		void setButtonDrawable(jint);
		void setButtonDrawable(local_ref< android::graphics::drawable::Drawable >  const&);
		jboolean dispatchPopulateAccessibilityEvent(local_ref< android::view::accessibility::AccessibilityEvent >  const&);
		local_ref< android::os::Parcelable > onSaveInstanceState();
		void onRestoreInstanceState(local_ref< android::os::Parcelable >  const&);
	}; //class CompoundButton

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_COMPOUNDBUTTON_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_COMPOUNDBUTTON_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_COMPOUNDBUTTON_HPP_IMPL

namespace j2cpp {




android::widget::CompoundButton_::OnCheckedChangeListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::widget::CompoundButton_::OnCheckedChangeListener::onCheckedChanged(local_ref< android::widget::CompoundButton > const &a0, jboolean a1)
{
	return call_method<
		android::widget::CompoundButton_::OnCheckedChangeListener::J2CPP_CLASS_NAME,
		android::widget::CompoundButton_::OnCheckedChangeListener::J2CPP_METHOD_NAME(0),
		android::widget::CompoundButton_::OnCheckedChangeListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::widget::CompoundButton_::OnCheckedChangeListener,"android/widget/CompoundButton$OnCheckedChangeListener")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton_::OnCheckedChangeListener,0,"onCheckedChanged","(Landroid/widget/CompoundButton;Z)V")



android::widget::CompoundButton::operator local_ref<android::graphics::drawable::Drawable_::Callback>() const
{
	return local_ref<android::graphics::drawable::Drawable_::Callback>(get_jobject());
}

android::widget::CompoundButton::operator local_ref<android::view::accessibility::AccessibilityEventSource>() const
{
	return local_ref<android::view::accessibility::AccessibilityEventSource>(get_jobject());
}

android::widget::CompoundButton::operator local_ref<android::view::View>() const
{
	return local_ref<android::view::View>(get_jobject());
}

android::widget::CompoundButton::operator local_ref<android::view::ViewTreeObserver_::OnPreDrawListener>() const
{
	return local_ref<android::view::ViewTreeObserver_::OnPreDrawListener>(get_jobject());
}

android::widget::CompoundButton::operator local_ref<android::widget::TextView>() const
{
	return local_ref<android::widget::TextView>(get_jobject());
}

android::widget::CompoundButton::operator local_ref<android::widget::Button>() const
{
	return local_ref<android::widget::Button>(get_jobject());
}

android::widget::CompoundButton::operator local_ref<android::widget::Checkable>() const
{
	return local_ref<android::widget::Checkable>(get_jobject());
}

android::widget::CompoundButton::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::widget::CompoundButton::CompoundButton(local_ref< android::content::Context > const &a0)
: object<android::widget::CompoundButton>(
	call_new_object<
		android::widget::CompoundButton::J2CPP_CLASS_NAME,
		android::widget::CompoundButton::J2CPP_METHOD_NAME(0),
		android::widget::CompoundButton::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



android::widget::CompoundButton::CompoundButton(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::CompoundButton>(
	call_new_object<
		android::widget::CompoundButton::J2CPP_CLASS_NAME,
		android::widget::CompoundButton::J2CPP_METHOD_NAME(1),
		android::widget::CompoundButton::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



android::widget::CompoundButton::CompoundButton(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, jint a2)
: object<android::widget::CompoundButton>(
	call_new_object<
		android::widget::CompoundButton::J2CPP_CLASS_NAME,
		android::widget::CompoundButton::J2CPP_METHOD_NAME(2),
		android::widget::CompoundButton::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1, a2)
)
{
}


void android::widget::CompoundButton::toggle()
{
	return call_method<
		android::widget::CompoundButton::J2CPP_CLASS_NAME,
		android::widget::CompoundButton::J2CPP_METHOD_NAME(3),
		android::widget::CompoundButton::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject());
}

jboolean android::widget::CompoundButton::performClick()
{
	return call_method<
		android::widget::CompoundButton::J2CPP_CLASS_NAME,
		android::widget::CompoundButton::J2CPP_METHOD_NAME(4),
		android::widget::CompoundButton::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject());
}

jboolean android::widget::CompoundButton::isChecked()
{
	return call_method<
		android::widget::CompoundButton::J2CPP_CLASS_NAME,
		android::widget::CompoundButton::J2CPP_METHOD_NAME(5),
		android::widget::CompoundButton::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject());
}

void android::widget::CompoundButton::setChecked(jboolean a0)
{
	return call_method<
		android::widget::CompoundButton::J2CPP_CLASS_NAME,
		android::widget::CompoundButton::J2CPP_METHOD_NAME(6),
		android::widget::CompoundButton::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

void android::widget::CompoundButton::setOnCheckedChangeListener(local_ref< android::widget::CompoundButton_::OnCheckedChangeListener > const &a0)
{
	return call_method<
		android::widget::CompoundButton::J2CPP_CLASS_NAME,
		android::widget::CompoundButton::J2CPP_METHOD_NAME(7),
		android::widget::CompoundButton::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

void android::widget::CompoundButton::setButtonDrawable(jint a0)
{
	return call_method<
		android::widget::CompoundButton::J2CPP_CLASS_NAME,
		android::widget::CompoundButton::J2CPP_METHOD_NAME(8),
		android::widget::CompoundButton::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}

void android::widget::CompoundButton::setButtonDrawable(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return call_method<
		android::widget::CompoundButton::J2CPP_CLASS_NAME,
		android::widget::CompoundButton::J2CPP_METHOD_NAME(9),
		android::widget::CompoundButton::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}

jboolean android::widget::CompoundButton::dispatchPopulateAccessibilityEvent(local_ref< android::view::accessibility::AccessibilityEvent > const &a0)
{
	return call_method<
		android::widget::CompoundButton::J2CPP_CLASS_NAME,
		android::widget::CompoundButton::J2CPP_METHOD_NAME(10),
		android::widget::CompoundButton::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject(), a0);
}





local_ref< android::os::Parcelable > android::widget::CompoundButton::onSaveInstanceState()
{
	return call_method<
		android::widget::CompoundButton::J2CPP_CLASS_NAME,
		android::widget::CompoundButton::J2CPP_METHOD_NAME(15),
		android::widget::CompoundButton::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< android::os::Parcelable >
	>(get_jobject());
}

void android::widget::CompoundButton::onRestoreInstanceState(local_ref< android::os::Parcelable > const &a0)
{
	return call_method<
		android::widget::CompoundButton::J2CPP_CLASS_NAME,
		android::widget::CompoundButton::J2CPP_METHOD_NAME(16),
		android::widget::CompoundButton::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::widget::CompoundButton,"android/widget/CompoundButton")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,3,"toggle","()V")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,4,"performClick","()Z")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,5,"isChecked","()Z")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,6,"setChecked","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,7,"setOnCheckedChangeListener","(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,8,"setButtonDrawable","(I)V")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,9,"setButtonDrawable","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,10,"dispatchPopulateAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,11,"onDraw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,12,"onCreateDrawableState","(I)[I")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,13,"drawableStateChanged","()V")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,14,"verifyDrawable","(Landroid/graphics/drawable/Drawable;)Z")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,15,"onSaveInstanceState","()Landroid/os/Parcelable;")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,16,"onRestoreInstanceState","(Landroid/os/Parcelable;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_COMPOUNDBUTTON_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION