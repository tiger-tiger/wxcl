
;;;wxIPC.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("ELJConnection_CreateDefault" ELJConnection_CreateDefault) :pointer)

(cffi:defcfun ("ELJConnection_Create" ELJConnection_Create) :pointer
  (buffer :pointer)
  (size :int))

(cffi:defcfun ("ELJConnection_Delete" ELJConnection_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("ELJConnection_Execute" ELJConnection_Execute) :int
  (_obj :pointer)
  (data :pointer)
  (size :int)
  (format :int))

(cffi:defcfun ("ELJConnection_Request" ELJConnection_Request) :pointer
  (_obj :pointer)
  (item :pointer)
  (size :pointer)
  (format :int))

(cffi:defcfun ("ELJConnection_Poke" ELJConnection_Poke) :int
  (_obj :pointer)
  (item :pointer)
  (data :pointer)
  (size :int)
  (format :int))

(cffi:defcfun ("ELJConnection_StartAdvise" ELJConnection_StartAdvise) :int
  (_obj :pointer)
  (item :pointer))

(cffi:defcfun ("ELJConnection_StopAdvise" ELJConnection_StopAdvise) :int
  (_obj :pointer)
  (item :pointer))

(cffi:defcfun ("ELJConnection_Advise" ELJConnection_Advise) :int
  (_obj :pointer)
  (item :pointer)
  (data :pointer)
  (size :int)
  (format :int))

(cffi:defcfun ("ELJConnection_Disconnect" ELJConnection_Disconnect) :int
  (_obj :pointer))

(cffi:defcfun ("ELJConnection_Compress" ELJConnection_Compress) :void
  (_obj :pointer)
  (on :int))

(cffi:defcfun ("ELJConnection_SetOnAdvise" ELJConnection_SetOnAdvise) :void
  (_obj :pointer)
  (_fnc :pointer))

(cffi:defcfun ("ELJConnection_SetOnExecute" ELJConnection_SetOnExecute) :void
  (_obj :pointer)
  (_fnc :pointer))

(cffi:defcfun ("ELJConnection_SetOnRequest" ELJConnection_SetOnRequest) :void
  (_obj :pointer)
  (_fnc :pointer))

(cffi:defcfun ("ELJConnection_SetOnPoke" ELJConnection_SetOnPoke) :void
  (_obj :pointer)
  (_fnc :pointer))

(cffi:defcfun ("ELJConnection_SetOnStartAdvise" ELJConnection_SetOnStartAdvise) :void
  (_obj :pointer)
  (_fnc :pointer))

(cffi:defcfun ("ELJConnection_SetOnStopAdvise" ELJConnection_SetOnStopAdvise) :void
  (_obj :pointer)
  (_fnc :pointer))

(cffi:defcfun ("ELJConnection_SetOnDisconnect" ELJConnection_SetOnDisconnect) :void
  (_obj :pointer)
  (_fnc :pointer))

(cffi:defcfun ("ELJServer_Create" ELJServer_Create) :pointer
  (_eobj :pointer)
  (_cnct :pointer))

(cffi:defcfun ("ELJServer_Delete" ELJServer_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("ELJServer_Initialize" ELJServer_Initialize) :int
  (_obj :pointer)
  (name :pointer))

(cffi:defcfun ("ELJClient_Create" ELJClient_Create) :pointer
  (_eobj :pointer)
  (_cnct :pointer))

(cffi:defcfun ("ELJClient_Delete" ELJClient_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("ELJClient_MakeConnection" ELJClient_MakeConnection) :void
  (_obj :pointer)
  (host :pointer)
  (server :pointer)
  (topic :pointer))


