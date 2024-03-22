//
//     Generated by private class-dump
//

@class AWEProfileSetEffectCoverGuideViewController, NSString;

@interface AWEProfileSetEffectCoverGuideManager : NSObject <AWEAlertProtocol> {
    NSString *_enterFrom;
    AWEProfileSetEffectCoverGuideViewController *_popUpVC;
}

@property (retain, nonatomic) AWEProfileSetEffectCoverGuideViewController *popUpVC;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (void)showWithCloseCallback:(id /* block */)arg0;
- (BOOL)canShow;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (id)enterFrom;
- (id)popUpVC;
- (void)setPopUpVC:(id)arg0;
- (void)trackGuideViewControlerShow:(BOOL)arg0;
- (void).cxx_destruct;

@end