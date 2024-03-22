//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSDictionary, IESECNetPerfMetrics, NSNumber;

@interface IESECGoodsDetailQualityInfo : NSObject {
    BOOL _usingCache;
    BOOL _usingChunk;
    BOOL _chunkBackup;
    BOOL _chunkFirstSuccess;
    BOOL _chunkSecondSuccess;
    BOOL _onlyOneChunk;
    BOOL _didTracked;
    NSMutableDictionary *_category;
    NSDictionary *_serverMetrics;
    IESECNetPerfMetrics *_netPerfMetrics;
    NSNumber *_lastDistance;
    double _startTime;
    NSMutableDictionary *_stageStartTimestampDict;
    NSMutableDictionary *_stageEndTimestampDict;
}

@property (nonatomic) double startTime;
@property (retain, nonatomic) NSMutableDictionary *stageStartTimestampDict;
@property (retain, nonatomic) NSMutableDictionary *stageEndTimestampDict;
@property (nonatomic) BOOL didTracked;
@property (retain, nonatomic) NSMutableDictionary *category;
@property (retain, nonatomic) NSDictionary *serverMetrics;
@property (retain, nonatomic) IESECNetPerfMetrics *netPerfMetrics;
@property (nonatomic) BOOL usingCache;
@property (nonatomic) BOOL usingChunk;
@property (nonatomic) BOOL chunkBackup;
@property (nonatomic) BOOL chunkFirstSuccess;
@property (nonatomic) BOOL chunkSecondSuccess;
@property (nonatomic) BOOL onlyOneChunk;
@property (retain, nonatomic) NSNumber *lastDistance;
@property (readonly, nonatomic) BOOL canTrackNow;

- (BOOL)isViewDidLoad;
- (BOOL)usingCache;
- (void)setUsingCache:(BOOL)arg0;
- (double)apiRequestDuration;
- (BOOL)isViewWillAppear;
- (id)netPerfMetrics;
- (void)stageEndsFor:(id)arg0;
- (void)stageStartsFor:(id)arg0;
- (BOOL)canTrackNow;
- (id)lastDistance;
- (BOOL)usingChunk;
- (BOOL)chunkBackup;
- (BOOL)chunkSecondSuccess;
- (void)setServerMetrics:(id)arg0;
- (void)startStageTrack;
- (void)setLastDistance:(id)arg0;
- (void)setNetPerfMetrics:(id)arg0;
- (void)setUsingChunk:(BOOL)arg0;
- (void)setChunkBackup:(BOOL)arg0;
- (void)setChunkFirstSuccess:(BOOL)arg0;
- (void)setOnlyOneChunk:(BOOL)arg0;
- (void)setChunkSecondSuccess:(BOOL)arg0;
- (BOOL)shouldTrackStage:(id)arg0;
- (id)stageStartTimestampDict;
- (id)stageEndTimestampDict;
- (BOOL)didTracked;
- (BOOL)isRendEnded;
- (id)netMetrics;
- (id)localMetrics;
- (double)pageTotalDuration;
- (BOOL)chunkFirstSuccess;
- (BOOL)onlyOneChunk;
- (void)setStageStartTimestampDict:(id)arg0;
- (void)setStageEndTimestampDict:(id)arg0;
- (void)setDidTracked:(BOOL)arg0;
- (id)init;
- (id)category;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (void)setCategory:(id)arg0;
- (double)endTime;
- (double)startTime;
- (id)serverMetrics;
- (double)pageRenderDuration;

@end