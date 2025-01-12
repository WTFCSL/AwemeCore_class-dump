//
//     Generated by private class-dump
//

@class UIButton, UIImageView, UIView;

@interface AWECloudAlbumDetailPreviewUploadView : UIView {
    UIView *_errorView;
    UIButton *_emptyButton;
    UIButton *_retryButton;
    UIButton *_closeButton;
    UIImageView *_iconView;
}

@property (retain, nonatomic) UIView *errorView;
@property (retain, nonatomic) UIButton *emptyButton;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *iconView;

- (id)emptyButton;
- (void)setEmptyButton:(id)arg0;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)errorView;
- (void)setErrorView:(id)arg0;
- (id)retryButton;
- (void)setRetryButton:(id)arg0;

@end
