//
//     Generated by private class-dump
//

@class IESLiveSchemeRedirectStorage, IESLiveSchemeRedirectDownloadTask, NSDate, NSObject, NSNumber;
@protocol OS_dispatch_source;

@interface IESLiveSchemeRedirectManager : NSObject {
    BOOL _enableRomaSdkPoll;
    BOOL _timerHasResume;
    NSNumber *_romaSdkPollInternal;
    IESLiveSchemeRedirectDownloadTask *_task;
    IESLiveSchemeRedirectStorage *_storage;
    NSDate *_lastUpdateTime;
    NSObject<OS_dispatch_source> *_timer;
    NSNumber *_currentRomaSdkPollInternal;
}

@property (retain, nonatomic) IESLiveSchemeRedirectDownloadTask *task;
@property (retain, nonatomic) IESLiveSchemeRedirectStorage *storage;
@property (retain, nonatomic) NSDate *lastUpdateTime;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) BOOL timerHasResume;
@property (retain, nonatomic) NSNumber *currentRomaSdkPollInternal;
@property (nonatomic) BOOL enableRomaSdkPoll;
@property (retain, nonatomic) NSNumber *romaSdkPollInternal;

+ (id)shareManager;

- (void)initTimer;
- (id)getComponentsWithURLString:(id)arg0;
- (void)resolveRedirectSchemeWithOriginalScheme:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)enableRomaSdkPoll;
- (id)romaSdkPollInternal;
- (void)forceSyncAndResolveRedirectSchemeWith:(id)arg0 completion:(id /* block */)arg1;
- (void)resolveRedirectSchemeWith:(id)arg0 completion:(id /* block */)arg1;
- (void)pollFetchSchemeRedirectConfig;
- (void)fetchRedirectConfig:(id /* block */)arg0;
- (void)setCurrentRomaSdkPollInternal:(id)arg0;
- (BOOL)timerHasResume;
- (void)setTimerHasResume:(BOOL)arg0;
- (id)currentRomaSdkPollInternal;
- (void)resolveRedirectSchemeWith:(id)arg0 loopCount:(long long)arg1 completion:(id /* block */)arg2;
- (void)fetchRedirectConfigIfNeeded;
- (void)resolveRedirectSchemeWithOriginalScheme:(id)arg0 loopCount:(long long)arg1 completion:(id /* block */)arg2;
- (id)getRedirectConfig;
- (void)setEnableRomaSdkPoll:(BOOL)arg0;
- (void)setRomaSdkPollInternal:(id)arg0;
- (void)setStorage:(id)arg0;
- (id)timer;
- (id)lastUpdateTime;
- (id)init;
- (void).cxx_destruct;
- (id)storage;
- (void)setTimer:(id)arg0;
- (void)setLastUpdateTime:(id)arg0;
- (void)setTask:(id)arg0;
- (void)dealloc;
- (id)task;

@end
