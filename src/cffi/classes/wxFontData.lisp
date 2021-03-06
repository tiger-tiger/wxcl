
;;;wxFontData.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxFontData_Create" wxFontData_Create) :pointer)

(cffi:defcfun ("wxFontData_Delete" wxFontData_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxFontData_SetAllowSymbols" wxFontData_SetAllowSymbols) :void
  (_obj :pointer)
  (flag :int))

(cffi:defcfun ("wxFontData_GetAllowSymbols" wxFontData_GetAllowSymbols) :int
  (_obj :pointer))

(cffi:defcfun ("wxFontData_SetColour" wxFontData_SetColour) :void
  (_obj :pointer)
  (colour :pointer))

(cffi:defcfun ("wxFontData_GetColour" wxFontData_GetColour) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxFontData_SetShowHelp" wxFontData_SetShowHelp) :void
  (_obj :pointer)
  (flag :int))

(cffi:defcfun ("wxFontData_GetShowHelp" wxFontData_GetShowHelp) :int
  (_obj :pointer))

(cffi:defcfun ("wxFontData_EnableEffects" wxFontData_EnableEffects) :void
  (_obj :pointer)
  (flag :int))

(cffi:defcfun ("wxFontData_GetEnableEffects" wxFontData_GetEnableEffects) :int
  (_obj :pointer))

(cffi:defcfun ("wxFontData_SetInitialFont" wxFontData_SetInitialFont) :void
  (_obj :pointer)
  (font :pointer))

(cffi:defcfun ("wxFontData_GetInitialFont" wxFontData_GetInitialFont) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxFontData_SetChosenFont" wxFontData_SetChosenFont) :void
  (_obj :pointer)
  (font :pointer))

(cffi:defcfun ("wxFontData_GetChosenFont" wxFontData_GetChosenFont) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxFontData_SetRange" wxFontData_SetRange) :void
  (_obj :pointer)
  (minRange :int)
  (maxRange :int))

(cffi:defcfun ("wxFontData_GetEncoding" wxFontData_GetEncoding) :int
  (_obj :pointer))

(cffi:defcfun ("wxFontData_SetEncoding" wxFontData_SetEncoding) :void
  (_obj :pointer)
  (encoding :int))


