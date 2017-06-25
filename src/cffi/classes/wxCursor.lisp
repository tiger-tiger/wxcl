
;;;wxCursor.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcvar ("wxStandard_Cursor" wxStandard_Cursor)
 :pointer)

(cffi:defcvar ("wxHourglass_Cursor" wxHourglass_Cursor)
 :pointer)

(cffi:defcvar ("wxCross_Cursor" wxCross_Cursor)
 :pointer)

(cffi:defcfun ("Cursor_CreateFromStock" Cursor_CreateFromStock) :pointer
  (_id :int))


