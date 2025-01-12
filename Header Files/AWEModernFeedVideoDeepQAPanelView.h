//
//     Generated by private class-dump
//

@class CAGradientLayer, NSArray, NSString, AWEVideoDeepQAVideoTopView, AWEGradientView, UIView, UICollectionView;

@interface AWEModernFeedVideoDeepQAPanelView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    BOOL _isExpand;
    AWEVideoDeepQAVideoTopView *_topView;
    UICollectionView *_collectionView;
    long long _selecteIndex;
    double _videoInfoViewOffsetY;
    NSString *_referString;
    id /* block */ _clickVideoAbstractSectionBlock;
    id /* block */ _triggerClosePaneEventBlock;
    NSArray *_dataArray;
    AWEGradientView *_gradientView;
    NSString *_path;
    CAGradientLayer *_bottomGradientMasklayer;
    UIView *_bottomGradientView;
}

@property (retain, nonatomic) NSArray *dataArray;
@property (nonatomic) double videoInfoViewOffsetY;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) CAGradientLayer *bottomGradientMasklayer;
@property (retain, nonatomic) UIView *bottomGradientView;
@property (retain, nonatomic) AWEVideoDeepQAVideoTopView *topView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long selecteIndex;
@property (nonatomic) BOOL isExpand;
@property (retain, nonatomic) NSString *referString;
@property (copy, nonatomic) id /* block */ clickVideoAbstractSectionBlock;
@property (copy, nonatomic) id /* block */ triggerClosePaneEventBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)setReferString:(id)arg0;
- (BOOL)isExpand;
- (void)setIsExpand:(BOOL)arg0;
- (long long)selecteIndex;
- (void)setSelecteIndex:(long long)arg0;
- (void)setClickVideoAbstractSectionBlock:(id /* block */)arg0;
- (void)scrollToSeletedIndex:(long long)arg0;
- (void)updateWithModel:(id)arg0 lottiePath:(id)arg1;
- (id /* block */)clickVideoAbstractSectionBlock;
- (void)setTriggerClosePaneEventBlock:(id /* block */)arg0;
- (void)triggerClosePaneEvent:(id)arg0;
- (double)videoInfoViewOffsetY;
- (id)bottomGradientMasklayer;
- (void)setVideoInfoViewOffsetY:(double)arg0;
- (id /* block */)triggerClosePaneEventBlock;
- (void)setBottomGradientMasklayer:(id)arg0;
- (void)setPath:(id)arg0;
- (id)init;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)path;
- (void)setGradientView:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (void)layoutSubviews;
- (id)gradientView;
- (id)dataArray;
- (id)topView;
- (void)setTopView:(id)arg0;
- (void)setDataArray:(id)arg0;
- (id)bottomGradientView;
- (void)setBottomGradientView:(id)arg0;

@end
