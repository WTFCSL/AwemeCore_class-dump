//
//     Generated by private class-dump
//

@class NSString;

@interface AWEECMallGurdUpdateListener : NSObject <IESGurdEventDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;
+ (id)mallLynxChannel;
+ (void)startGurdMallChannelUpdateListen;

- (void)gurdDidFinishApplyingPackageForAccessKey:(id)arg0 channel:(id)arg1 succeed:(BOOL)arg2 error:(id)arg3;
- (void)showDebugToast:(id)arg0;

@end