//
//     Generated by private class-dump
//

@class IESLiveGCDTimer, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveAnchorRoomFaceCountHandler : NSObject {
    BOOL _isGroupLive;
    long long _averageFaceCount;
    NSObject<OS_dispatch_queue> *_recordQueue;
    IESLiveGCDTimer *_groupLiveTimer;
    long long _lastFaceCount;
    long long _groupLiveRepeatCount;
    id /* block */ _statisticCompletion;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordQueue;
@property (retain, nonatomic) IESLiveGCDTimer *groupLiveTimer;
@property (nonatomic) long long lastFaceCount;
@property (nonatomic) long long averageFaceCount;
@property (nonatomic) BOOL isGroupLive;
@property (nonatomic) long long groupLiveRepeatCount;
@property (copy, nonatomic) id /* block */ statisticCompletion;

- (long long)getCurrentFaceCount;
- (void)setStatisticCompletion:(id /* block */)arg0;
- (id)groupLiveTimer;
- (void)setGroupLiveTimer:(id)arg0;
- (void)judgeIsGroupLive;
- (long long)lastFaceCount;
- (long long)groupLiveRepeatCount;
- (void)setGroupLiveRepeatCount:(long long)arg0;
- (long long)averageFaceCount;
- (void)setAverageFaceCount:(long long)arg0;
- (void)setIsGroupLive:(BOOL)arg0;
- (id /* block */)statisticCompletion;
- (void)setLastFaceCount:(long long)arg0;
- (void)startGroupLiveStatisticWithCompletion:(id /* block */)arg0;
- (BOOL)isGroupLive;
- (void).cxx_destruct;
- (id)initWithQueue:(id)arg0;
- (void)destroy;
- (id)recordQueue;
- (void)setRecordQueue:(id)arg0;

@end
