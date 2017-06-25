
;;;wxProgressDialog.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxProgressDialog_Create" wxProgressDialog_Create) :pointer
  (title :string)
  (message :string)
  (max :int)
  (parent :pointer)
  (style :int))

(cffi:defcfun ("wxProgressDialog_Update" wxProgressDialog_Update) :int
  (obj :pointer)
  (value :int)
  (message :string))

(cffi:defcfun ("wxProgressDialog_Resume" wxProgressDialog_Resume) :void
  (obj :pointer))


