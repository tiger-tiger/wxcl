
;;;wxTipWindow.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxTipWindow_Create" wxTipWindow_Create) :pointer
  (parent :pointer)
  (text :pointer)
  (maxLength :int))

(cffi:defcfun ("wxTipWindow_SetTipWindowPtr" wxTipWindow_SetTipWindowPtr) :void
  (_obj :pointer)
  (windowPtr :pointer))

(cffi:defcfun ("wxTipWindow_SetBoundingRect" wxTipWindow_SetBoundingRect) :void
  (_obj :pointer)
  (x :int)
  (y :int)
  (w :int)
  (h :int))

(cffi:defcfun ("wxTipWindow_Close" wxTipWindow_Close) :void
  (_obj :pointer))


