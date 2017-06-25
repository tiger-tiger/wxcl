
;;;wxCaret.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxCaret_Create" wxCaret_Create) :pointer
  (_wnd :pointer)
  (_wth :int)
  (_hgt :int))

(cffi:defcfun ("wxCaret_IsOk" wxCaret_IsOk) :int
  (_obj :pointer))

(cffi:defcfun ("wxCaret_IsVisible" wxCaret_IsVisible) :int
  (_obj :pointer))

(cffi:defcfun ("wxCaret_GetPosition" wxCaret_GetPosition) :void
  (_obj :pointer)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("wxCaret_GetSize" wxCaret_GetSize) :void
  (_obj :pointer)
  (width :pointer)
  (height :pointer))

(cffi:defcfun ("wxCaret_GetWindow" wxCaret_GetWindow) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxCaret_SetSize" wxCaret_SetSize) :void
  (_obj :pointer)
  (width :int)
  (height :int))

(cffi:defcfun ("wxCaret_Move" wxCaret_Move) :void
  (_obj :pointer)
  (x :int)
  (y :int))

(cffi:defcfun ("wxCaret_Show" wxCaret_Show) :void
  (_obj :pointer))

(cffi:defcfun ("wxCaret_Hide" wxCaret_Hide) :void
  (_obj :pointer))

(cffi:defcfun ("wxCaret_GetBlinkTime" wxCaret_GetBlinkTime) :int)

(cffi:defcfun ("wxCaret_SetBlinkTime" wxCaret_SetBlinkTime) :void
  (milliseconds :int))


