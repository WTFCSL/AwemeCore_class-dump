//
//     Generated by private class-dump
//

@class NSString;

@interface AWEOpenPlatformActionTrackerService : HTSService <AWEOpenPlatformActionTrackerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateParams:(id)arg0 withUniqueID:(id)arg1;
+ (void)uploadLocalTrackerWithUniqueID:(id)arg0;
+ (void)tryUploadAllLocalTracker;
+ (void)createLocalTrackerWithName:(id)arg0 withUniqueID:(id)arg1;
+ (void)updateStage:(id)arg0 withUniqueID:(id)arg1;

@end
