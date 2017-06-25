
;;;wxFont.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcvar ("wxNull_Font" wxNull_Font)
 :pointer)

(cffi:defcvar ("wxNormal_Font" wxNormal_Font)
 :pointer)

(cffi:defcvar ("wxSmall_Font" wxSmall_Font)
 :pointer)

(cffi:defcvar ("wxSwiss_Font" wxSwiss_Font)
 :pointer)

(cffi:defcvar ("wxItalic_Font" wxItalic_Font)
 :pointer)

(cffi:defcfun ("wxFont_Create" wxFont_Create) :pointer
  (pointSize :int)
  (family :int)
  (style :int)
  (weight :int)
  (underlined :int)
  (face :string)
  (enc :int))

(cffi:defcfun ("wxFont_CreateDefault" wxFont_CreateDefault) :pointer)

(cffi:defcfun ("wxFont_Delete" wxFont_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxFont_Ok" wxFont_Ok) :int
  (_obj :pointer))

(cffi:defcfun ("wxFont_GetPointSize" wxFont_GetPointSize) :int
  (_obj :pointer))

(cffi:defcfun ("wxFont_GetFamily" wxFont_GetFamily) :int
  (_obj :pointer))

(cffi:defcfun ("wxFont_GetStyle" wxFont_GetStyle) :int
  (_obj :pointer))

(cffi:defcfun ("wxFont_GetWeight" wxFont_GetWeight) :int
  (_obj :pointer))

(cffi:defcfun ("wxFont_GetUnderlined" wxFont_GetUnderlined) :int
  (_obj :pointer))

(cffi:defcfun ("wxFont_GetFaceName" wxFont_GetFaceName) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxFont_GetEncoding" wxFont_GetEncoding) :int
  (_obj :pointer))

(cffi:defcfun ("wxFont_SetPointSize" wxFont_SetPointSize) :void
  (_obj :pointer)
  (pointSize :int))

(cffi:defcfun ("wxFont_SetFamily" wxFont_SetFamily) :void
  (_obj :pointer)
  (family :int))

(cffi:defcfun ("wxFont_SetStyle" wxFont_SetStyle) :void
  (_obj :pointer)
  (style :int))

(cffi:defcfun ("wxFont_SetWeight" wxFont_SetWeight) :void
  (_obj :pointer)
  (weight :int))

(cffi:defcfun ("wxFont_SetFaceName" wxFont_SetFaceName) :void
  (_obj :pointer)
  (faceName :string))

(cffi:defcfun ("wxFont_SetUnderlined" wxFont_SetUnderlined) :void
  (_obj :pointer)
  (underlined :int))

(cffi:defcfun ("wxFont_SetEncoding" wxFont_SetEncoding) :void
  (_obj :pointer)
  (encoding :int))

(cffi:defcfun ("wxFont_GetFamilyString" wxFont_GetFamilyString) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxFont_GetStyleString" wxFont_GetStyleString) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxFont_GetWeightString" wxFont_GetWeightString) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxFont_GetDefaultEncoding" wxFont_GetDefaultEncoding) :int
  (_obj :pointer))

(cffi:defcfun ("wxFont_SetDefaultEncoding" wxFont_SetDefaultEncoding) :void
  (_obj :pointer)
  (encoding :int))

(cffi:defcfun ("wxFontEnumerator_Create" wxFontEnumerator_Create) :pointer
  (_obj :pointer)
  (_fnc :pointer))

(cffi:defcfun ("wxFontEnumerator_Delete" wxFontEnumerator_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxFontEnumerator_EnumerateFacenames" wxFontEnumerator_EnumerateFacenames) :int
  (_obj :pointer)
  (encoding :int)
  (fixedWidthOnly :int))

(cffi:defcfun ("wxFontEnumerator_EnumerateEncodings" wxFontEnumerator_EnumerateEncodings) :int
  (_obj :pointer)
  (facename :pointer))

(cffi:defcfun ("wxFontMapper_Create" wxFontMapper_Create) :pointer)

(cffi:defcfun ("wxFontMapper_GetAltForEncoding" wxFontMapper_GetAltForEncoding) :int
  (_obj :pointer)
  (encoding :int)
  (alt_encoding :pointer)
  (_buf :pointer))

(cffi:defcfun ("wxFontMapper_IsEncodingAvailable" wxFontMapper_IsEncodingAvailable) :int
  (_obj :pointer)
  (encoding :int)
  (_buf :string))

(cffi:defcfun ("wxEncodingConverter_Create" wxEncodingConverter_Create) :pointer)

(cffi:defcfun ("wxEncodingConverter_Delete" wxEncodingConverter_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxEncodingConverter_Init" wxEncodingConverter_Init) :int
  (_obj :pointer)
  (input_enc :int)
  (output_enc :int)
  (method :int))

(cffi:defcfun ("wxEncodingConverter_Convert" wxEncodingConverter_Convert) :void
  (_obj :pointer)
  (input :string)
  (output :string))

(cffi:defcfun ("wxEncodingConverter_GetPlatformEquivalents" wxEncodingConverter_GetPlatformEquivalents) :int
  (_obj :pointer)
  (enc :int)
  (platform :int)
  (_lst :pointer))

(cffi:defcfun ("wxEncodingConverter_GetAllEquivalents" wxEncodingConverter_GetAllEquivalents) :int
  (_obj :pointer)
  (enc :int)
  (_lst :pointer))


