//
//     Generated by private class-dump
//

@class NSString;

@interface AWEUGActivityTracker : HTSService <AWEUGActivityTrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackPendantShowCheck:(id)arg0 result:(long long)arg1;
+ (void)trackFeedPendantSync:(id)arg0;
+ (void)trackPendantDownload:(id)arg0 code:(long long)arg1;

@end
