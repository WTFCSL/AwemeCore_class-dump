//
//     Generated by private class-dump
//

@class UIButton, NSString, UILabel, NSAttributedString, UIView;
@protocol AFDModalViewHelperProtocol;

@interface AWECommentRiskAlertViewController : UIViewController <AWEPanelTransitionWithBackground, AWECommentRiskAlertViewControllerProtocol> {
    BOOL _isLandscape;
    id /* block */ _reeditBlock;
    id /* block */ _stillSendBlock;
    id<AFDModalViewHelperProtocol> _helper;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    NSAttributedString *_descAttri;
    UIButton *_stillSendBtn;
    UIButton *_reeditBtn;
}

@property (retain, nonatomic) id<AFDModalViewHelperProtocol> helper;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) NSAttributedString *descAttri;
@property (retain, nonatomic) UIButton *stillSendBtn;
@property (retain, nonatomic) UIButton *reeditBtn;
@property (nonatomic) BOOL isLandscape;
@property (copy, nonatomic) id /* block */ reeditBlock;
@property (copy, nonatomic) id /* block */ stillSendBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (BOOL)disableInputSettings;

- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:(id)arg0;
- (void)presentedViewPanFinished;
- (id)aAWEPadModuleAdapter;
- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (void)__setupUI;
- (id)__buildDescAttri:(id)arg0;
- (void)setDescAttri:(id)arg0;
- (id)descAttri;
- (id)stillSendBtn;
- (id)reeditBtn;
- (id /* block */)reeditBlock;
- (id /* block */)stillSendBlock;
- (void)__stillSendClick;
- (void)__reeditClick;
- (id)initWithDescription:(id)arg0 isLandscape:(BOOL)arg1;
- (void)setReeditBlock:(id /* block */)arg0;
- (void)setStillSendBlock:(id /* block */)arg0;
- (void)setStillSendBtn:(id)arg0;
- (void)setReeditBtn:(id)arg0;
- (void).cxx_destruct;
- (void)setHelper:(id)arg0;
- (id)titleLabel;
- (id)helper;
- (void)setIsLandscape:(BOOL)arg0;
- (id)contentView;
- (BOOL)isLandscape;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)setContentView:(id)arg0;

@end
