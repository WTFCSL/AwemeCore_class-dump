//
//     Generated by private class-dump
//

@class NSString, NSNumber, AWEMVChannelCardPerformanceMonitor;

@interface AWEMVChannelPerformanceMonitor : NSObject {
    BOOL _isFeedCache;
    BOOL _hasReported;
    long long _column;
    AWEMVChannelCardPerformanceMonitor *_card;
    double _loadBeginTime;
    double _totalDuration;
    double _uiBeginTime;
    double _uiBeginDuration;
    double _uiDuration;
    double _netBeginTime;
    double _netBeginDuration;
    double _netDuration;
    double _renderBeginTime;
    double _renderBeginDuration;
    double _renderDuration;
    double _playerBeginTime;
    double _playerBeginDuration;
    double _playerDuration;
    NSString *_provider;
    NSNumber *_feedCount;
    unsigned long long _loadResult;
}

@property (nonatomic) double loadBeginTime;
@property (nonatomic) double totalDuration;
@property (nonatomic) double uiBeginTime;
@property (nonatomic) double uiBeginDuration;
@property (nonatomic) double uiDuration;
@property (nonatomic) double netBeginTime;
@property (nonatomic) double netBeginDuration;
@property (nonatomic) double netDuration;
@property (nonatomic) double renderBeginTime;
@property (nonatomic) double renderBeginDuration;
@property (nonatomic) double renderDuration;
@property (nonatomic) double playerBeginTime;
@property (nonatomic) double playerBeginDuration;
@property (nonatomic) double playerDuration;
@property (copy, nonatomic) NSString *provider;
@property (retain, nonatomic) NSNumber *feedCount;
@property (nonatomic) BOOL hasReported;
@property (nonatomic) unsigned long long loadResult;
@property (nonatomic) BOOL isFeedCache;
@property (nonatomic) long long column;
@property (retain, nonatomic) AWEMVChannelCardPerformanceMonitor *card;

- (id)feedCount;
- (void)setLoadResult:(unsigned long long)arg0;
- (unsigned long long)loadResult;
- (void)startPlay;
- (void)startRender;
- (double)playerDuration;
- (void)setFeedCount:(id)arg0;
- (void)finishPlay;
- (void)setUiBeginTime:(double)arg0;
- (void)setNetBeginTime:(double)arg0;
- (double)uiBeginTime;
- (double)netBeginTime;
- (void)setLoadBeginTime:(double)arg0;
- (double)loadBeginTime;
- (void)setRenderDuration:(double)arg0;
- (void)setUiDuration:(double)arg0;
- (void)setNetBeginDuration:(double)arg0;
- (void)finishNetworkWithResponseModel:(id)arg0 error:(id)arg1;
- (double)netDuration;
- (void)setNetDuration:(double)arg0;
- (double)renderBeginTime;
- (void)setRenderBeginDuration:(double)arg0;
- (double)playerBeginDuration;
- (void)setPlayerBeginTime:(double)arg0;
- (void)setPlayerBeginDuration:(double)arg0;
- (double)playerBeginTime;
- (void)setPlayerDuration:(double)arg0;
- (void)trackPageMonitor;
- (double)uiBeginDuration;
- (double)uiDuration;
- (double)netBeginDuration;
- (BOOL)isFeedCache;
- (double)renderBeginDuration;
- (void)startLoadUI;
- (void)finishLoadUI;
- (void)startNetwork;
- (void)finishNetwork;
- (void)finishRender;
- (void)setIsFeedCache:(BOOL)arg0;
- (void)setUiBeginDuration:(double)arg0;
- (double)totalDuration;
- (void)setProvider:(id)arg0;
- (id)provider;
- (void).cxx_destruct;
- (void)setCard:(id)arg0;
- (void)resetData;
- (double)currentDate;
- (id)card;
- (long long)column;
- (void)setTotalDuration:(double)arg0;
- (double)renderDuration;
- (void)viewDidDisappear;
- (BOOL)hasReported;
- (void)setHasReported:(BOOL)arg0;
- (void)setRenderBeginTime:(double)arg0;
- (void)setColumn:(long long)arg0;

@end
