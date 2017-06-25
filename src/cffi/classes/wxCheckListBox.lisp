
;;;wxCheckListBox.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxCheckListBox_Create" wxCheckListBox_Create) :pointer
  (_prt :pointer)
  (_id :int)
  (_lft :int)
  (_top :int)
  (_wdt :int)
  (_hgt :int)
  (_n :int)
  (_str :pointer)
  (_stl :int))

(cffi:defcfun ("wxCheckListBox_Check" wxCheckListBox_Check) :void
  (_obj :pointer)
  (item :int)
  (check :int))

(cffi:defcfun ("wxCheckListBox_IsChecked" wxCheckListBox_IsChecked) :int
  (_obj :pointer)
  (item :int))


