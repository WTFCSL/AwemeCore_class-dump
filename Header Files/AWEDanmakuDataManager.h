//
//     Generated by private class-dump
//

@class NSObject, NSString, NSTimer, AWEAwemeModel, NSMutableArray, AWEVideoPlayDanmakuService;
@protocol OS_dispatch_queue, AWEDanmakuDataManagerDelegate;

@interface AWEDanmakuDataManager : NSObject {
    BOOL _isFirstTimeFetchData;
    BOOL _shouldRequestDowngrade;
    id<AWEDanmakuDataManagerDelegate> _delegate;
    double _totalTimeInterval;
    AWEAwemeModel *_model;
    AWEVideoPlayDanmakuService *_danmakuDataService;
    double _beginTimeInterval;
    double _endTimeInterval;
    long long _errorTime;
    long long _errorTimeCount;
    NSString *_itemID;
    NSString *_userId;
    NSTimer *_timer;
    long long _danmakuScene;
    long long _sceneType;
    NSMutableArray *_danmakuResponseArray;
    NSObject<OS_dispatch_queue> *_danmakuDataHandleQueue;
}

@property (retain, nonatomic) AWEVideoPlayDanmakuService *danmakuDataService;
@property (nonatomic) double beginTimeInterval;
@property (nonatomic) double endTimeInterval;
@property (nonatomic) long long errorTime;
@property (nonatomic) long long errorTimeCount;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *userId;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL isFirstTimeFetchData;
@property (nonatomic) long long danmakuScene;
@property (nonatomic) long long sceneType;
@property (retain, nonatomic) NSMutableArray *danmakuResponseArray;
@property (nonatomic) BOOL shouldRequestDowngrade;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *danmakuDataHandleQueue;
@property (weak, nonatomic) id<AWEDanmakuDataManagerDelegate> delegate;
@property (nonatomic) double totalTimeInterval;
@property (retain, nonatomic) AWEAwemeModel *model;

- (void)setErrorTime:(long long)arg0;
- (long long)errorTime;
- (double)totalTimeInterval;
- (void)setTotalTimeInterval:(double)arg0;
- (id)getRequestLogID:(id)arg0;
- (void)setDanmakuScene:(long long)arg0;
- (id)initWithScene:(long long)arg0 sceneType:(long long)arg1;
- (void)sendWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchDanmakuWithItemId:(id)arg0 danmakuIds:(id)arg1 completion:(id /* block */)arg2;
- (void)setDanmakuDataHandleQueue:(id)arg0;
- (id)danmakuResponseArray;
- (id)danmakuDataService;
- (void)setShouldRequestDowngrade:(BOOL)arg0;
- (BOOL)shouldRequestNewDanmakuData;
- (void)requestDanmaku;
- (BOOL)shouldRequestDowngrade;
- (long long)danmakuScene;
- (double)beginTimeInterval;
- (long long)errorTimeCount;
- (void)setErrorTimeCount:(long long)arg0;
- (void)setDanmakuResponseArray:(id)arg0;
- (void)setBeginTimeInterval:(double)arg0;
- (BOOL)isFirstTimeFetchData;
- (id)findTargetDanmakuDatasInCacheWithStartTime:(double)arg0;
- (void)addDanmakuDatasToPlayer:(id)arg0;
- (void)setIsFirstTimeFetchData:(BOOL)arg0;
- (id)danmakuDataHandleQueue;
- (void)handleRequestDanmakuDataWithModel:(id)arg0;
- (void)removeCacheModelWithFromTime:(double)arg0 toTime:(double)arg1;
- (void)cacheByIdModel:(id)arg0 itemId:(id)arg1;
- (void)cacheDanmakuResponseDataIfNeed:(id)arg0;
- (void)clearCacheDanmakuDatas;
- (void)seek;
- (void)setDanmakuDataService:(id)arg0;
- (id)timer;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)itemID;
- (id)userId;
- (void)setItemID:(id)arg0;
- (id)delegate;
- (void)setTimer:(id)arg0;
- (void)start;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)pause;
- (void)reset;
- (void)setUserId:(id)arg0;
- (void)setupTimer;
- (long long)sceneType;
- (void)setSceneType:(long long)arg0;
- (void)updateModel:(id)arg0;
- (double)endTimeInterval;
- (void)setEndTimeInterval:(double)arg0;

@end