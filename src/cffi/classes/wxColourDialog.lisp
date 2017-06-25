
;;;wxColourDialog.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxColourDialog_Create" wxColourDialog_Create) :pointer
  (_prt :pointer)
  (col :pointer))

(cffi:defcfun ("wxColourDialog_GetColourData" wxColourDialog_GetColourData) :void
  (_obj :pointer)
  (col :pointer))


