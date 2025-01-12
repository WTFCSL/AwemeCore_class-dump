//
//     Generated by private class-dump
//

@class UIView, NSString, AWEButton, UIImageView, UIButton, AWECampaignKPopupModel, UIViewController, UILabel, NSNumber;

@interface AWECampaignKPopupView : UIView <AWEUGActivityPopupViewProtocol> {
    id /* block */ _actionButtonBlock;
    id /* block */ _subButtonBlock;
    id /* block */ _closeButtonBlock;
    id /* block */ _dismissBlock;
    UIView *_containerView;
    UIImageView *_bgImageView;
    UIButton *_closeButton;
    AWEButton *_actionButton;
    UILabel *_actionTitleLabel;
    UIButton *_subButton;
    AWECampaignKPopupModel *_model;
    NSString *_imgCacheName;
    UIViewController *_topViewController;
    NSNumber *_activityStartTime;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) AWEButton *actionButton;
@property (retain, nonatomic) UILabel *actionTitleLabel;
@property (retain, nonatomic) UIButton *subButton;
@property (retain, nonatomic) AWECampaignKPopupModel *model;
@property (copy, nonatomic) NSString *imgCacheName;
@property (weak, nonatomic) UIViewController *topViewController;
@property (retain, nonatomic) NSNumber *activityStartTime;
@property (copy, nonatomic) id /* block */ actionButtonBlock;
@property (copy, nonatomic) id /* block */ subButtonBlock;
@property (copy, nonatomic) id /* block */ closeButtonBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)popupViewWithModel:(id)arg0 imgCacheName:(id)arg1 activityStartTime:(id)arg2;

- (void)configViews;
- (void)updateUIWithModel:(id)arg0;
- (void)setCloseButtonBlock:(id /* block */)arg0;
- (id /* block */)closeButtonBlock;
- (void)setActionButtonBlock:(id /* block */)arg0;
- (void)setSubButtonBlock:(id /* block */)arg0;
- (id /* block */)actionButtonBlock;
- (void)setActivityStartTime:(id)arg0;
- (void)addTokenToSlardar;
- (void)setImgCacheName:(id)arg0;
- (void)removeTokenFromSlardar;
- (id)subButton;
- (id)imgCacheName;
- (void)onTapContainer:(id)arg0;
- (id /* block */)subButtonBlock;
- (id)activityStartTime;
- (void)setSubButton:(id)arg0;
- (id)initWithTask:(id)arg0;
- (void)setModel:(id)arg0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)model;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (id)topViewController;
- (void)showWithCompletion:(id /* block */)arg0;
- (void)dismiss:(id /* block */)arg0;
- (id)actionButton;
- (void)setActionButton:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)setBgImageView:(id)arg0;
- (id)bgImageView;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;
- (void)setTopViewController:(id)arg0;
- (id)actionTitleLabel;
- (void)setActionTitleLabel:(id)arg0;

@end
