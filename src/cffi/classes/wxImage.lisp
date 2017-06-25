
;;;wxImage.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxImage_CreateDefault" wxImage_CreateDefault) :pointer)

(cffi:defcfun ("wxImage_CreateSized" wxImage_CreateSized) :pointer
  (width :int)
  (height :int))

(cffi:defcfun ("wxImage_CreateFromData" wxImage_CreateFromData) :pointer
  (width :int)
  (height :int)
  (data :pointer))

(cffi:defcfun ("wxImage_CreateFromFile" wxImage_CreateFromFile) :pointer
  (name :pointer))

(cffi:defcfun ("wxImage_CreateFromBitmap" wxImage_CreateFromBitmap) :pointer
  (bitmap :pointer))

(cffi:defcfun ("wxImage_ConvertToBitmap" wxImage_ConvertToBitmap) :void
  (_obj :pointer)
  (bitmap :pointer))

(cffi:defcfun ("wxImage_Initialize" wxImage_Initialize) :void
  (_obj :pointer)
  (width :int)
  (height :int))

(cffi:defcfun ("wxImage_InitializeFromData" wxImage_InitializeFromData) :void
  (_obj :pointer)
  (width :int)
  (height :int)
  (data :pointer))

(cffi:defcfun ("wxImage_Destroy" wxImage_Destroy) :void
  (_obj :pointer))

(cffi:defcfun ("wxImage_GetSubImage" wxImage_GetSubImage) :void
  (_obj :pointer)
  (x :int)
  (y :int)
  (w :int)
  (h :int)
  (image :pointer))

(cffi:defcfun ("wxImage_Paste" wxImage_Paste) :void
  (_obj :pointer)
  (image :pointer)
  (x :int)
  (y :int))

(cffi:defcfun ("wxImage_Scale" wxImage_Scale) :void
  (_obj :pointer)
  (width :int)
  (height :int)
  (image :pointer))

(cffi:defcfun ("wxImage_Rescale" wxImage_Rescale) :void
  (_obj :pointer)
  (width :int)
  (height :int))

(cffi:defcfun ("wxImage_Rotate" wxImage_Rotate) :void
  (_obj :pointer)
  (angle :double)
  (c_x :int)
  (c_y :int)
  (interpolating :int)
  (offset_after_rotation :pointer)
  (image :pointer))

(cffi:defcfun ("wxImage_Rotate90" wxImage_Rotate90) :void
  (_obj :pointer)
  (clockwise :int)
  (image :pointer))

(cffi:defcfun ("wxImage_Mirror" wxImage_Mirror) :void
  (_obj :pointer)
  (horizontally :int)
  (image :pointer))

(cffi:defcfun ("wxImage_Replace" wxImage_Replace) :void
  (_obj :pointer)
  (r1 :char)
  (g1 :char)
  (b1 :char)
  (r2 :char)
  (g2 :char)
  (b2 :char))

(cffi:defcfun ("wxImage_SetRGB" wxImage_SetRGB) :void
  (_obj :pointer)
  (x :int)
  (y :int)
  (r :char)
  (g :char)
  (b :char))

(cffi:defcfun ("wxImage_GetRed" wxImage_GetRed) :char
  (_obj :pointer)
  (x :int)
  (y :int))

(cffi:defcfun ("wxImage_GetGreen" wxImage_GetGreen) :char
  (_obj :pointer)
  (x :int)
  (y :int))

(cffi:defcfun ("wxImage_GetBlue" wxImage_GetBlue) :char
  (_obj :pointer)
  (x :int)
  (y :int))

(cffi:defcfun ("wxImage_CanRead" wxImage_CanRead) :int
  (name :pointer))

(cffi:defcfun ("wxImage_LoadFile" wxImage_LoadFile) :int
  (_obj :pointer)
  (name :pointer)
  (type :int))

(cffi:defcfun ("wxImage_SaveFile" wxImage_SaveFile) :int
  (_obj :pointer)
  (name :pointer)
  (type :int))

(cffi:defcfun ("wxImage_Ok" wxImage_Ok) :int
  (_obj :pointer))

(cffi:defcfun ("wxImage_GetWidth" wxImage_GetWidth) :int
  (_obj :pointer))

(cffi:defcfun ("wxImage_GetHeight" wxImage_GetHeight) :int
  (_obj :pointer))

(cffi:defcfun ("wxImage_GetData" wxImage_GetData) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxImage_SetData" wxImage_SetData) :void
  (_obj :pointer)
  (data :pointer))

(cffi:defcfun ("wxImage_SetDataAndSize" wxImage_SetDataAndSize) :void
  (_obj :pointer)
  (data :string)
  (new_width :int)
  (new_height :int))

(cffi:defcfun ("wxImage_SetMaskColour" wxImage_SetMaskColour) :void
  (_obj :pointer)
  (r :char)
  (g :char)
  (b :char))

(cffi:defcfun ("wxImage_GetMaskRed" wxImage_GetMaskRed) :char
  (_obj :pointer))

(cffi:defcfun ("wxImage_GetMaskGreen" wxImage_GetMaskGreen) :char
  (_obj :pointer))

(cffi:defcfun ("wxImage_GetMaskBlue" wxImage_GetMaskBlue) :char
  (_obj :pointer))

(cffi:defcfun ("wxImage_SetMask" wxImage_SetMask) :void
  (_obj :pointer)
  (mask :int))

(cffi:defcfun ("wxImage_HasMask" wxImage_HasMask) :int
  (_obj :pointer))

(cffi:defcfun ("wxImage_CountColours" wxImage_CountColours) :int
  (_obj :pointer)
  (stopafter :int))

(cffi:defcfun ("wxImage_CreateFromDataEx" wxImage_CreateFromDataEx) :pointer
  (width :int)
  (height :int)
  (data :pointer)
  (isStaticData :int))

(cffi:defcfun ("wxImage_Delete" wxImage_Delete) :void
  (image :pointer))


