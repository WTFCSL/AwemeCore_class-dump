//
//     Generated by private class-dump
//

@class NSString, ACCRecordContainerMode, UICollectionView, UIView;
@protocol ACCSwitchLengthViewDelegate;

@interface ACCSwitchLengthView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    BOOL _needForceSwitch;
    BOOL _panned;
    BOOL _enableOffScreenOpt;
    id<ACCSwitchLengthViewDelegate> _delegate;
    ACCRecordContainerMode *_containerMode;
    long long _modeIndex;
    UICollectionView *_collectionView;
    UIView *_maskView;
}

@property (nonatomic) long long modeIndex;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *maskView;
@property (nonatomic) BOOL enableOffScreenOpt;
@property (weak, nonatomic) id<ACCSwitchLengthViewDelegate> delegate;
@property (weak, nonatomic) ACCRecordContainerMode *containerMode;
@property (nonatomic) BOOL needForceSwitch;
@property (nonatomic, getter=isPanned) BOOL panned;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)containerMode;
- (BOOL)isPanned;
- (long long)modeIndex;
- (void)setModeIndex:(long long)arg0;
- (void)setContainerMode:(id)arg0;
- (void)setNeedForceSwitch:(BOOL)arg0;
- (void)setModeIndex:(long long)arg0 animated:(BOOL)arg1;
- (BOOL)enableOffScreenOpt;
- (void)setEnableOffScreenOpt:(BOOL)arg0;
- (void)changeModeIndexTo:(long long)arg0 withMethod:(long long)arg1;
- (void)setPanned:(BOOL)arg0;
- (BOOL)needForceSwitch;
- (void)accessibilityChangeMode:(long long)arg0;
- (BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setScrollEnabled:(BOOL)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (id)maskView;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)setDelegate:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)setMaskView:(id)arg0;
- (BOOL)accessibilityScroll:(long long)arg0;
- (long long)cellWidth;
- (void)setupUI;
- (long long)cellCount;

@end
