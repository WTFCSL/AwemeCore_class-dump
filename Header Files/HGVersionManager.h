//
//     Generated by private class-dump
//

@class NSString;

@interface HGVersionManager : NSProxy <HGBaseVersionManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (BOOL)isUseSyncVersionManager;
+ (void)forwardInvocation:(id)arg0;
+ (id)methodSignatureForSelector:(SEL)arg0;

@end
