//
//     Generated by private class-dump
//

@interface TTVideoEnginePreloader : NSObject

+ (void)notifyPreload:(id)arg0 info:(id)arg1;
+ (id)classSet;
+ (BOOL)shouldPreload:(id)arg0;
+ (void)engine:(id)arg0 prelaod:(id)arg1;
+ (void)engine:(id)arg0 cancelAllPrelaod:(id)arg1;
+ (BOOL)hasRegistClass;
+ (void)notifyPreloadCancel:(id)arg0 info:(id)arg1;
+ (void)engine:(id)arg0 playInfo:(id)arg1;
+ (BOOL)registerClass:(Class)arg0;
+ (void)unregisterClass:(Class)arg0;

@end
