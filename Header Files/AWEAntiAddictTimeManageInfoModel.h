//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAntiAddictTimeManageInfoModel : MTLModel <MTLJSONSerializing> {
    long long _remindToRest;
    long long _remindToSleep;
    long long _addictRemindState;
    long long _delayRemindTime;
}

@property long long remindToRest;
@property long long remindToSleep;
@property long long addictRemindState;
@property long long delayRemindTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)remindToRest;
- (long long)delayRemindTime;
- (long long)addictRemindState;
- (void)setAddictRemindState:(long long)arg0;
- (void)setRemindToRest:(long long)arg0;
- (void)setRemindToSleep:(long long)arg0;
- (long long)remindToSleep;
- (void)setDelayRemindTime:(long long)arg0;
- (void)private_setAddictRemindState:(long long)arg0;
- (void)private_setRemindToRest:(long long)arg0;
- (void)private_setRemindToSleep:(long long)arg0;
- (void)private_setDelayRemindTime:(long long)arg0;
- (id)initWithRemindToRest:(long long)arg0 remindToSleep:(long long)arg1 addictRemindState:(long long)arg2;

@end
