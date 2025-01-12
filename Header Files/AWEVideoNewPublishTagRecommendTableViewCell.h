//
//     Generated by private class-dump
//

@class NSHashTable, UIView, NSString, AWEPublishTagRecommendStyleInfo, UIImageView, NSMutableArray, UICollectionView, ACCMulticastDelegate, ACCAnimatedButton;
@protocol AWEVideoNewPublishTagRecommendTableViewCellDelegate;

@interface AWEVideoNewPublishTagRecommendTableViewCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate> {
    ACCMulticastDelegate<AWEVideoNewPublishTagRecommendTableViewCellDelegate> *_delegate;
    BOOL _isShowNarbyCircleTag;
    BOOL _isShowingRecommendList;
    NSMutableArray *_hashTags;
    UICollectionView *_collectionView;
    UIView *_separateLineView;
    id /* block */ _customCollectionCellBlock;
    NSHashTable *_subscribers;
    AWEPublishTagRecommendStyleInfo *_styleInfo;
    ACCAnimatedButton *_hashtagButton;
    ACCAnimatedButton *_atButton;
    ACCAnimatedButton *_switchInputButton;
    UIImageView *_gradientView;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *separateLineView;
@property (nonatomic) BOOL isShowingRecommendList;
@property (retain, nonatomic) NSHashTable *subscribers;
@property (retain, nonatomic) AWEPublishTagRecommendStyleInfo *styleInfo;
@property (retain, nonatomic) ACCAnimatedButton *hashtagButton;
@property (retain, nonatomic) ACCAnimatedButton *atButton;
@property (retain, nonatomic) ACCAnimatedButton *switchInputButton;
@property (retain, nonatomic) UIImageView *gradientView;
@property (retain, nonatomic) id<AWEVideoNewPublishTagRecommendTableViewCellDelegate> delegate;
@property (readonly, nonatomic) NSMutableArray *hashTags;
@property (readonly, nonatomic) BOOL isShowNarbyCircleTag;
@property (copy, nonatomic) id /* block */ customCollectionCellBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hashTags;
- (id)separateLineView;
- (void)setSeparateLineView:(id)arg0;
- (void)setupControl;
- (id)switchInputButton;
- (void)setSwitchInputButton:(id)arg0;
- (void)updateHashTags:(id)arg0;
- (void)setupStyleInfo;
- (BOOL)isExistAtButton;
- (BOOL)hasStaticCell;
- (id)staticCellArray;
- (BOOL)isShowingRecommendList;
- (void)setIsShowingRecommendList:(BOOL)arg0;
- (void)trackShowRecommendListEvent:(BOOL)arg0;
- (long long)staticCellAtItem:(long long)arg0;
- (id)staticButtonForCell:(long long)arg0;
- (id /* block */)customCollectionCellBlock;
- (double)p_calculateWidthForButton:(id)arg0;
- (struct CGSize { double x0; double x1; })tagRecommendItemSizeWithModel:(id)arg0;
- (id)atButton;
- (id)hashtagButton;
- (void)p_hashtagButtonClicked;
- (void)p_atButtonClicked;
- (BOOL)isShowNarbyCircleTag;
- (void)setCustomCollectionCellBlock:(id /* block */)arg0;
- (void)setHashtagButton:(id)arg0;
- (void)setAtButton:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(long long)arg2;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)addDelegate:(id)arg0;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(long long)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setGradientView:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (id)subscribers;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (void)setSelected:(BOOL)arg0 animated:(BOOL)arg1;
- (void)setDelegate:(id)arg0;
- (id)gradientView;
- (void)setStyleInfo:(id)arg0;
- (id)styleInfo;
- (void)setSubscribers:(id)arg0;

@end
