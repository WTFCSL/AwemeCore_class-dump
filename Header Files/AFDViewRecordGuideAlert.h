//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel;

@interface AFDViewRecordGuideAlert : NSObject <AWEAlertProtocol, AFDViewerRecordGuideViewAlertProtocol> {
    BOOL _isShowing;
    NSString *_referString;
    AWEAwemeModel *_currentAweme;
}

@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *currentAweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)referString;
- (void)showWithCloseCallback:(id /* block */)arg0;
- (BOOL)canShow;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (void)setIsShowing:(BOOL)arg0;
- (void)setReferString:(id)arg0;
- (id)currentAweme;
- (void)setCurrentAweme:(id)arg0;
- (void)updateReferString:(id)arg0 aweme:(id)arg1;
- (void).cxx_destruct;
- (void)trigger;
- (BOOL)isShowing;

@end