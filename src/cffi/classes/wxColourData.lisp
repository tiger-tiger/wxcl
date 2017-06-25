
;;;wxColourData.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxColourData_Create" wxColourData_Create) :pointer)

(cffi:defcfun ("wxColourData_Delete" wxColourData_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxColourData_SetChooseFull" wxColourData_SetChooseFull) :void
  (_obj :pointer)
  (flag :int))

(cffi:defcfun ("wxColourData_GetChooseFull" wxColourData_GetChooseFull) :int
  (_obj :pointer))

(cffi:defcfun ("wxColourData_SetColour" wxColourData_SetColour) :void
  (_obj :pointer)
  (colour :pointer))

(cffi:defcfun ("wxColourData_GetColour" wxColourData_GetColour) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxColourData_SetCustomColour" wxColourData_SetCustomColour) :void
  (_obj :pointer)
  (i :int)
  (colour :pointer))

(cffi:defcfun ("wxColourData_GetCustomColour" wxColourData_GetCustomColour) :pointer
  (_obj :pointer)
  (i :int))


