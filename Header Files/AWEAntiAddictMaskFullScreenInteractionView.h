//
//     Generated by private class-dump
//

@class UILabel, AWEAntiAddictMaskContext, UIButton, NSString, AWEAntiAddictMaskConfig, UIView, AWEGradientView;
@protocol AWEFeedAntiAddictMaskModelProtocol;

@interface AWEAntiAddictMaskFullScreenInteractionView : UIView <UIGestureRecognizerDelegate, AWEAntiAddictMaskInteractionViewProtocol> {
    NSString *_mainTitle;
    NSString *_subTitle;
    NSString *_enterText;
    NSString *_laterRemindText;
    NSString *_exitText;
    id<AWEFeedAntiAddictMaskModelProtocol> _model;
    AWEAntiAddictMaskContext *_context;
    AWEAntiAddictMaskConfig *_config;
    UIView *_fullPlayMaskView;
    AWEGradientView *_topGradientView;
    AWEGradientView *_bottomGradientView;
    UIView *_titleContainerView;
    AWEGradientView *_titleGradientView;
    UILabel *_mainTitleLabel;
    UIButton *_mainTitleEditButton;
    UILabel *_subTitleLabel;
    UIButton *_subTitleEditButton;
    UIView *_secondContainerView;
    UIButton *_settingButton;
    UIView *_sleepButtonContainer;
    UIButton *_sleepConfirmButton;
    UIButton *_sleepCancelButton;
    UIView *_restButtonContainer;
    UIButton *_restCancelButton;
}

@property (retain, nonatomic) id<AWEFeedAntiAddictMaskModelProtocol> model;
@property (retain, nonatomic) AWEAntiAddictMaskContext *context;
@property (retain, nonatomic) AWEAntiAddictMaskConfig *config;
@property (retain, nonatomic) UIView *fullPlayMaskView;
@property (retain, nonatomic) AWEGradientView *topGradientView;
@property (retain, nonatomic) AWEGradientView *bottomGradientView;
@property (retain, nonatomic) UIView *titleContainerView;
@property (retain, nonatomic) AWEGradientView *titleGradientView;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UIButton *mainTitleEditButton;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *subTitleEditButton;
@property (retain, nonatomic) UIView *secondContainerView;
@property (retain, nonatomic) UIButton *settingButton;
@property (retain, nonatomic) UIView *sleepButtonContainer;
@property (retain, nonatomic) UIButton *sleepConfirmButton;
@property (retain, nonatomic) UIButton *sleepCancelButton;
@property (retain, nonatomic) UIView *restButtonContainer;
@property (retain, nonatomic) UIButton *restCancelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *enterText;
@property (copy, nonatomic) NSString *laterRemindText;
@property (copy, nonatomic) NSString *exitText;

- (id)settingButton;
- (void)setSettingButton:(id)arg0;
- (void)addGestureRecognizer;
- (id)enterText;
- (void)setEnterText:(id)arg0;
- (id)exitText;
- (id)laterRemindText;
- (void)didClickCancelButton;
- (id)mainTitleLabel;
- (void)setMainTitleLabel:(id)arg0;
- (void)setExitText:(id)arg0;
- (void)catchGesture:(id)arg0;
- (void)setupCommonViews;
- (void)setupUILayout;
- (void)setFullPlayMaskView:(id)arg0;
- (id)fullPlayMaskView;
- (void)setTitleGradientView:(id)arg0;
- (id)titleGradientView;
- (void)updateViewShadow:(id)arg0 radius:(double)arg1 shadowAlpha:(double)arg2;
- (void)setMainTitleEditButton:(id)arg0;
- (id)mainTitleEditButton;
- (void)didClickTitleEdit;
- (void)setSubTitleEditButton:(id)arg0;
- (id)subTitleEditButton;
- (void)didClickSubTitleEdit;
- (void)setSecondContainerView:(id)arg0;
- (id)secondContainerView;
- (void)setupGeneralButton;
- (void)didClickSettingButton;
- (void)setSleepButtonContainer:(id)arg0;
- (id)sleepButtonContainer;
- (void)setSleepConfirmButton:(id)arg0;
- (id)sleepConfirmButton;
- (void)didClickSleepConfirmButton;
- (void)setSleepCancelButton:(id)arg0;
- (id)sleepCancelButton;
- (void)setRestButtonContainer:(id)arg0;
- (id)restButtonContainer;
- (void)setRestCancelButton:(id)arg0;
- (id)restCancelButton;
- (BOOL)isCustomRemind;
- (BOOL)isSleepRemind;
- (void)updateViewShadow:(id)arg0 radius:(double)arg1 shadowOpacity:(double)arg2 shadowOffsetX:(double)arg3 shadowOffsetY:(double)arg4 shadowAlpha:(double)arg5;
- (void)showInteractionViewAnimationWithCompletion:(id /* block */)arg0;
- (void)setLaterRemindText:(id)arg0;
- (void)setModel:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (id)config;
- (void)updateWithConfig:(id)arg0;
- (void)setup;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)context;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)reset;
- (id)titleContainerView;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (void)setTitleContainerView:(id)arg0;
- (id)mainTitle;
- (void)setMainTitle:(id)arg0;
- (id)bottomGradientView;
- (void)setBottomGradientView:(id)arg0;
- (id)topGradientView;
- (void)setTopGradientView:(id)arg0;

@end
