
;;;wxControl.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxControl_SetLabel" wxControl_SetLabel) :void
  (_obj :pointer)
  (text :string))

(cffi:defcfun ("wxControl_GetLabel" wxControl_GetLabel) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxControl_Command" wxControl_Command) :void
  (_obj :pointer)
  (event :pointer))


