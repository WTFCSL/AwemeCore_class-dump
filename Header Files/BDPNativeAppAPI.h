//
//     Generated by private class-dump
//

@interface BDPNativeAppAPI : NSObject

+ (void)registerAllAPIs;
+ (void)registerAPIName:(id)arg0 isSynchronize:(BOOL)arg1 isOnMainThread:(BOOL)arg2 APIClass:(Class)arg3;
+ (void)bootstrapLaunch;
+ (void)registerPreloadAPI;
+ (void)registerNoCallbackAPIName:(id)arg0 isSynchronize:(BOOL)arg1 isOnMainThread:(BOOL)arg2 APIClass:(Class)arg3;
+ (void)registerExeCurThreadAPIName:(id)arg0 isSynchronize:(BOOL)arg1 APIClass:(Class)arg2;

@end
