//
//     Generated by private class-dump
//

@class NSString;

@interface AWETrackerServiceUserMessageListener : NSObject <AWEUserMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)dataIRISSetupUserIdentifiers;
+ (id)sharedInstance;

- (void)didFinishLogin;
- (void)didFinishLogout;

@end
