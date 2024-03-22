//
//     Generated by private class-dump
//

@class NSArray, UICollectionView, IESECLiveGoodsSKUBannerLayout, NSDictionary, NSMutableArray, NSString;
@protocol IESECLiveGoodsSKUBannerDelegate;

@interface IESECLiveGoodsSKUBanner : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    BOOL _forceDisable;
    BOOL _showMore;
    id<IESECLiveGoodsSKUBannerDelegate> _delegate;
    NSDictionary *_liveThemeColorDic;
    IESECLiveGoodsSKUBannerLayout *_itemLayout;
    UICollectionView *_itemCollectionView;
    NSArray *_itemModels;
    NSMutableArray *_realModels;
    double _itemHeight;
}

@property (nonatomic) BOOL showMore;
@property (retain, nonatomic) IESECLiveGoodsSKUBannerLayout *itemLayout;
@property (retain, nonatomic) UICollectionView *itemCollectionView;
@property (retain, nonatomic) NSArray *itemModels;
@property (retain, nonatomic) NSMutableArray *realModels;
@property (nonatomic) double itemHeight;
@property (weak, nonatomic) id<IESECLiveGoodsSKUBannerDelegate> delegate;
@property (nonatomic) BOOL forceDisable;
@property (retain, nonatomic) NSDictionary *liveThemeColorDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)itemModels;
- (void)setItemModels:(id)arg0;
- (BOOL)showMore;
- (void)setShowMore:(BOOL)arg0;
- (void)setLiveThemeColorDic:(id)arg0;
- (id)liveThemeColorDic;
- (void)setForceDisable:(BOOL)arg0;
- (void)setupItemModels:(id)arg0 showMore:(BOOL)arg1;
- (void)setRealModels:(id)arg0;
- (id)realModels;
- (void)calculateRealModelsWithMaxWidth:(double)arg0;
- (struct CGSize { double x0; double x1; })cellSizeWithItemModel:(id)arg0;
- (id)generateMoreModel;
- (id)itemModelWithIndexPath:(id)arg0;
- (BOOL)forceDisable;
- (id)itemLayout;
- (void)setItemLayout:(id)arg0;
- (void)setItemCollectionView:(id)arg0;
- (BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setupUI;
- (double)itemHeight;
- (void)setItemHeight:(double)arg0;
- (id)itemCollectionView;

@end
