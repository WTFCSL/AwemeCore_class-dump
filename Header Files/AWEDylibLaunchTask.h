//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDylibLaunchTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isLaunchStage;
+ (void)markLaunchFinish;
+ (void)execute;

@end
