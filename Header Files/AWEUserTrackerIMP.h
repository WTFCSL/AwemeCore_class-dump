//
//     Generated by private class-dump
//

@class NSString;

@interface AWEUserTrackerIMP : NSObject <AWEUserTracker>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)settingPageForLoginResultTracking;
- (void)p_trackLoginResult:(BOOL)arg0 isCancel:(BOOL)arg1 context:(id)arg2 error:(id)arg3;
- (void)trackOAuthResult:(BOOL)arg0 platform:(unsigned long long)arg1 error:(id)arg2;
- (void)trackLoginResult:(BOOL)arg0 isCancel:(BOOL)arg1 context:(id)arg2 error:(id)arg3;

@end
