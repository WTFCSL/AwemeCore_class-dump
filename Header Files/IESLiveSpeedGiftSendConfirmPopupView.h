//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIView, UIButton;

@interface IESLiveSpeedGiftSendConfirmPopupView : UIView {
    BOOL _disableAlert;
    NSString *_message;
    id /* block */ _confirmBlock;
    id /* block */ _cancelBlock;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIImageView *_noAlertImageView;
    UILabel *_noAlertLabel;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *noAlertImageView;
@property (retain, nonatomic) UILabel *noAlertLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (nonatomic) BOOL disableAlert;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;

- (id /* block */)confirmBlock;
- (void)setConfirmBlock:(id /* block */)arg0;
- (void)tapConfirm;
- (id)noAlertImageView;
- (id)noAlertLabel;
- (void)tapNoAlert;
- (void)tapCancel;
- (void)setNoAlertImageView:(id)arg0;
- (void)setNoAlertLabel:(id)arg0;
- (BOOL)disableAlert;
- (void)setDisableAlert:(BOOL)arg0;
- (void)setMessage:(id)arg0;
- (void)setCancelButton:(id)arg0;
- (void)dismiss;
- (id /* block */)cancelBlock;
- (void).cxx_destruct;
- (id)cancelButton;
- (id)titleLabel;
- (id)message;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (void)setCancelBlock:(id /* block */)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setContentView:(id)arg0;
- (void)performShowAnimation;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;

@end
