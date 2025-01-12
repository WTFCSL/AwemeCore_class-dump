//
//     Generated by private class-dump
//

@class UIButton, UIView;
@protocol IESLiveEmojiCreateAlertViewDelegate;

@interface IESLiveEmojiCreateAlertView : UIView {
    BOOL _isFromRoom;
    id<IESLiveEmojiCreateAlertViewDelegate> _delegate;
    UIButton *_openCameraButtton;
    UIButton *_openPhotoAlbumButton;
    UIButton *_cancelButton;
    UIView *_dividingLineView;
}

@property (retain, nonatomic) UIButton *openCameraButtton;
@property (retain, nonatomic) UIButton *openPhotoAlbumButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIView *dividingLineView;
@property (nonatomic) BOOL isFromRoom;
@property (weak, nonatomic) id<IESLiveEmojiCreateAlertViewDelegate> delegate;

- (void)setUI;
- (id)dividingLineView;
- (void)setDividingLineView:(id)arg0;
- (void)tapCancel;
- (void)setIsFromRoom:(BOOL)arg0;
- (id)openCameraButtton;
- (id)openPhotoAlbumButton;
- (void)tapOpenPhotoAlbumButton;
- (void)tapOpenCameraButtton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 isfromRoom:(BOOL)arg1;
- (void)setOpenCameraButtton:(id)arg0;
- (void)setOpenPhotoAlbumButton:(id)arg0;
- (BOOL)isFromRoom;
- (void)setCancelButton:(id)arg0;
- (void).cxx_destruct;
- (id)cancelButton;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
