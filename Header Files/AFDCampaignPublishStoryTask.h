//
//     Generated by private class-dump
//

@class NSString;

@interface AFDCampaignPublishStoryTask : AFDCampaignBaseTask <AWEPublishTaskMessage> {
    BOOL _hasShownPrivacyToast;
    long long _activityVideoType;
}

@property (nonatomic) long long activityVideoType;
@property (nonatomic) BOOL hasShownPrivacyToast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)topic;
+ (BOOL)persistent;

- (void)task:(id)arg0 didEndWithResult:(long long)arg1 error:(id)arg2;
- (void)setActivityVideoType:(long long)arg0;
- (long long)activityVideoType;
- (id)persistentParams;
- (void)receiveEvent:(id)arg0 params:(id)arg1;
- (BOOL)hasShownPrivacyToast;
- (void)setHasShownPrivacyToast:(BOOL)arg0;
- (id)initWithContext:(id)arg0;
- (void)dealloc;

@end