
;;;wxCalendarDateAttr.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxCalendarDateAttr_Create" wxCalendarDateAttr_Create) :pointer
  (_ctxt :pointer)
  (_cbck :pointer)
  (_cbrd :pointer)
  (_fnt :pointer)
  (_brd :int))

(cffi:defcfun ("wxCalendarDateAttr_CreateDefault" wxCalendarDateAttr_CreateDefault) :pointer)

(cffi:defcfun ("wxCalendarDateAttr_Delete" wxCalendarDateAttr_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxCalendarDateAttr_SetTextColour" wxCalendarDateAttr_SetTextColour) :void
  (_obj :pointer)
  (col :pointer))

(cffi:defcfun ("wxCalendarDateAttr_SetBackgroundColour" wxCalendarDateAttr_SetBackgroundColour) :void
  (_obj :pointer)
  (col :pointer))

(cffi:defcfun ("wxCalendarDateAttr_SetBorderColour" wxCalendarDateAttr_SetBorderColour) :void
  (_obj :pointer)
  (col :pointer))

(cffi:defcfun ("wxCalendarDateAttr_SetFont" wxCalendarDateAttr_SetFont) :void
  (_obj :pointer)
  (font :pointer))

(cffi:defcfun ("wxCalendarDateAttr_SetBorder" wxCalendarDateAttr_SetBorder) :void
  (_obj :pointer)
  (border :int))

(cffi:defcfun ("wxCalendarDateAttr_SetHoliday" wxCalendarDateAttr_SetHoliday) :void
  (_obj :pointer)
  (holiday :int))

(cffi:defcfun ("wxCalendarDateAttr_HasTextColour" wxCalendarDateAttr_HasTextColour) :int
  (_obj :pointer))

(cffi:defcfun ("wxCalendarDateAttr_HasBackgroundColour" wxCalendarDateAttr_HasBackgroundColour) :int
  (_obj :pointer))

(cffi:defcfun ("wxCalendarDateAttr_HasBorderColour" wxCalendarDateAttr_HasBorderColour) :int
  (_obj :pointer))

(cffi:defcfun ("wxCalendarDateAttr_HasFont" wxCalendarDateAttr_HasFont) :int
  (_obj :pointer))

(cffi:defcfun ("wxCalendarDateAttr_HasBorder" wxCalendarDateAttr_HasBorder) :int
  (_obj :pointer))

(cffi:defcfun ("wxCalendarDateAttr_IsHoliday" wxCalendarDateAttr_IsHoliday) :int
  (_obj :pointer))

(cffi:defcfun ("wxCalendarDateAttr_GetTextColour" wxCalendarDateAttr_GetTextColour) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxCalendarDateAttr_GetBackgroundColour" wxCalendarDateAttr_GetBackgroundColour) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxCalendarDateAttr_GetBorderColour" wxCalendarDateAttr_GetBorderColour) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxCalendarDateAttr_GetFont" wxCalendarDateAttr_GetFont) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxCalendarDateAttr_GetBorder" wxCalendarDateAttr_GetBorder) :int
  (_obj :pointer))


