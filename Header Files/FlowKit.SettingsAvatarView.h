//
//     Generated by private class-dump
//

@interface FlowKit.SettingsAvatarView : UIView <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    void /* unknown type, empty encoding */ canEditAvatar;
    void /* unknown type, empty encoding */ didClickAvatar;
    void /* unknown type, empty encoding */ didUpdateAvatar;
    void /* unknown type, empty encoding */ previewAvatarController;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ _botAdapter;
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ _accountProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatarView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_updateAvatarButton;
    void /* unknown type, empty encoding */ loadingView;
}

- (void)imagePickerControllerDidCancel:(id)arg0;
- (void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1;
- (void)avatarViewClicked;
- (void)uploadButtonClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithCoder:(id)arg0;
- (void)layoutSubviews;

@end
