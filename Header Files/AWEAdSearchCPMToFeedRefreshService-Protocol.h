//
//     Generated by private class-dump
//

@class NSDictionary;

@protocol AWEAdSearchCPMToFeedRefreshService <HTSService>

@property (copy, nonatomic) NSDictionary *awemeInfo;

- (id)awemeInfo;
- (void)setAwemeInfo:(id)arg0;
- (void)registerSupportSearchSource:(id)arg0 scene:(long long)arg1;
- (void)trackWithParams:(id)arg0 scene:(long long)arg1;
- (BOOL)shouldTrackEvent:(id)arg0 scene:(long long)arg1;
- (void)trackWithParamsInFlow:(id)arg0;
- (void)reset;

@end
