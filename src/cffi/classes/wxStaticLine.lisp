
;;;wxStaticLine.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxStaticLine_Create" wxStaticLine_Create) :pointer
  (_prt :pointer)
  (_id :int)
  (_lft :int)
  (_top :int)
  (_wdt :int)
  (_hgt :int)
  (_stl :int))

(cffi:defcfun ("wxStaticLine_IsVertical" wxStaticLine_IsVertical) :int
  (_obj :pointer))

(cffi:defcfun ("wxStaticLine_GetDefaultSize" wxStaticLine_GetDefaultSize) :int
  (_obj :pointer))


