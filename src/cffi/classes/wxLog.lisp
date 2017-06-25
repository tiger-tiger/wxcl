
;;;wxLog.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("ELJLog_Create" ELJLog_Create) :pointer
  (_obj :pointer)
  (_fnc :pointer))

(cffi:defcfun ("ELJLog_Delete" ELJLog_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("ELJLog_IsEnabled" ELJLog_IsEnabled) :int
  (_obj :pointer))

(cffi:defcfun ("ELJLog_EnableLogging" ELJLog_EnableLogging) :int
  (_obj :pointer)
  (doIt :int))

(cffi:defcfun ("ELJLog_OnLog" ELJLog_OnLog) :void
  (_obj :pointer)
  (level :int)
  (szString :pointer)
  (t_arg3 :int))

(cffi:defcfun ("ELJLog_Flush" ELJLog_Flush) :void
  (_obj :pointer))

(cffi:defcfun ("ELJLog_HasPendingMessages" ELJLog_HasPendingMessages) :int
  (_obj :pointer))

(cffi:defcfun ("ELJLog_FlushActive" ELJLog_FlushActive) :void
  (_obj :pointer))

(cffi:defcfun ("ELJLog_GetActiveTarget" ELJLog_GetActiveTarget) :pointer)

(cffi:defcfun ("ELJLog_SetActiveTarget" ELJLog_SetActiveTarget) :pointer
  (pLogger :pointer))

(cffi:defcfun ("ELJLog_Suspend" ELJLog_Suspend) :void
  (_obj :pointer))

(cffi:defcfun ("ELJLog_Resume" ELJLog_Resume) :void
  (_obj :pointer))

(cffi:defcfun ("ELJLog_SetVerbose" ELJLog_SetVerbose) :void
  (_obj :pointer)
  (bVerbose :int))

(cffi:defcfun ("ELJLog_DontCreateOnDemand" ELJLog_DontCreateOnDemand) :void
  (_obj :pointer))

(cffi:defcfun ("ELJLog_SetTraceMask" ELJLog_SetTraceMask) :void
  (_obj :pointer)
  (ulMask :int))

(cffi:defcfun ("ELJLog_AddTraceMask" ELJLog_AddTraceMask) :void
  (_obj :pointer)
  (str :pointer))

(cffi:defcfun ("ELJLog_RemoveTraceMask" ELJLog_RemoveTraceMask) :void
  (_obj :pointer)
  (str :pointer))

(cffi:defcfun ("ELJLog_SetTimestamp" ELJLog_SetTimestamp) :void
  (_obj :pointer)
  (ts :pointer))

(cffi:defcfun ("ELJLog_GetVerbose" ELJLog_GetVerbose) :int
  (_obj :pointer))

(cffi:defcfun ("ELJLog_GetTraceMask" ELJLog_GetTraceMask) :int
  (_obj :pointer))

(cffi:defcfun ("ELJLog_IsAllowedTraceMask" ELJLog_IsAllowedTraceMask) :int
  (_obj :pointer)
  (mask :pointer))

(cffi:defcfun ("ELJLog_GetTimestamp" ELJLog_GetTimestamp) :pointer
  (_obj :pointer))

(cffi:defcfun ("ELJSysErrorCode" ELJSysErrorCode) :int)

(cffi:defcfun ("ELJSysErrorMsg" ELJSysErrorMsg) :pointer
  (nErrCode :int))

(cffi:defcfun ("LogErrorMsg" LogErrorMsg) :void
  (_msg :pointer))

(cffi:defcfun ("LogFatalErrorMsg" LogFatalErrorMsg) :void
  (_msg :pointer))

(cffi:defcfun ("LogWarningMsg" LogWarningMsg) :void
  (_msg :pointer))

(cffi:defcfun ("LogMessageMsg" LogMessageMsg) :void
  (_msg :pointer))

(cffi:defcfun ("wxLogChain_Create" wxLogChain_Create) :pointer
  (logger :pointer))

(cffi:defcfun ("wxLogChain_Delete" wxLogChain_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxLogChain_SetLog" wxLogChain_SetLog) :void
  (_obj :pointer)
  (logger :pointer))

(cffi:defcfun ("wxLogChain_PassMessages" wxLogChain_PassMessages) :void
  (_obj :pointer)
  (bDoPass :int))

(cffi:defcfun ("wxLogChain_IsPassingMessages" wxLogChain_IsPassingMessages) :int
  (_obj :pointer))

(cffi:defcfun ("wxLogChain_GetOldLog" wxLogChain_GetOldLog) :pointer
  (_obj :pointer))


