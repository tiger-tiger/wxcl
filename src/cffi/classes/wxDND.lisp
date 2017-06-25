
;;;wxDND.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("ELJFileDropTarget_Create" ELJFileDropTarget_Create) :pointer
  (_obj :pointer)
  (_func :pointer))

(cffi:defcfun ("ELJFileDropTarget_Delete" ELJFileDropTarget_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("ELJTextDropTarget_Create" ELJTextDropTarget_Create) :pointer
  (_obj :pointer)
  (_func :pointer))

(cffi:defcfun ("ELJTextDropTarget_Delete" ELJTextDropTarget_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("TextDataObject_Create" TextDataObject_Create) :pointer
  (_txt :pointer))

(cffi:defcfun ("TextDataObject_Delete" TextDataObject_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("FileDataObject_Create" FileDataObject_Create) :pointer
  (_lst :pointer)
  (_cnt :int))

(cffi:defcfun ("FileDataObject_Delete" FileDataObject_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("FileDataObject_AddFile" FileDataObject_AddFile) :void
  (_obj :pointer)
  (_fle :pointer))

(cffi:defcfun ("FileDataObject_GetFilenames" FileDataObject_GetFilenames) :int
  (_obj :pointer)
  (_lst :pointer))

(cffi:defcfun ("BitmapDataObject_Create" BitmapDataObject_Create) :pointer
  (_bmp :pointer))

(cffi:defcfun ("BitmapDataObject_CreateEmpty" BitmapDataObject_CreateEmpty) :pointer)

(cffi:defcfun ("BitmapDataObject_Delete" BitmapDataObject_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("BitmapDataObject_SetBitmap" BitmapDataObject_SetBitmap) :void
  (_obj :pointer)
  (_bmp :pointer))

(cffi:defcfun ("BitmapDataObject_GetBitmap" BitmapDataObject_GetBitmap) :void
  (_obj :pointer)
  (_bmp :pointer))

(cffi:defcfun ("DropSource_Create" DropSource_Create) :pointer
  (data :pointer)
  (win :pointer)
  (copy :pointer)
  (move :pointer)
  (none :pointer))

(cffi:defcfun ("DropSource_Delete" DropSource_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("DropSource_DoDragDrop" DropSource_DoDragDrop) :int
  (_obj :pointer)
  (_move :int))

(cffi:defcfun ("ELJDropTarget_Create" ELJDropTarget_Create) :pointer
  (_obj :pointer))

(cffi:defcfun ("ELJDropTarget_Delete" ELJDropTarget_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("ELJFileDropTarget_SetOnData" ELJFileDropTarget_SetOnData) :void
  (_obj :pointer)
  (_func :pointer))

(cffi:defcfun ("ELJFileDropTarget_SetOnDrop" ELJFileDropTarget_SetOnDrop) :void
  (_obj :pointer)
  (_func :pointer))

(cffi:defcfun ("ELJFileDropTarget_SetOnEnter" ELJFileDropTarget_SetOnEnter) :void
  (_obj :pointer)
  (_func :pointer))

(cffi:defcfun ("ELJFileDropTarget_SetOnDragOver" ELJFileDropTarget_SetOnDragOver) :void
  (_obj :pointer)
  (_func :pointer))

(cffi:defcfun ("ELJFileDropTarget_SetOnLeave" ELJFileDropTarget_SetOnLeave) :void
  (_obj :pointer)
  (_func :pointer))

(cffi:defcfun ("ELJTextDropTarget_SetOnData" ELJTextDropTarget_SetOnData) :void
  (_obj :pointer)
  (_func :pointer))

(cffi:defcfun ("ELJTextDropTarget_SetOnDrop" ELJTextDropTarget_SetOnDrop) :void
  (_obj :pointer)
  (_func :pointer))

(cffi:defcfun ("ELJTextDropTarget_SetOnEnter" ELJTextDropTarget_SetOnEnter) :void
  (_obj :pointer)
  (_func :pointer))

(cffi:defcfun ("ELJTextDropTarget_SetOnDragOver" ELJTextDropTarget_SetOnDragOver) :void
  (_obj :pointer)
  (_func :pointer))

(cffi:defcfun ("ELJTextDropTarget_SetOnLeave" ELJTextDropTarget_SetOnLeave) :void
  (_obj :pointer)
  (_func :pointer))

(cffi:defcfun ("ELJDropTarget_SetOnData" ELJDropTarget_SetOnData) :void
  (_obj :pointer)
  (_func :pointer))

(cffi:defcfun ("ELJDropTarget_SetOnDrop" ELJDropTarget_SetOnDrop) :void
  (_obj :pointer)
  (_func :pointer))

(cffi:defcfun ("ELJDropTarget_SetOnEnter" ELJDropTarget_SetOnEnter) :void
  (_obj :pointer)
  (_func :pointer))

(cffi:defcfun ("ELJDropTarget_SetOnDragOver" ELJDropTarget_SetOnDragOver) :void
  (_obj :pointer)
  (_func :pointer))

(cffi:defcfun ("ELJDropTarget_SetOnLeave" ELJDropTarget_SetOnLeave) :void
  (_obj :pointer)
  (_func :pointer))

(cffi:defcfun ("wxDropTarget_GetData" wxDropTarget_GetData) :void
  (_obj :pointer))

(cffi:defcfun ("wxDropTarget_SetDataObject" wxDropTarget_SetDataObject) :void
  (_obj :pointer)
  (_dat :pointer))

(cffi:defcfun ("ELJDragDataObject_Create" ELJDragDataObject_Create) :pointer
  (_obj :pointer)
  (_fmt :pointer)
  (_func1 :pointer)
  (_func2 :pointer)
  (_func3 :pointer))

(cffi:defcfun ("ELJDragDataObject_Delete" ELJDragDataObject_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxDataObjectComposite_Create" wxDataObjectComposite_Create) :pointer)

(cffi:defcfun ("wxDataObjectComposite_Delete" wxDataObjectComposite_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxDataObjectComposite_Add" wxDataObjectComposite_Add) :void
  (_obj :pointer)
  (_dat :pointer)
  (_preferred :int))


