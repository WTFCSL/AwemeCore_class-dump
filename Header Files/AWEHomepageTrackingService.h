//
//     Generated by private class-dump
//

@class NSString;

@interface AWEHomepageTrackingService : HTSService <AWEHomepageTrackingService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)arg0 withParams:(id)arg1;
- (void)trackEvent:(id)arg0 bizParams:(id)arg1 hpParams:(id)arg2;
- (id)mergeWithBizParams:(id)arg0 hpParams:(id)arg1;
- (id)p_mergeWithBizParams:(id)arg0 hpParams:(id)arg1;

@end