//
//     Generated by private class-dump
//

@class NSString;

@interface AWERecommendMeToOthersAlert : NSObject <DUXSheetDelegate, AWEAlertProtocol> {
    unsigned long long _triggerScene;
}

@property (nonatomic) unsigned long long triggerScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)satifiedInteval;
+ (void)updateAlertShowCounts;
+ (void)updateLastAlertShowDate;
+ (BOOL)satifiedShowConditions;
+ (BOOL)lessThanMaxCounts;
+ (BOOL)satifiedValueChangedInteval;
+ (id)lastAlertShowDate;
+ (long long)alertShowCounts;
+ (id)closeRecommendMeToOthersDate;
+ (void)updateCloseRecommendMeToOthersDate;
+ (void)resetStorage;

- (id)alertIDForEvent:(id)arg0;
- (long long)alertPriorityForEvent:(id)arg0;
- (void)showWithCloseCallback:(id /* block */)arg0;
- (double)showTimeoutWithContext:(id)arg0;
- (BOOL)canShow;
- (void)onAlertCanceled;
- (void)sheetDidClickCloseButton:(id)arg0;
- (void)sheetDidClickMaskArea:(id)arg0;
- (void)sheetDidDismiss:(id)arg0;
- (void)setTriggerScene:(unsigned long long)arg0;
- (unsigned long long)triggerScene;
- (id)trackScene;
- (void)didClickOpen;
- (void)didClickReject;
- (void)trackAlertEvent:(id)arg0;
- (BOOL)enableGuide;
- (id)content;
- (id)title;

@end
