//
//     Generated by private class-dump
//

@interface TMHook : NSObject

+ (id)stubbedClass;
+ (id)stubbedClassAPIs;
+ (id)stubbedInstanceAPIs;
+ (BOOL)entryEnable;
+ (BOOL)isEntryDefaultEnable;
+ (id)stubbedAPIs;
+ (id)stubbedCAPIs;
+ (void)reportRequestPermission:(id)arg0 state:(long long)arg1 uuid:(id)arg2;
+ (BOOL)canReportRequestPermission;
+ (unsigned long long)storeType;
+ (id)entryType;
+ (void)preload;
+ (id)dataType;
+ (id)pipelineType;

- (BOOL)deferPreload;

@end
