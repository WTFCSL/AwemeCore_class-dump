//
//     Generated by private class-dump
//

@class NSString;

@interface AWELightLocationLaunchTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestLightLocationWithAccuracy:(long long)arg0 isNotCheckAuthorizationStatus:(BOOL)arg1;
+ (void)execute;

@end
