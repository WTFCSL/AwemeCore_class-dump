//
//     Generated by private class-dump
//

@class NSString, DIRSContext;

@interface DIRSTTInstallPlugin : DIRSBasicModule <IRISContextObserver, IRISModuleGlobal>

@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (id)sharedInstance;
+ (id)moduleVersion;

- (void)_observerTTInstall;
- (void)_initTTInstall:(id)arg0;
- (void)onRegisteredNotification:(id)arg0;
- (void)onFinishInitialization:(id)arg0;
- (void)commonInit;

@end
