//
//     Generated by private class-dump
//

@class IESECGCDTimer, IESECLiveCarouselAnimationConfig, UIView;
@protocol IESECLiveCarouselAnimationViewDataSource, IESECLiveCarouselAnimationViewDelegate;

@interface IESECLiveCarouselAnimationView : UIView {
    IESECLiveCarouselAnimationConfig *_config;
    id<IESECLiveCarouselAnimationViewDelegate> _delegate;
    id<IESECLiveCarouselAnimationViewDataSource> _dataSource;
    unsigned long long _currentIndex;
    UIView *_currentItemView;
    IESECGCDTimer *_animationTimer;
    IESECGCDTimer *_delayAnimationTimer;
}

@property (weak, nonatomic) UIView *currentItemView;
@property (retain, nonatomic) IESECGCDTimer *animationTimer;
@property (retain, nonatomic) IESECGCDTimer *delayAnimationTimer;
@property (retain, nonatomic) IESECLiveCarouselAnimationConfig *config;
@property (weak, nonatomic) id<IESECLiveCarouselAnimationViewDelegate> delegate;
@property (weak, nonatomic) id<IESECLiveCarouselAnimationViewDataSource> dataSource;
@property (nonatomic) unsigned long long currentIndex;

- (void)p_resetAnimationState;
- (void)p_prepareAnimation;
- (void)p_doAppearAnimation:(BOOL)arg0 index:(unsigned long long)arg1;
- (unsigned long long)p_numberOfItemsCount;
- (void)p_doDisappearAnimation:(BOOL)arg0 index:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)setDelayAnimationTimer:(id)arg0;
- (id)currentItemView;
- (id)p_itemsViewAtIndex:(unsigned long long)arg0;
- (void)itemViewDidAppear:(BOOL)arg0;
- (void)itemViewWillAppear:(BOOL)arg0;
- (void)itemViewWillDisappear:(BOOL)arg0;
- (void)itemViewDidDisappear:(BOOL)arg0;
- (void)setCurrentItemView:(id)arg0;
- (id)delayAnimationTimer;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)currentIndex;
- (id)config;
- (void)setCurrentIndex:(unsigned long long)arg0;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)startAnimation;
- (id)animationTimer;
- (void)setAnimationTimer:(id)arg0;

@end
