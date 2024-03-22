//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPlayVideoBaseTracker : NSObject <AWEPlayVideoTrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)trackKeyForType:(long long)arg0;

- (void)trackEvent:(id)arg0 params:(id)arg1;
- (id)paramsForVideoPlayInPlayer:(id)arg0 paramsModel:(id)arg1;
- (id)paramsForVideoPlayTimeInPlayer:(id)arg0 paramsModel:(id)arg1;
- (id)paramsForVideoPlayPauseInPlayer:(id)arg0 paramsModel:(id)arg1;
- (id)paramsForVideoPlayFinishInPlayer:(id)arg0 paramsModel:(id)arg1;
- (id)paramsForTrackerIn:(id)arg0 type:(long long)arg1 paramsModel:(id)arg2;
- (void)didTrackForTrackerInPlayer:(id)arg0 type:(long long)arg1 paramsModel:(id)arg2 trackParams:(id)arg3;
- (id)paramsForVideoPauseTimeInPlayer:(id)arg0 paramsModel:(id)arg1;

@end
