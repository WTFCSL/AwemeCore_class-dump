//
//     Generated by private class-dump
//

@class NSString;

@interface HGPluginALogImpl : NSObject <HGLogPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (void)hg_logWithModel:(id)arg0;

@end