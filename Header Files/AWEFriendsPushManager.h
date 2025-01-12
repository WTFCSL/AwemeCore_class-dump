//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFriendsPushManager : NSObject <AWEMotionItemConfigProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)motionItemConfig;
- (BOOL)enableShake;
- (double)shakeTimeInterval;
- (long long)motionLevel;
- (void)didReceiveShakeEvent:(id)arg0 error:(id)arg1 from:(id)arg2;
- (BOOL)isInNearby;
- (void)showRadarViewWithExtraParams:(id)arg0;
- (void)showPush:(id)arg0;
- (BOOL)isInActivity;
- (BOOL)isInShakeAD;
- (double)radarShakeThreshold;
- (long long)radarShakeMatchCount;
- (double)radarShakeTimeInterval;
- (id)init;
- (void)dealloc;

@end
