//
//     Generated by private class-dump
//

@class UIWindow, UIImageView, UILabel, UIView, UIButton;

@interface CSJRewardBrowseAlertView : UIView {
    id /* block */ _confirmBlock;
    id /* block */ _cancelBlock;
    UIImageView *_icon;
    UILabel *_titleLabel;
    UILabel *_msgLabel;
    UIButton *_confirmBtn;
    UIButton *_cancelBtn;
    UIView *_contentView;
    UIWindow *_bgWindow;
}

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *msgLabel;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIWindow *bgWindow;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;

- (void)closeBtnClicked;
- (id /* block */)confirmBlock;
- (id)confirmBtn;
- (id)cancelBtn;
- (id)bgWindow;
- (void)setBgWindow:(id)arg0;
- (void)setConfirmBtn:(id)arg0;
- (void)setCancelBtn:(id)arg0;
- (void)setMsgLabel:(id)arg0;
- (id)msgLabel;
- (void)confirmBtnClicked;
- (id)initWith:(id)arg0 msg:(id)arg1;
- (void)setConfirmBlock:(id /* block */)arg0;
- (id)icon;
- (id /* block */)cancelBlock;
- (void).cxx_destruct;
- (void)show;
- (id)titleLabel;
- (id)contentView;
- (void)hide;
- (void)setIcon:(id)arg0;
- (void)setCancelBlock:(id /* block */)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setContentView:(id)arg0;

@end
