
;;;wxTextAttr.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxTextAttr_CreateDefault" wxTextAttr_CreateDefault) :pointer)

(cffi:defcfun ("wxTextAttr_Create" wxTextAttr_Create) :pointer
  (colText :pointer)
  (colBack :pointer)
  (font :pointer))

(cffi:defcfun ("wxTextAttr_Delete" wxTextAttr_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxTextAttr_GetBackgroundColour" wxTextAttr_GetBackgroundColour) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxTextAttr_GetFont" wxTextAttr_GetFont) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxTextAttr_GetTextColour" wxTextAttr_GetTextColour) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxTextAttr_HasBackgroundColour" wxTextAttr_HasBackgroundColour) :int
  (_obj :pointer))

(cffi:defcfun ("wxTextAttr_HasFont" wxTextAttr_HasFont) :int
  (_obj :pointer))

(cffi:defcfun ("wxTextAttr_HasTextColour" wxTextAttr_HasTextColour) :int
  (_obj :pointer))

(cffi:defcfun ("wxTextAttr_IsDefault" wxTextAttr_IsDefault) :int
  (_obj :pointer))

(cffi:defcfun ("wxTextAttr_SetTextColour" wxTextAttr_SetTextColour) :void
  (_obj :pointer)
  (colour :pointer))

(cffi:defcfun ("wxTextAttr_SetBackgroundColour" wxTextAttr_SetBackgroundColour) :void
  (_obj :pointer)
  (colour :pointer))

(cffi:defcfun ("wxTextAttr_SetFont" wxTextAttr_SetFont) :void
  (_obj :pointer)
  (font :pointer))


