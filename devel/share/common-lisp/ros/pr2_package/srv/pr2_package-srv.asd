
(cl:in-package :asdf)

(defsystem "pr2_package-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "PoseSend" :depends-on ("_package_PoseSend"))
    (:file "_package_PoseSend" :depends-on ("_package"))
  ))