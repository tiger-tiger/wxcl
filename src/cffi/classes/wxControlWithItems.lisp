
;;;wxControlWithItems.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxControlWithItems_Clear" wxControlWithItems_Clear) :void
  (_obj :pointer))

(cffi:defcfun ("wxControlWithItems_Delete" wxControlWithItems_Delete) :void
  (_obj :pointer)
  (n :int))

(cffi:defcfun ("wxControlWithItems_GetCount" wxControlWithItems_GetCount) :int
  (_obj :pointer))

(cffi:defcfun ("wxControlWithItems_GetString" wxControlWithItems_GetString) :wxstring
  (_obj :pointer)
  (n :int))

(cffi:defcfun ("wxControlWithItems_SetString" wxControlWithItems_SetString) :void
  (_obj :pointer)
  (n :int)
  (s :string))

(cffi:defcfun ("wxControlWithItems_FindString" wxControlWithItems_FindString) :int
  (_obj :pointer)
  (s :string))

(cffi:defcfun ("wxControlWithItems_SetSelection" wxControlWithItems_SetSelection) :void
  (_obj :pointer)
  (n :int))

(cffi:defcfun ("wxControlWithItems_GetSelection" wxControlWithItems_GetSelection) :int
  (_obj :pointer))

(cffi:defcfun ("wxControlWithItems_Append" wxControlWithItems_Append) :void
  (_obj :pointer)
  (item :string))

(cffi:defcfun ("wxControlWithItems_AppendData" wxControlWithItems_AppendData) :void
  (_obj :pointer)
  (item :string)
  (_data :pointer))

(cffi:defcfun ("wxControlWithItems_Insert" wxControlWithItems_Insert) :void
  (_obj :pointer)
  (item :string)
  (pos :int))

(cffi:defcfun ("wxControlWithItems_InsertData" wxControlWithItems_InsertData) :void
  (_obj :pointer)
  (item :string)
  (pos :int)
  (_data :pointer))

(cffi:defcfun ("wxControlWithItems_SetClientData" wxControlWithItems_SetClientData) :void
  (_obj :pointer)
  (n :int)
  (clientData :pointer))

(cffi:defcfun ("wxControlWithItems_GetClientData" wxControlWithItems_GetClientData) :pointer
  (_obj :pointer)
  (n :int))

(cffi:defcfun ("wxControlWithItems_GetStringSelection" wxControlWithItems_GetStringSelection) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxControlWithItems_SetStringSelection" wxControlWithItems_SetStringSelection) :int
  (_obj :pointer)
  (str :string))


