
;;;wxButton.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxButton_Create" wxButton_Create) :pointer
  (_prt :pointer)
  (_id :int)
  (_txt :string)
  (_lft :int)
  (_top :int)
  (_wdt :int)
  (_hgt :int)
  (_stl :int))

(cffi:defcfun ("wxButton_SetBackgroundColour" wxButton_SetBackgroundColour) :int
  (_obj :pointer)
  (colour :pointer))

(cffi:defcfun ("wxButton_SetDefault" wxButton_SetDefault) :void
  (_obj :pointer))

(cffi:defcfun ("wxBitmapButton_Create" wxBitmapButton_Create) :pointer
  (_prt :pointer)
  (_id :int)
  (_bmp :pointer)
  (_lft :int)
  (_top :int)
  (_wdt :int)
  (_hgt :int)
  (_stl :int))

(cffi:defcfun ("wxBitmapButton_GetBitmapLabel" wxBitmapButton_GetBitmapLabel) :void
  (_obj :pointer)
  (_ref :pointer))

(cffi:defcfun ("wxBitmapButton_GetBitmapSelected" wxBitmapButton_GetBitmapSelected) :void
  (_obj :pointer)
  (_ref :pointer))

(cffi:defcfun ("wxBitmapButton_GetBitmapFocus" wxBitmapButton_GetBitmapFocus) :void
  (_obj :pointer)
  (_ref :pointer))

(cffi:defcfun ("wxBitmapButton_GetBitmapDisabled" wxBitmapButton_GetBitmapDisabled) :void
  (_obj :pointer)
  (_ref :pointer))

(cffi:defcfun ("wxBitmapButton_SetBitmapSelected" wxBitmapButton_SetBitmapSelected) :void
  (_obj :pointer)
  (sel :pointer))

(cffi:defcfun ("wxBitmapButton_SetBitmapFocus" wxBitmapButton_SetBitmapFocus) :void
  (_obj :pointer)
  (focus :pointer))

(cffi:defcfun ("wxBitmapButton_SetBitmapDisabled" wxBitmapButton_SetBitmapDisabled) :void
  (_obj :pointer)
  (disabled :pointer))

(cffi:defcfun ("wxBitmapButton_SetBitmapLabel" wxBitmapButton_SetBitmapLabel) :void
  (_obj :pointer)
  (bitmap :pointer))

(cffi:defcfun ("wxBitmapButton_SetMargins" wxBitmapButton_SetMargins) :void
  (_obj :pointer)
  (x :int)
  (y :int))

(cffi:defcfun ("wxBitmapButton_GetMarginX" wxBitmapButton_GetMarginX) :int
  (_obj :pointer))

(cffi:defcfun ("wxBitmapButton_GetMarginY" wxBitmapButton_GetMarginY) :int
  (_obj :pointer))


