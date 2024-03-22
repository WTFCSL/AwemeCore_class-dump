//
//     Generated by private class-dump
//

@class NSArray, NSString, UIView, BDPUniqueID;

@interface BDPBusinessXScreenViewController : BDPXScreenViewController <BDPContainerLifeCycleMessage, BDPXScreenConfigDelegate, BDPXScreenStatusChangeDelegate> {
    BOOL _isGestureShouldBegin;
    BOOL _isMonitoring;
    BDPUniqueID *_uniqueID;
    id /* block */ _customButtonAction;
    id /* block */ _customButtonActionClose;
    UIView *_businessCustomButtonView;
    NSArray *_businessCustomButtonList;
    UIView *_businessCustomSeperatorLayer;
}

@property (nonatomic) BOOL isGestureShouldBegin;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) id /* block */ customButtonAction;
@property (copy, nonatomic) id /* block */ customButtonActionClose;
@property (retain, nonatomic) UIView *businessCustomButtonView;
@property (retain, nonatomic) NSArray *businessCustomButtonList;
@property (retain, nonatomic) UIView *businessCustomSeperatorLayer;
@property (nonatomic) BOOL isMonitoring;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationEnterWithUniqueID:(id)arg0;
- (BOOL)XScreenWindowShouldShowCustomButton:(id)arg0;
- (BOOL)XScreenWindow:(id)arg0 gestureRecognizerShouldBegin:(id)arg1;
- (unsigned long long)XScreenWindowChangeToSizeModeWhenShowFirstly:(id)arg0 isSecondPage:(BOOL)arg1;
- (void)XScreenWindow:(id)arg0 didChangeToSizeMode:(unsigned long long)arg1;
- (void)XScreenWindow:(id)arg0 translateToValue:(double)arg1 contentHeight:(double)arg2 contentHeightRate:(double)arg3 adjustContent:(BOOL)arg4;
- (double)XScreenWindowContentHeightRate:(id)arg0;
- (BOOL)useNewXScreenGestureOpt;
- (void)setupXScreenPanGestureRecognizer;
- (id)businessCustomButtonView;
- (id)businessCustomButtonList;
- (id)businessCustomSeperatorLayer;
- (void)postEnterFullScreenNotification;
- (void)postEnterSmallScreenNotification;
- (BOOL)isGestureShouldBegin;
- (id)getLaunchParam;
- (BOOL)canShowFeedBackButton;
- (void)XScreenWindowCustomButtonAction;
- (void)setCustomButtonAction:(id /* block */)arg0;
- (void)XScreenWindowCustomButtonActionClose;
- (void)setCustomButtonActionClose:(id /* block */)arg0;
- (void)setBusinessCustomSeperatorLayer:(id)arg0;
- (void)setBusinessCustomButtonView:(id)arg0;
- (void)setBusinessCustomButtonList:(id)arg0;
- (id /* block */)customButtonAction;
- (id /* block */)customButtonActionClose;
- (id)getCurrentWindowBackgroundShadowView;
- (void)setIsGestureShouldBegin:(BOOL)arg0;
- (BOOL)canShowFeedBackButtonByMeta;
- (BOOL)canShowFeedBackButtonBySettings;
- (void)XScreenWindowWillClose:(id)arg0;
- (void)XScreenWindowClose:(id)arg0;
- (void)XScreenWindowCustomButton:(id)arg0 buttonList:(id)arg1 seperatorLayer:(id)arg2 viewController:(id)arg3;
- (BOOL)XScreenWindowCanBeDragUp:(id)arg0;
- (BOOL)XScreenWindowCanBeDragDown:(id)arg0;
- (double)XScreenWindowCornerRadius:(id)arg0;
- (unsigned long long)XScreenWindowChangeToSizeModeWhenShowAgain:(id)arg0;
- (void)XScreenWindowUpdateResize:(id)arg0;
- (void)XScreenWindow:(id)arg0 willChangeToSizeMode:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)uniqueID;
- (BOOL)isMonitoring;
- (void)setUniqueID:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (id)initWithUniqueID:(id)arg0;
- (void)setIsMonitoring:(BOOL)arg0;

@end
