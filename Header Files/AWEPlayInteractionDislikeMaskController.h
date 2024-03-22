//
//     Generated by private class-dump
//

@class UILabel, UIImageView, UIView;

@interface AWEPlayInteractionDislikeMaskController : AWEPlayInteractionBaseController {
    UIView *_containerView;
    UILabel *_hintLabel;
    UIView *_withdrawButton;
    UIView *_withdrawContentView;
    UIImageView *_withdrawIcon;
    UILabel *_withdrawLabel;
    UIView *_scrollTipContainerView;
    UILabel *_scrollTipLabel;
    UIImageView *_scrollTipIcon;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIView *withdrawButton;
@property (retain, nonatomic) UIView *withdrawContentView;
@property (retain, nonatomic) UIImageView *withdrawIcon;
@property (retain, nonatomic) UILabel *withdrawLabel;
@property (retain, nonatomic) UIView *scrollTipContainerView;
@property (retain, nonatomic) UILabel *scrollTipLabel;
@property (retain, nonatomic) UIImageView *scrollTipIcon;

- (void)trackShow;
- (void)setupNotification;
- (id)scrollTipLabel;
- (void)setScrollTipLabel:(id)arg0;
- (id)withdrawButton;
- (id)withdrawContentView;
- (id)withdrawIcon;
- (id)withdrawLabel;
- (id)scrollTipContainerView;
- (id)scrollTipIcon;
- (void)didClickWithdraw:(id)arg0;
- (void)setWithdrawButton:(id)arg0;
- (void)setWithdrawContentView:(id)arg0;
- (void)setWithdrawIcon:(id)arg0;
- (void)setWithdrawLabel:(id)arg0;
- (void)setScrollTipContainerView:(id)arg0;
- (void)setScrollTipIcon:(id)arg0;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)reset;
- (void)viewDidLoad;
- (void)setupUI;
- (id)hintLabel;
- (void)setHintLabel:(id)arg0;

@end