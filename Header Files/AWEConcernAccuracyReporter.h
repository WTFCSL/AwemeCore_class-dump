//
//     Generated by private class-dump
//

@class NSString;

@interface AWEConcernAccuracyReporter : NSObject <AWEConcernAccuracyReporterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackCountAccuracyWithParam:(id)arg0;
+ (void)trackRemindAccuracyWithParam:(id)arg0;
+ (void)trackYellowDotAccuracyWithParam:(id)arg0;
+ (void)trackAccuracyWithFollowStatus:(long long)arg0 previousFollowStatus:(long long)arg1 enterFrom:(id)arg2;

@end
