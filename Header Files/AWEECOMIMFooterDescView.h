//
//     Generated by private class-dump
//

@class UIStackView, AWEECOMIMFooterMemberView, UITapGestureRecognizer, AWEECOMIMFooterTipsModel, AWEECOMIMFooterCareNoticeButton, YYLabel;
@protocol AWEECOMIMFooterDescViewDelegate;

@interface AWEECOMIMFooterDescView : UIView {
    AWEECOMIMFooterTipsModel *_model;
    long long _alignment;
    id<AWEECOMIMFooterDescViewDelegate> _delegate;
    UIStackView *_contentView;
    YYLabel *_textLabel;
    AWEECOMIMFooterCareNoticeButton *_switchBtn;
    AWEECOMIMFooterMemberView *_memberView;
    UITapGestureRecognizer *_btnTap;
}

@property (retain, nonatomic) UIStackView *contentView;
@property (retain, nonatomic) YYLabel *textLabel;
@property (retain, nonatomic) AWEECOMIMFooterCareNoticeButton *switchBtn;
@property (retain, nonatomic) AWEECOMIMFooterMemberView *memberView;
@property (retain, nonatomic) UITapGestureRecognizer *btnTap;
@property (readonly, nonatomic) AWEECOMIMFooterTipsModel *model;
@property (nonatomic) long long alignment;
@property (weak, nonatomic) id<AWEECOMIMFooterDescViewDelegate> delegate;

+ (double)contentHeightWithType:(unsigned long long)arg0;

- (void)setModel:(id)arg0 userConfig:(id)arg1 showSwitchHuman:(BOOL)arg2;
- (void)modifyUserConfig;
- (id)switchBtn;
- (id)memberView;
- (void)setSwitchBtn:(id)arg0;
- (void)setMemberView:(id)arg0;
- (id)btnTap;
- (void)setBtnTap:(id)arg0;
- (id)textLabel;
- (void).cxx_destruct;
- (void)setAlignment:(long long)arg0;
- (id)model;
- (long long)alignment;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setContentView:(id)arg0;
- (void)setTextLabel:(id)arg0;

@end
