
;;;wxSlider.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxSlider_Create" wxSlider_Create) :pointer
  (_prt :pointer)
  (_id :int)
  (_init :int)
  (_min :int)
  (_max :int)
  (_lft :int)
  (_top :int)
  (_wdt :int)
  (_hgt :int)
  (_stl :long))

(cffi:defcfun ("wxSlider_GetValue" wxSlider_GetValue) :int
  (_obj :pointer))

(cffi:defcfun ("wxSlider_SetValue" wxSlider_SetValue) :void
  (_obj :pointer)
  (value :int))

(cffi:defcfun ("wxSlider_SetRange" wxSlider_SetRange) :void
  (_obj :pointer)
  (minValue :int)
  (maxValue :int))

(cffi:defcfun ("wxSlider_GetMin" wxSlider_GetMin) :int
  (_obj :pointer))

(cffi:defcfun ("wxSlider_GetMax" wxSlider_GetMax) :int
  (_obj :pointer))

(cffi:defcfun ("wxSlider_SetTickFreq" wxSlider_SetTickFreq) :void
  (_obj :pointer)
  (n :int)
  (pos :int))

(cffi:defcfun ("wxSlider_GetTickFreq" wxSlider_GetTickFreq) :int
  (_obj :pointer))

(cffi:defcfun ("wxSlider_SetPageSize" wxSlider_SetPageSize) :void
  (_obj :pointer)
  (pageSize :int))

(cffi:defcfun ("wxSlider_GetPageSize" wxSlider_GetPageSize) :int
  (_obj :pointer))

(cffi:defcfun ("wxSlider_ClearSel" wxSlider_ClearSel) :void
  (_obj :pointer))

(cffi:defcfun ("wxSlider_ClearTicks" wxSlider_ClearTicks) :void
  (_obj :pointer))

(cffi:defcfun ("wxSlider_SetLineSize" wxSlider_SetLineSize) :void
  (_obj :pointer)
  (lineSize :int))

(cffi:defcfun ("wxSlider_GetLineSize" wxSlider_GetLineSize) :int
  (_obj :pointer))

(cffi:defcfun ("wxSlider_GetSelEnd" wxSlider_GetSelEnd) :int
  (_obj :pointer))

(cffi:defcfun ("wxSlider_GetSelStart" wxSlider_GetSelStart) :int
  (_obj :pointer))

(cffi:defcfun ("wxSlider_SetSelection" wxSlider_SetSelection) :void
  (_obj :pointer)
  (minPos :int)
  (maxPos :int))

(cffi:defcfun ("wxSlider_SetThumbLength" wxSlider_SetThumbLength) :void
  (_obj :pointer)
  (len :int))

(cffi:defcfun ("wxSlider_GetThumbLength" wxSlider_GetThumbLength) :int
  (_obj :pointer))

(cffi:defcfun ("wxSlider_SetTick" wxSlider_SetTick) :void
  (_obj :pointer)
  (tickPos :int))


