//
//     Generated by private class-dump
//

@interface PGLAppEnvironment : NSObject

+ (BOOL)isJailBroken;
+ (id)getBundleId;
+ (BOOL)hasJailBroken;
+ (BOOL)isFromAppStore;
+ (BOOL)isFromTestFlight;
+ (id)checkEnv:(id)arg0;
+ (BOOL)isAppStoreReceiptSandbox;
+ (BOOL)hasEmbeddedMobileProvision;
+ (id)fetchAppEnvironment;
+ (void)updateAppEnvironment;
+ (id)checkEvilFiles:(id)arg0 suffix:(id)arg1;
+ (id)getDeviceName;

@end