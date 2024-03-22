//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, AWEAwemeBarrageAwemeView, AWEAwemeModel, NSDictionary, NSMutableArray, NSTimer;

@interface AWEBarrageContainerView : UIView <AWEBarrageContainerViewProtocol> {
    BOOL _barrageTriggered;
    BOOL _isShortStyle;
    id /* block */ _isHitInContainerBlock;
    id /* block */ _barrageViewsUpdateBlock;
    id /* block */ _awemeBarrageUpdateBlock;
    id /* block */ _barrageViewDidAppear;
    long long _playState;
    long long _currentIndex;
    AWEAwemeBarrageAwemeView *_awemeBarrageView;
    AWEAwemeModel *_awemeModel;
    NSMutableDictionary *_barrageViewReusedPools;
    NSMutableArray *_barrageViews;
    NSDictionary *_barrageTypeClass;
    long long _loopTime;
    NSTimer *_timer;
}

@property (retain, nonatomic) AWEAwemeBarrageAwemeView *awemeBarrageView;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSMutableDictionary *barrageViewReusedPools;
@property (retain, nonatomic) NSMutableArray *barrageViews;
@property (retain, nonatomic) NSDictionary *barrageTypeClass;
@property (nonatomic, getter=isBarrageTiggered) BOOL barrageTriggered;
@property (nonatomic) long long currentIndex;
@property (nonatomic) long long loopTime;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long playState;
@property (copy, nonatomic) id /* block */ isHitInContainerBlock;
@property (copy, nonatomic) id /* block */ barrageViewsUpdateBlock;
@property (copy, nonatomic) id /* block */ awemeBarrageUpdateBlock;
@property (copy, nonatomic) id /* block */ barrageViewDidAppear;
@property (nonatomic) BOOL isShortStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (BOOL)shouldResponseTapEventOnLocation:(struct CGPoint { double x0; double x1; })arg0;
- (void)trigger:(id)arg0;
- (long long)loopTime;
- (BOOL)isShortStyle;
- (void)setIsShortStyle:(BOOL)arg0;
- (void)setBarrageTriggered:(BOOL)arg0;
- (void)setLoopTime:(long long)arg0;
- (id /* block */)isHitInContainerBlock;
- (id /* block */)awemeBarrageUpdateBlock;
- (id /* block */)barrageViewsUpdateBlock;
- (void)setAwemeBarrageUpdateBlock:(id /* block */)arg0;
- (void)setBarrageViewsUpdateBlock:(id /* block */)arg0;
- (id)awemeBarrageView;
- (id /* block */)barrageViewDidAppear;
- (id)barrageViews;
- (id)dequeueBarrageViewWithType:(long long)arg0;
- (void)triggerIfNeeded;
- (id)barrageTypeClass;
- (id)barrageViewReusedPools;
- (BOOL)isBarrageTiggered;
- (void)loop:(double)arg0;
- (void)finishLoop;
- (void)handleAllBarrageViews:(id /* block */)arg0 isOnTheScreen:(BOOL)arg1;
- (void)updateAwemeBarrage:(id)arg0;
- (void)updateBarrageViews:(id)arg0;
- (void)insertBarrageView:(id)arg0;
- (void)removeBarrageAtIndexSet:(id)arg0;
- (void)barragePlay;
- (void)barragePause;
- (id)getTappedBarrageView:(struct CGPoint { double x0; double x1; })arg0;
- (void)setIsHitInContainerBlock:(id /* block */)arg0;
- (void)setBarrageViewDidAppear:(id /* block */)arg0;
- (void)setAwemeBarrageView:(id)arg0;
- (void)setBarrageViewReusedPools:(id)arg0;
- (void)setBarrageViews:(id)arg0;
- (void)setBarrageTypeClass:(id)arg0;
- (id)timer;
- (id)init;
- (void).cxx_destruct;
- (long long)currentIndex;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setCurrentIndex:(long long)arg0;
- (void)setTimer:(id)arg0;
- (void)layoutSubviews;
- (void)reset;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)reloadData:(id)arg0;
- (long long)playState;
- (void)setPlayState:(long long)arg0;

@end