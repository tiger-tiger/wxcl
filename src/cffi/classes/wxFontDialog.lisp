
;;;wxFontDialog.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxFontDialog_Create" wxFontDialog_Create) :pointer
  (_prt :pointer)
  (fnt :pointer))

(cffi:defcfun ("wxFontDialog_GetFontData" wxFontDialog_GetFontData) :void
  (_obj :pointer)
  (_ref :pointer))


