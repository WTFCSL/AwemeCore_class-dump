//
//     Generated by private class-dump
//

@class NSString;

@interface AWEConcernInnerPushManager : NSObject <AWEPushSBCProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterStaticLoad;
+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;

- (void)showUpdatePush:(id)arg0;
- (BOOL)pushSBCCouldHandleWithMsg:(id)arg0 payload:(id)arg1 businessType:(id)arg2;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;

@end