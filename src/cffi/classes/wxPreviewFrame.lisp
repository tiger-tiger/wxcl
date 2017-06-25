
;;;wxPreviewFrame.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxPreviewFrame_Create" wxPreviewFrame_Create) :pointer
  (preview :pointer)
  (parent :pointer)
  (title :wxstring)
  (x :int)
  (y :int)
  (w :int)
  (h :int)
  (style :int)
  (name :wxstring))

(cffi:defcfun ("wxPreviewFrame_Delete" wxPreviewFrame_Delete) :void
  (self :pointer))

(cffi:defcfun ("wxPreviewFrame_Initialize" wxPreviewFrame_Initialize) :void
  (self :pointer))


