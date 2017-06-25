
;;;wxComboBox.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxComboBox_Create" wxComboBox_Create) :pointer
  (_prt :pointer)
  (_id :int)
  (_txt :string)
  (_lft :int)
  (_top :int)
  (_wdt :int)
  (_hgt :int)
  (_n :int)
  (_str :pointer)
  (_stl :int))

(cffi:defcfun ("wxComboBox_Copy" wxComboBox_Copy) :void
  (_obj :pointer))

(cffi:defcfun ("wxComboBox_Cut" wxComboBox_Cut) :void
  (_obj :pointer))

(cffi:defcfun ("wxComboBox_Paste" wxComboBox_Paste) :void
  (_obj :pointer))

(cffi:defcfun ("wxComboBox_SetInsertionPoint" wxComboBox_SetInsertionPoint) :void
  (_obj :pointer)
  (pos :int))

(cffi:defcfun ("wxComboBox_SetInsertionPointEnd" wxComboBox_SetInsertionPointEnd) :void
  (_obj :pointer))

(cffi:defcfun ("wxComboBox_GetInsertionPoint" wxComboBox_GetInsertionPoint) :int
  (_obj :pointer))

(cffi:defcfun ("wxComboBox_GetLastPosition" wxComboBox_GetLastPosition) :int
  (_obj :pointer))

(cffi:defcfun ("wxComboBox_Replace" wxComboBox_Replace) :void
  (_obj :pointer)
  (from :int)
  (to :int)
  (value :string))

(cffi:defcfun ("wxComboBox_Remove" wxComboBox_Remove) :void
  (_obj :pointer)
  (from :int)
  (to :int))

(cffi:defcfun ("wxComboBox_SetTextSelection" wxComboBox_SetTextSelection) :void
  (_obj :pointer)
  (from :int)
  (to :int))

(cffi:defcfun ("wxComboBox_SetEditable" wxComboBox_SetEditable) :void
  (_obj :pointer)
  (editable :int))

(cffi:defcfun ("wxComboBox_GetValue" wxComboBox_GetValue) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxComboBox_SetValue" wxComboBox_SetValue) :void
  (_obj :pointer)
  (_buf :string))

(cffi:defcfun ("wxComboBox_SetSelection" wxComboBox_SetSelection) :void
  (_obj :pointer)
  (from :long)
  (to :long))

(cffi:defcfun ("wxComboBox_Undo" wxComboBox_Undo) :void
  (_obj :pointer))


