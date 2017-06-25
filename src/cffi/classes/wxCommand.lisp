
;;;wxCommand.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("ELJCommand_Create" ELJCommand_Create) :pointer
  (_und :int)
  (_nme :pointer)
  (_obj :pointer)
  (_clb :pointer))

(cffi:defcfun ("ELJCommand_Delete" ELJCommand_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("ELJCommand_GetName" ELJCommand_GetName) :int
  (_obj :pointer)
  (_buf :pointer))

(cffi:defcfun ("ELJCommand_CanUndo" ELJCommand_CanUndo) :int
  (_obj :pointer))

(cffi:defcfun ("wxCommandProcessor_wxCommandProcessor" wxCommandProcessor_wxCommandProcessor) :pointer
  (maxCommands :int))

(cffi:defcfun ("wxCommandProcessor_Delete" wxCommandProcessor_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxCommandProcessor_Submit" wxCommandProcessor_Submit) :int
  (_obj :pointer)
  (command :pointer)
  (storeIt :int))

(cffi:defcfun ("wxCommandProcessor_Undo" wxCommandProcessor_Undo) :int
  (_obj :pointer))

(cffi:defcfun ("wxCommandProcessor_Redo" wxCommandProcessor_Redo) :int
  (_obj :pointer))

(cffi:defcfun ("wxCommandProcessor_CanUndo" wxCommandProcessor_CanUndo) :int
  (_obj :pointer))

(cffi:defcfun ("wxCommandProcessor_CanRedo" wxCommandProcessor_CanRedo) :int
  (_obj :pointer))

(cffi:defcfun ("wxCommandProcessor_SetEditMenu" wxCommandProcessor_SetEditMenu) :void
  (_obj :pointer)
  (menu :pointer))

(cffi:defcfun ("wxCommandProcessor_GetEditMenu" wxCommandProcessor_GetEditMenu) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxCommandProcessor_SetMenuStrings" wxCommandProcessor_SetMenuStrings) :void
  (_obj :pointer))

(cffi:defcfun ("wxCommandProcessor_Initialize" wxCommandProcessor_Initialize) :void
  (_obj :pointer))

(cffi:defcfun ("wxCommandProcessor_GetCommands" wxCommandProcessor_GetCommands) :int
  (_obj :pointer)
  (_ref :pointer))

(cffi:defcfun ("wxCommandProcessor_GetMaxCommands" wxCommandProcessor_GetMaxCommands) :int
  (_obj :pointer))

(cffi:defcfun ("wxCommandProcessor_ClearCommands" wxCommandProcessor_ClearCommands) :void
  (_obj :pointer))


