
;;;wxScintilla.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxScintilla_Create" wxScintilla_Create) :pointer
  (obj :pointer)
  (fnc :pointer)
  (_prt :pointer)
  (_id :int)
  (_lft :int)
  (_top :int)
  (_wdt :int)
  (_hgt :int)
  (_stl :int))

(cffi:defcfun ("wxScintilla_Exec" wxScintilla_Exec) :int
  (obj :pointer)
  (code :int)
  (param1 :int)
  (param2 :int))

(cffi:defcfun ("wxScintilla_SetEiffelCB" wxScintilla_SetEiffelCB) :void
  (obj :pointer)
  (eif :pointer)
  (fnc :pointer))


