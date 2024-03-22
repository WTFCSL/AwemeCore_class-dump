//
//     Generated by private class-dump
//

@class NSString;

@interface AWELaunchMetric : NSObject {
    long long _type;
}

@property long long type;
@property (readonly) double startTimestampWithoutSystem;
@property (readonly) long long backgroundType;
@property (readonly) double startTimestamp;
@property (readonly) double endTimestamp;
@property (readonly) double totalDuration;
@property (readonly) double systemInitDuration;
@property (readonly) double loadDuration;
@property (readonly) double initializerDuration;
@property (readonly) double mainDuration;
@property (readonly) double finishLaunchDuration;
@property (readonly) double foregroundDuration;
@property (readonly) double uiRenderDuration;
@property (readonly, copy) NSString *mainThreadScheduleStatus;

+ (id)currentMetric;

- (double)startTimestampWithoutSystem;
- (double)mainDuration;
- (double)finishLaunchDuration;
- (double)uiRenderDuration;
- (double)initializerDuration;
- (double)systemInitDuration;
- (id)mainThreadScheduleStatus;
- (void)markBackgroundLaunchWithTypeTimes;
- (void)markPerformFetchTimes;
- (BOOL)isBackgroundLaunch;
- (void)markMainThreadScheduleStatus:(long long)arg0;
- (double)startTimestamp;
- (double)totalDuration;
- (double)endTimestamp;
- (long long)backgroundType;
- (long long)type;
- (void)setType:(long long)arg0;
- (double)loadDuration;
- (double)foregroundDuration;

@end
