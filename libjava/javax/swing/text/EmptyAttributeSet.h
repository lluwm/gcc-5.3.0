
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_EmptyAttributeSet__
#define __javax_swing_text_EmptyAttributeSet__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
          class AttributeSet;
          class EmptyAttributeSet;
      }
    }
  }
}

class javax::swing::text::EmptyAttributeSet : public ::java::lang::Object
{

public: // actually package-private
  EmptyAttributeSet();
public:
  jboolean containsAttribute(::java::lang::Object *, ::java::lang::Object *);
  jboolean containsAttributes(::javax::swing::text::AttributeSet *);
  ::javax::swing::text::AttributeSet * copyAttributes();
  ::java::lang::Object * getAttribute(::java::lang::Object *);
  jint getAttributeCount();
  ::java::util::Enumeration * getAttributeNames();
  ::javax::swing::text::AttributeSet * getResolveParent();
  jboolean isDefined(::java::lang::Object *);
  jboolean isEqual(::javax::swing::text::AttributeSet *);
  jboolean equals(::java::lang::Object *);
  static ::java::lang::Class class$;
};

#endif // __javax_swing_text_EmptyAttributeSet__
