//
//     Generated by private class-dump
//

@class NSString, UICollectionView, NSMutableArray, IESLiveSoloKTVTemplateSwitchViewLayout;

@interface IESLiveSoloKTVTemplateSwitchView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    int _maxCount;
    id /* block */ _currentPlayTimeBlock;
    id /* block */ _isPlayingBlock;
    id /* block */ _didPlayOrPauseBlock;
    id /* block */ _didSeekBlock;
    id /* block */ _didProgresseChangedBlock;
    id /* block */ _didStartScrollBlock;
    UICollectionView *_collectionView;
    IESLiveSoloKTVTemplateSwitchViewLayout *_layout;
    NSMutableArray *_cellData;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESLiveSoloKTVTemplateSwitchViewLayout *layout;
@property (retain, nonatomic) NSMutableArray *cellData;
@property (nonatomic) int maxCount;
@property (copy, nonatomic) id /* block */ currentPlayTimeBlock;
@property (copy, nonatomic) id /* block */ isPlayingBlock;
@property (copy, nonatomic) id /* block */ didPlayOrPauseBlock;
@property (copy, nonatomic) id /* block */ didSeekBlock;
@property (copy, nonatomic) id /* block */ didProgresseChangedBlock;
@property (copy, nonatomic) id /* block */ didStartScrollBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)currentSelectedIndex;
- (void)scrollToCenter;
- (void)stopAllVideo;
- (void)updateAllCover;
- (void)updateSelectedCover;
- (void)seekSelectedVideo:(double)arg0 autoPlay:(BOOL)arg1;
- (void)setCurrentPlayTimeBlock:(id /* block */)arg0;
- (void)setIsPlayingBlock:(id /* block */)arg0;
- (void)setDidPlayOrPauseBlock:(id /* block */)arg0;
- (void)setDidSeekBlock:(id /* block */)arg0;
- (void)setDidStartScrollBlock:(id /* block */)arg0;
- (void)setDidProgresseChangedBlock:(id /* block */)arg0;
- (id /* block */)didPlayOrPauseBlock;
- (id /* block */)didSeekBlock;
- (id /* block */)didProgresseChangedBlock;
- (double)outsidePlayingTime;
- (BOOL)outsideIsPlaying;
- (id /* block */)didStartScrollBlock;
- (void)scrollWillBegin;
- (void)scrollDidStop;
- (id /* block */)isPlayingBlock;
- (id /* block */)currentPlayTimeBlock;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (id)init;
- (void)setLayout:(id)arg0;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (id)currentItem;
- (void)setCollectionView:(id)arg0;
- (void)setMaxCount:(int)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (id)layout;
- (void)layoutSubviews;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (int)maxCount;
- (id)currentCell;
- (void)setCellData:(id)arg0;
- (id)cellData;
- (void)updateModel:(id)arg0;

@end
