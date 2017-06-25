
;;;wxJoystick.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxJoystick_Create" wxJoystick_Create) :pointer
  (joystick :int))

(cffi:defcfun ("wxJoystick_Delete" wxJoystick_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetPosition" wxJoystick_GetPosition) :void
  (_obj :pointer)
  (_x :pointer)
  (_y :pointer))

(cffi:defcfun ("wxJoystick_GetZPosition" wxJoystick_GetZPosition) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetButtonState" wxJoystick_GetButtonState) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetPOVPosition" wxJoystick_GetPOVPosition) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetPOVCTSPosition" wxJoystick_GetPOVCTSPosition) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetRudderPosition" wxJoystick_GetRudderPosition) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetUPosition" wxJoystick_GetUPosition) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetVPosition" wxJoystick_GetVPosition) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetMovementThreshold" wxJoystick_GetMovementThreshold) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_SetMovementThreshold" wxJoystick_SetMovementThreshold) :void
  (_obj :pointer)
  (threshold :int))

(cffi:defcfun ("wxJoystick_IsOk" wxJoystick_IsOk) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetNumberJoysticks" wxJoystick_GetNumberJoysticks) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetManufacturerId" wxJoystick_GetManufacturerId) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetProductId" wxJoystick_GetProductId) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetProductName" wxJoystick_GetProductName) :int
  (_obj :pointer)
  (_buf :pointer))

(cffi:defcfun ("wxJoystick_GetXMin" wxJoystick_GetXMin) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetYMin" wxJoystick_GetYMin) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetZMin" wxJoystick_GetZMin) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetXMax" wxJoystick_GetXMax) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetYMax" wxJoystick_GetYMax) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetZMax" wxJoystick_GetZMax) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetNumberButtons" wxJoystick_GetNumberButtons) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetNumberAxes" wxJoystick_GetNumberAxes) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetMaxButtons" wxJoystick_GetMaxButtons) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetMaxAxes" wxJoystick_GetMaxAxes) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetPollingMin" wxJoystick_GetPollingMin) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetPollingMax" wxJoystick_GetPollingMax) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetRudderMin" wxJoystick_GetRudderMin) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetRudderMax" wxJoystick_GetRudderMax) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetUMin" wxJoystick_GetUMin) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetUMax" wxJoystick_GetUMax) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetVMin" wxJoystick_GetVMin) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_GetVMax" wxJoystick_GetVMax) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_HasRudder" wxJoystick_HasRudder) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_HasZ" wxJoystick_HasZ) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_HasU" wxJoystick_HasU) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_HasV" wxJoystick_HasV) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_HasPOV" wxJoystick_HasPOV) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_HasPOV4Dir" wxJoystick_HasPOV4Dir) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_HasPOVCTS" wxJoystick_HasPOVCTS) :int
  (_obj :pointer))

(cffi:defcfun ("wxJoystick_SetCapture" wxJoystick_SetCapture) :int
  (_obj :pointer)
  (win :pointer)
  (pollingFreq :int))

(cffi:defcfun ("wxJoystick_ReleaseCapture" wxJoystick_ReleaseCapture) :int
  (_obj :pointer))


