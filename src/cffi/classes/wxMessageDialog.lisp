
;;;wxMessageDialog.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxMessageDialog_Create" wxMessageDialog_Create) :pointer
  (_prt :pointer)
  (_msg :string)
  (_cap :string)
  (_stl :int))

(cffi:defcfun ("wxMessageDialog_Delete" wxMessageDialog_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxMessageDialog_ShowModal" wxMessageDialog_ShowModal) :int
  (_obj :pointer))


