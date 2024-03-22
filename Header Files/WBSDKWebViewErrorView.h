//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView, UIButton;

@interface WBSDKWebViewErrorView : UIView {
    UIButton *_retryButton;
    UIView *_buttonsContainer;
    UIButton *_closeButton;
    UILabel *_descriptionLabel;
    UIImageView *_imageView;
}

@property (retain, nonatomic) UIView *buttonsContainer;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIButton *retryButton;

- (void)setButtonsContainer:(id)arg0;
- (id)buttonsContainer;
- (void).cxx_destruct;
- (id)imageView;
- (void)setDescriptionLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)descriptionLabel;
- (void)setImageView:(id)arg0;
- (void)hide;
- (void)layoutSubviews;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)showError:(id)arg0;
- (id)retryButton;
- (void)setRetryButton:(id)arg0;

@end
