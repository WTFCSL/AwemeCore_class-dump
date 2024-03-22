//
//     Generated by private class-dump
//

@class AWEUserProtocolPopContentView, AWEUserProtocolPopViewModel, UIView;

@interface AWEUserProtocolPopView : UIView {
    UIView *_maskView;
    AWEUserProtocolPopContentView *_contentView;
    AWEUserProtocolPopViewModel *_model;
    id /* block */ _callBack;
}

@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) AWEUserProtocolPopContentView *contentView;
@property (retain, nonatomic) AWEUserProtocolPopViewModel *model;
@property (copy, nonatomic) id /* block */ callBack;

- (void)trackShow;
- (id /* block */)callBack;
- (void)setCallBack:(id /* block */)arg0;
- (void)trackClickWithAction:(id)arg0;
- (void)showInView:(id)arg0 completion:(id /* block */)arg1;
- (void)clickAgreeButton:(id)arg0;
- (void)clickDisagreeButton:(id)arg0;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)maskView;
- (id)contentView;
- (void)dismissWithCompletion:(id /* block */)arg0;
- (void)setMaskView:(id)arg0;
- (void)setContentView:(id)arg0;
- (void)setupUI;
- (void)updateWithModel:(id)arg0;

@end
