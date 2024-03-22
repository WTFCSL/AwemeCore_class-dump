//
//     Generated by private class-dump
//

@class NSObject;
@protocol OS_dispatch_source;

@interface LynxSettingsDownloader : NSObject {
    NSObject<OS_dispatch_source> *_scheduleTimer;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *scheduleTimer;

+ (id)getSettingsQueue;
+ (double)timeForNextFetch;
+ (void)reportFetchEventWithUrl:(id)arg0 source:(long long)arg1 data:(id)arg2 error:(id)arg3;
+ (id)sharedInstance;

- (void)scheduleSettingsFetch;
- (BOOL)shouldFetchImmediately;
- (void)syncSettings:(BOOL)arg0 source:(long long)arg1;
- (void)schedule:(double)arg0 shouldRetry:(BOOL)arg1;
- (void)updateResponseData:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setScheduleTimer:(id)arg0;
- (id)scheduleTimer;

@end
