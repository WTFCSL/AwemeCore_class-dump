//
//     Generated by private class-dump
//

@class NSString;

@interface BDXBridgeGeckoEventManager : NSObject <IESGurdEventDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)endNotifier;
+ (void)startNotifier;
+ (id)sharedManager;

- (void)gurdDidFinishApplyingPackageForAccessKey:(id)arg0 channel:(id)arg1 succeed:(BOOL)arg2 error:(id)arg3;
- (void)sendGeckoUpdatedWithEventChannel:(id)arg0 version:(id)arg1;

@end
