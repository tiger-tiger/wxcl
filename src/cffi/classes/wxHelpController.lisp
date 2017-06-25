
;;;wxHelpController.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxHtmlHelpController_Create" wxHtmlHelpController_Create) :pointer
  (_style :int))

(cffi:defcfun ("wxHtmlHelpController_Delete" wxHtmlHelpController_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxHtmlHelpController_SetTitleFormat" wxHtmlHelpController_SetTitleFormat) :void
  (_obj :pointer)
  (format :pointer))

(cffi:defcfun ("wxHtmlHelpController_SetTempDir" wxHtmlHelpController_SetTempDir) :void
  (_obj :pointer)
  (path :pointer))

(cffi:defcfun ("wxHtmlHelpController_AddBook" wxHtmlHelpController_AddBook) :int
  (_obj :pointer)
  (book :pointer)
  (show_wait_msg :int))

(cffi:defcfun ("wxHtmlHelpController_Display" wxHtmlHelpController_Display) :int
  (_obj :pointer)
  (x :pointer))

(cffi:defcfun ("wxHtmlHelpController_DisplayNumber" wxHtmlHelpController_DisplayNumber) :int
  (_obj :pointer)
  (id :int))

(cffi:defcfun ("wxHtmlHelpController_DisplayContents" wxHtmlHelpController_DisplayContents) :int
  (_obj :pointer))

(cffi:defcfun ("wxHtmlHelpController_DisplayIndex" wxHtmlHelpController_DisplayIndex) :int
  (_obj :pointer))

(cffi:defcfun ("wxHtmlHelpController_KeywordSearch" wxHtmlHelpController_KeywordSearch) :int
  (_obj :pointer)
  (keyword :pointer))

(cffi:defcfun ("wxHtmlHelpController_GetFrame" wxHtmlHelpController_GetFrame) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxHtmlHelpController_UseConfig" wxHtmlHelpController_UseConfig) :void
  (_obj :pointer)
  (config :pointer)
  (rootpath :pointer))

(cffi:defcfun ("wxHtmlHelpController_ReadCustomization" wxHtmlHelpController_ReadCustomization) :void
  (_obj :pointer)
  (cfg :pointer)
  (path :pointer))

(cffi:defcfun ("wxHtmlHelpController_WriteCustomization" wxHtmlHelpController_WriteCustomization) :void
  (_obj :pointer)
  (cfg :pointer)
  (path :pointer))

(cffi:defcfun ("wxHtmlHelpController_Initialize" wxHtmlHelpController_Initialize) :int
  (_obj :pointer)
  (file :pointer))

(cffi:defcfun ("wxHtmlHelpController_SetViewer" wxHtmlHelpController_SetViewer) :void
  (_obj :pointer)
  (viewer :pointer)
  (flags :int))

(cffi:defcfun ("wxHtmlHelpController_LoadFile" wxHtmlHelpController_LoadFile) :int
  (_obj :pointer)
  (file :pointer))

(cffi:defcfun ("wxHtmlHelpController_DisplaySectionNumber" wxHtmlHelpController_DisplaySectionNumber) :int
  (_obj :pointer)
  (sectionNo :int))

(cffi:defcfun ("wxHtmlHelpController_DisplaySection" wxHtmlHelpController_DisplaySection) :int
  (_obj :pointer)
  (section :pointer))

(cffi:defcfun ("wxHtmlHelpController_DisplayBlock" wxHtmlHelpController_DisplayBlock) :int
  (_obj :pointer)
  (blockNo :int))

(cffi:defcfun ("wxHtmlHelpController_SetFrameParameters" wxHtmlHelpController_SetFrameParameters) :void
  (_obj :pointer)
  (title :pointer)
  (width :int)
  (height :int)
  (pos_x :int)
  (pos_y :int)
  (newFrameEachTime :int))

(cffi:defcfun ("wxHtmlHelpController_GetFrameParameters" wxHtmlHelpController_GetFrameParameters) :pointer
  (_obj :pointer)
  (title :pointer)
  (width :pointer)
  (height :pointer)
  (pos_x :pointer)
  (pos_y :pointer)
  (newFrameEachTime :pointer))

(cffi:defcfun ("wxHtmlHelpController_Quit" wxHtmlHelpController_Quit) :int
  (_obj :pointer))


