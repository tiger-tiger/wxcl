
;;;wxSpinCtrl.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxSpinCtrl_Create" wxSpinCtrl_Create) :pointer
  (_prt :pointer)
  (_id :int)
  (_txt :string)
  (_lft :int)
  (_top :int)
  (_wdt :int)
  (_hgt :int)
  (_stl :long)
  (_min :int)
  (_max :int)
  (_init :int))

(cffi:defcfun ("wxSpinCtrl_SetValue" wxSpinCtrl_SetValue) :void
  (_obj :pointer)
  (val :int))

(cffi:defcfun ("wxSpinCtrl_GetValue" wxSpinCtrl_GetValue) :int
  (_obj :pointer))

(cffi:defcfun ("wxSpinCtrl_SetRange" wxSpinCtrl_SetRange) :void
  (_obj :pointer)
  (min_val :int)
  (max_val :int))

(cffi:defcfun ("wxSpinCtrl_GetMin" wxSpinCtrl_GetMin) :int
  (_obj :pointer))

(cffi:defcfun ("wxSpinCtrl_GetMax" wxSpinCtrl_GetMax) :int
  (_obj :pointer))

(cffi:defcfun ("wxSpinButton_Create" wxSpinButton_Create) :pointer
  (_prt :pointer)
  (_id :int)
  (_lft :int)
  (_top :int)
  (_wdt :int)
  (_hgt :int)
  (_stl :long))

(cffi:defcfun ("wxSpinButton_GetValue" wxSpinButton_GetValue) :int
  (_obj :pointer))

(cffi:defcfun ("wxSpinButton_GetMin" wxSpinButton_GetMin) :int
  (_obj :pointer))

(cffi:defcfun ("wxSpinButton_GetMax" wxSpinButton_GetMax) :int
  (_obj :pointer))

(cffi:defcfun ("wxSpinButton_SetValue" wxSpinButton_SetValue) :void
  (_obj :pointer)
  (val :int))

(cffi:defcfun ("wxSpinButton_SetRange" wxSpinButton_SetRange) :void
  (_obj :pointer)
  (minVal :int)
  (maxVal :int))


