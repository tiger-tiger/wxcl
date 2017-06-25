
;;;wxRadioBox.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxRadioBox_Create" wxRadioBox_Create) :pointer
  (_prt :pointer)
  (_id :int)
  (_txt :string)
  (_lft :int)
  (_top :int)
  (_wdt :int)
  (_hgt :int)
  (_n :int)
  (_str :pointer)
  (_dim :int)
  (_stl :int))

(cffi:defcfun ("wxRadioBox_FindString" wxRadioBox_FindString) :int
  (_obj :pointer)
  (s :pointer))

(cffi:defcfun ("wxRadioBox_SetSelection" wxRadioBox_SetSelection) :void
  (_obj :pointer)
  (_n :int))

(cffi:defcfun ("wxRadioBox_GetSelection" wxRadioBox_GetSelection) :int
  (_obj :pointer))

(cffi:defcfun ("wxRadioBox_SetItemLabel" wxRadioBox_SetItemLabel) :void
  (_obj :pointer)
  (item :int)
  (label :pointer))

(cffi:defcfun ("wxRadioBox_SetItemBitmap" wxRadioBox_SetItemBitmap) :void
  (_obj :pointer)
  (item :int)
  (bitmap :pointer))

(cffi:defcfun ("wxRadioBox_GetItemLabel" wxRadioBox_GetItemLabel) :wxstring
  (_obj :pointer)
  (item :int))

(cffi:defcfun ("wxRadioBox_EnableItem" wxRadioBox_EnableItem) :void
  (_obj :pointer)
  (item :int)
  (enable :int))

(cffi:defcfun ("wxRadioBox_ShowItem" wxRadioBox_ShowItem) :void
  (_obj :pointer)
  (item :int)
  (show :int))

(cffi:defcfun ("wxRadioBox_GetStringSelection" wxRadioBox_GetStringSelection) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxRadioBox_SetStringSelection" wxRadioBox_SetStringSelection) :void
  (_obj :pointer)
  (s :pointer))

(cffi:defcfun ("wxRadioBox_Number" wxRadioBox_Number) :int
  (_obj :pointer))

(cffi:defcfun ("wxRadioBox_GetNumberOfRowsOrCols" wxRadioBox_GetNumberOfRowsOrCols) :int
  (_obj :pointer))

(cffi:defcfun ("wxRadioBox_SetNumberOfRowsOrCols" wxRadioBox_SetNumberOfRowsOrCols) :void
  (_obj :pointer)
  (n :int))


