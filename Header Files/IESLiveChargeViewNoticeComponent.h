//
//     Generated by private class-dump
//

@class UIButton, NSString, IESLiveChargeViewModel, UIImageView, UIView, IESLiveGradientView, UILabel;

@interface IESLiveChargeViewNoticeComponent : UIView <IESLiveChargeViewComponent> {
    double _width;
    IESLiveChargeViewModel *_viewModel;
    UIView *_containerView;
    IESLiveGradientView *_backgroundGradientView;
    UILabel *_tipTextLabel;
    UIButton *_closeTipButton;
    UIImageView *_tipImageView;
}

@property (nonatomic) double width;
@property (retain, nonatomic) IESLiveChargeViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) IESLiveGradientView *backgroundGradientView;
@property (retain, nonatomic) UILabel *tipTextLabel;
@property (retain, nonatomic) UIButton *closeTipButton;
@property (retain, nonatomic) UIImageView *tipImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewModel:(id)arg0;
- (void)setTipImageView:(id)arg0;
- (id)tipImageView;
- (id)closeTipButton;
- (id)tipTextLabel;
- (void)closeButtonIsClicked;
- (void)setTipTextLabel:(id)arg0;
- (void)setCloseTipButton:(id)arg0;
- (void)reload;
- (void).cxx_destruct;
- (id)initWithWidth:(double)arg0;
- (void)setContainerView:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)containerView;
- (void)setWidth:(double)arg0;
- (id)viewModel;
- (double)width;
- (void)setupUI;
- (double)viewHeight;
- (id)backgroundGradientView;
- (void)setBackgroundGradientView:(id)arg0;

@end
