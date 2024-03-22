//
//     Generated by private class-dump
//

@class IESLivePublicScreenRefreshConfig, IESLiveGCDTimer;

@interface IESLivePublicScreenRefreshTimer : NSObject {
    BOOL _refreshTimerRunning;
    IESLiveGCDTimer *_timer;
    id /* block */ _refreshBlock;
    IESLivePublicScreenRefreshConfig *_refreshConfig;
}

@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (nonatomic) BOOL refreshTimerRunning;
@property (retain, nonatomic) IESLivePublicScreenRefreshConfig *refreshConfig;

- (id)refreshConfig;
- (void)setRefreshConfig:(id)arg0;
- (void)invalidateRefreshTimer;
- (void)setRefreshTimerRunning:(BOOL)arg0;
- (BOOL)refreshTimerRunning;
- (void)startNodesCommit;
- (void)stopNodesCommit;
- (void)setupRefreshTimer;
- (id)initWithRefreshBlock:(id /* block */)arg0 config:(id)arg1;
- (void)updateRefreshTimerWithConfig:(id)arg0;
- (void)resetRefreshTimer;
- (void)executeRefreshBlockImmediately;
- (id)timer;
- (void).cxx_destruct;
- (void)setTimer:(id)arg0;
- (id)currentConfig;
- (void)dealloc;
- (void)setRefreshBlock:(id /* block */)arg0;
- (id /* block */)refreshBlock;

@end