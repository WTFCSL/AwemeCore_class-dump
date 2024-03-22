//
//     Generated by private class-dump
//

@class NSString;

@interface AWEEcommerceInAppPushManager : NSObject <AWEPushSBCProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)pushSBCCouldHandleWithMsg:(id)arg0 payload:(id)arg1 businessType:(id)arg2;
- (void)p_showPushIfNeeded:(id)arg0;
- (BOOL)p_canRequestOrShowEcommerceInappPush;
- (BOOL)p_canShowEcommerceInappPush;
- (void)p_delayToShowPush:(id)arg0;
- (void)p_showPush:(id)arg0;
- (BOOL)isPigeonKefuPush:(id)arg0;
- (id)currentTopPage;
- (id)init;
- (void)dismiss;

@end