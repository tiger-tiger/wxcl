
;;;wxBusyInfo.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxBusyInfo_Create" wxBusyInfo_Create) :pointer
  (_txt :pointer))

(cffi:defcfun ("wxBusyInfo_Delete" wxBusyInfo_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxBusyCursor_Create" wxBusyCursor_Create) :pointer)

(cffi:defcfun ("wxBusyCursor_CreateWithCursor" wxBusyCursor_CreateWithCursor) :pointer
  (_cur :pointer))

(cffi:defcfun ("wxBusyCursor_Delete" wxBusyCursor_Delete) :void
  (_obj :pointer))


