//
//     Generated by private class-dump
//

@class NSString, UIView;

@interface AWEIMLeftSideBarEntranceGlobalAlertManager : NSObject <AWEAlertProtocol, AWEIMLeftSideBarEntranceGlobalAlertManagerProtocol> {
    BOOL feedIsAppear;
    UIView *_guideView;
    id /* block */ _onClose;
}

@property (retain, nonatomic) UIView *guideView;
@property (copy, nonatomic) id /* block */ onClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL feedIsAppear;

+ (id)createCubicBezierAnimationWith:(id)arg0 duration:(double)arg1 timingFunction:(id)arg2;
+ (id)sharedInstance;

- (id)alertIDForEvent:(id)arg0;
- (long long)alertPriorityForEvent:(id)arg0;
- (BOOL)canShowWithContext:(id)arg0;
- (void)showWithContext:(id)arg0 onClose:(id /* block */)arg1;
- (BOOL)enableShowAlert;
- (BOOL)enableCommonShowAlert;
- (BOOL)feedIsAppear;
- (void)showInterationNoticeMoveGuideWithHollowAreas:(id)arg0 onClose:(id /* block */)arg1;
- (void)setFeedIsAppear:(BOOL)arg0;
- (void)alertViewDidPan;
- (void)dismiss;
- (void).cxx_destruct;
- (id /* block */)onClose;
- (void)setOnClose:(id /* block */)arg0;
- (void)setGuideView:(id)arg0;
- (id)guideView;
- (BOOL)isShowingAlert;

@end