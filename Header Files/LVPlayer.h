//
//     Generated by private class-dump
//

@class LVPlayerItem;
@protocol LVPlayerDelegate;

@interface LVPlayer : UIView {
    struct shared_ptr<cut::LVVEAdapter> { struct LVVEAdapter *__ptr_; struct __shared_weak_count *__cntrl_; } m_adapter;
    BOOL _autoPlayWhenAppBecomeActive;
    BOOL _autoRepeatPlay;
    BOOL _isFirstRenderEventTriggered;
    id<LVPlayerDelegate> _delegate;
    LVPlayerItem *_playItem;
    id _notificationToken;
    double _startTime;
    double _pauseTime;
    struct CGSize { double width; double height; } _canvasSize;
}

@property (retain, nonatomic) LVPlayerItem *playItem;
@property (retain, nonatomic) id notificationToken;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) double startTime;
@property (nonatomic) double pauseTime;
@property (nonatomic) BOOL isFirstRenderEventTriggered;
@property (weak, nonatomic) id<LVPlayerDelegate> delegate;
@property (nonatomic) BOOL autoPlayWhenAppBecomeActive;
@property (nonatomic) BOOL autoRepeatPlay;

- (id)playItem;
- (void)setAutoRepeatPlay:(BOOL)arg0;
- (BOOL)autoRepeatPlay;
- (void)setAutoPlayWhenAppBecomeActive:(BOOL)arg0;
- (BOOL)autoPlayWhenAppBecomeActive;
- (double)lastPlayFrameRate;
- (void)setPlayItem:(id)arg0;
- (void)setCallbackForPlayer;
- (id)vePlayer;
- (BOOL)isFirstRenderEventTriggered;
- (void)setIsFirstRenderEventTriggered:(BOOL)arg0;
- (void)seekToTimeAndRender:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 seekMode:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 playItem:(id)arg1;
- (void)reloadCanvasSize;
- (void)playWithinTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg0;
- (void)immediatelyPlayWithinTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg0;
- (id)getFirstRenderTimeDic;
- (void)didEnterBackground;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setCanvasSize:(struct CGSize { double x0; double x1; })arg0;
- (double)startTime;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
- (BOOL)isPlaying;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (struct shared_ptr<cut::LVVEAdapter> { struct LVVEAdapter *x0; struct __shared_weak_count *x1; })adapter;
- (struct CGSize { double x0; double x1; })canvasSize;
- (id).cxx_construct;
- (double)pauseTime;
- (id)notificationToken;
- (void)setNotificationToken:(id)arg0;
- (void)setPauseTime:(double)arg0;
- (void)addObservers;
- (void)removeObservers;

@end