//
//     Generated by private class-dump
//

@class NSString;

@interface HTSCompileTimeMessageManager : NSObject <BCAABundleListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)bundleDidLoaded:(id)arg0 machoHeader:(struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)arg1 fromBundle:(id)arg2 enterTag:(id)arg3 cost:(double)arg4;
- (id)init;

@end
