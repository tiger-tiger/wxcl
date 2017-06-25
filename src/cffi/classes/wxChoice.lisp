
;;;wxChoice.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxChoice_Create" wxChoice_Create) :pointer
  (_prt :pointer)
  (_id :int)
  (_lft :int)
  (_top :int)
  (_wdt :int)
  (_hgt :int)
  (_n :int)
  (_str :pointer)
  (_stl :int))

(cffi:defcfun ("wxChoice_Delete" wxChoice_Delete) :void
  (_obj :pointer)
  (n :int))

(cffi:defcfun ("wxChoice_GetColumns" wxChoice_GetColumns) :int
  (_obj :pointer))

(cffi:defcfun ("wxChoice_SetColumns" wxChoice_SetColumns) :void
  (_obj :pointer)
  (n :int))

(cffi:defcfun ("wxChoice_GetCurrentSelection" wxChoice_GetCurrentSelection) :int
  (_obj :pointer))


