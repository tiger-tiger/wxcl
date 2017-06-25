
;;;wxDialog.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxDialog_Create" wxDialog_Create) :pointer
  (_prt :pointer)
  (_id :int)
  (_txt :string)
  (_lft :int)
  (_top :int)
  (_wdt :int)
  (_hgt :int)
  (_stl :int))

(cffi:defcfun ("wxDialog_IsModal" wxDialog_IsModal) :int
  (_obj :pointer))

(cffi:defcfun ("wxDialog_ShowModal" wxDialog_ShowModal) :int
  (_obj :pointer))

(cffi:defcfun ("wxDialog_EndModal" wxDialog_EndModal) :void
  (_obj :pointer)
  (retCode :int))

(cffi:defcfun ("wxDialog_SetReturnCode" wxDialog_SetReturnCode) :void
  (_obj :pointer)
  (returnCode :int))

(cffi:defcfun ("wxDialog_GetReturnCode" wxDialog_GetReturnCode) :int
  (_obj :pointer))


