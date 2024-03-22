//
//     Generated by private class-dump
//

@protocol AWEBarrageContainerViewProtocol <NSObject>

@property (copy, nonatomic) id /* block */ isHitInContainerBlock;
@property (copy, nonatomic) id /* block */ barrageViewsUpdateBlock;
@property (copy, nonatomic) id /* block */ awemeBarrageUpdateBlock;
@property (copy, nonatomic) id /* block */ barrageViewDidAppear;
@property (readonly, nonatomic, getter=isBarrageTiggered) BOOL barrageTriggered;
@property (readonly, nonatomic) long long playState;
@property (readonly, nonatomic) long long currentIndex;

- (BOOL)shouldResponseTapEventOnLocation:(struct CGPoint { double x0; double x1; })arg0;
- (id /* block */)isHitInContainerBlock;
- (id /* block */)awemeBarrageUpdateBlock;
- (id /* block */)barrageViewsUpdateBlock;
- (void)setAwemeBarrageUpdateBlock:(id /* block */)arg0;
- (void)setBarrageViewsUpdateBlock:(id /* block */)arg0;
- (id /* block */)barrageViewDidAppear;
- (BOOL)isBarrageTiggered;
- (void)updateAwemeBarrage:(id)arg0;
- (void)updateBarrageViews:(id)arg0;
- (void)insertBarrageView:(id)arg0;
- (void)removeBarrageAtIndexSet:(id)arg0;
- (void)barragePlay;
- (void)barragePause;
- (id)getTappedBarrageView:(struct CGPoint { double x0; double x1; })arg0;
- (void)setIsHitInContainerBlock:(id /* block */)arg0;
- (void)setBarrageViewDidAppear:(id /* block */)arg0;
- (long long)currentIndex;
- (void)reset;
- (void)reloadData:(id)arg0;
- (long long)playState;

@end