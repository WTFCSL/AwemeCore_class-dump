//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIButton;

@interface AWEListenFeedGuidePopupView : AWEFeedBasePopupView {
    id /* block */ _confirmButtonClickAction;
    id /* block */ _dismissedBlock;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIButton *_confirmButton;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (copy, nonatomic) id /* block */ confirmButtonClickAction;
@property (copy, nonatomic) id /* block */ dismissedBlock;

+ (id)listenFeedPopupView;

- (void)setDismissedBlock:(id /* block */)arg0;
- (id /* block */)dismissedBlock;
- (void)p_onClickConfirm;
- (id)initWithContentViewHeight:(double)arg0;
- (void)p_configViews;
- (id /* block */)confirmButtonClickAction;
- (void)setConfirmButtonClickAction:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)hide;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;

@end
