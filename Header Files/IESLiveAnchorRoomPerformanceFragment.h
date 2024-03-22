//
//     Generated by private class-dump
//

@class IESLiveAnchorRoomFaceCountHandler, IESLiveAnchorRoomTemperatureHandler, IESLiveAnchorRoomMemoryHandler, IESLiveGCDTimer, NSObject, NSString;
@protocol IESLivePerfSampler, OS_dispatch_queue;

@interface IESLiveAnchorRoomPerformanceFragment : IESLiveRoomComponent <IESLiveAnchorRoomPerformanceService, HTSLiveAnchorActions, IESLiveAnchorRoomStatusChangeEvents> {
    BOOL _isEnableStatisticFaceCount;
    id<IESLivePerfSampler> _perfSampler;
    IESLiveAnchorRoomMemoryHandler *_memoryHandler;
    IESLiveAnchorRoomTemperatureHandler *_temperatureHandler;
    IESLiveAnchorRoomFaceCountHandler *_faceCountHandler;
    IESLiveGCDTimer *_recordTimer;
    NSObject<OS_dispatch_queue> *_recordQueue;
}

@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (retain, nonatomic) IESLiveAnchorRoomMemoryHandler *memoryHandler;
@property (retain, nonatomic) IESLiveAnchorRoomTemperatureHandler *temperatureHandler;
@property (retain, nonatomic) IESLiveAnchorRoomFaceCountHandler *faceCountHandler;
@property (retain, nonatomic) IESLiveGCDTimer *recordTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordQueue;
@property (nonatomic) BOOL isEnableStatisticFaceCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (void)stopRecord;
- (void)activeRecord;
- (void)stopLive;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentUnmount;
- (id)perfSampler;
- (void)setPerfSampler:(id)arg0;
- (void)stopAnchorLive;
- (long long)currentMemoryState;
- (long long)currentTemperatureState;
- (void)doRecord;
- (void)setRecordTimer:(id)arg0;
- (void)setMemoryHandler:(id)arg0;
- (id)memoryHandler;
- (void)setTemperatureHandler:(id)arg0;
- (id)temperatureHandler;
- (void)setIsEnableStatisticFaceCount:(BOOL)arg0;
- (BOOL)isEnableStatisticFaceCount;
- (void)setFaceCountHandler:(id)arg0;
- (id)faceCountHandler;
- (void)trackGroupLiveState;
- (void)trackMemoryState;
- (void)trackTemperatureState;
- (void)statisticCurrentRoomFaceCount:(id)arg0;
- (id)recordTimer;
- (void).cxx_destruct;
- (id)recordQueue;
- (void)setRecordQueue:(id)arg0;

@end
