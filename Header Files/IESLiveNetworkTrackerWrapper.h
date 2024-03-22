//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveNetworkTrackerWrapper : NSObject <IESLiveNetworkTracker> {
    NSMutableDictionary *_trackBasicInfo;
    NSMutableDictionary *_trackNetworkException;
    long long _sumException;
    NSObject<OS_dispatch_queue> *_trackQueue;
}

@property (retain, nonatomic) NSMutableDictionary *trackBasicInfo;
@property (retain, nonatomic) NSMutableDictionary *trackNetworkException;
@property (nonatomic) long long sumException;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *trackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackQueue;
- (void)trackNetworkBaseInfo:(id)arg0;
- (void)trackNetworkException:(id)arg0;
- (id)networkExceptionWithLimit:(long long)arg0;
- (id)topNetworkTrackFrequency:(long long)arg0;
- (id)topNetworkTrackSize:(long long)arg0;
- (long long)networkExceptionCount;
- (void)stopNetworkTrack;
- (void)setTrackQueue:(id)arg0;
- (void)setTrackBasicInfo:(id)arg0;
- (void)setTrackNetworkException:(id)arg0;
- (void)setSumException:(long long)arg0;
- (id)trackBasicInfo;
- (id)topNetworkTrackField:(id)arg0 top:(long long)arg1;
- (id)configAppStateKey;
- (id)trackNetworkException;
- (long long)sumException;
- (id)init;
- (void).cxx_destruct;

@end