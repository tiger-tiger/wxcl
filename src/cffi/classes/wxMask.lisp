
;;;wxMask.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxMask_Create" wxMask_Create) :pointer
  (bitmap :pointer))

(cffi:defcfun ("wxMask_CreateColoured" wxMask_CreateColoured) :pointer
  (bitmap :pointer)
  (colour :pointer))


