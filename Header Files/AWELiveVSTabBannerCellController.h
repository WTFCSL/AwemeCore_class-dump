//
//     Generated by private class-dump
//

@class NSArray, AWELiveVSTabBannerCell, NSString;
@protocol IGListCollectionContext;

@interface AWELiveVSTabBannerCellController : NSObject <DUXMultiLayoutBannerDelegate, DUXMultiLayoutBannerDataSource> {
    BOOL _isInScreen;
    NSArray *_model;
    id<IGListCollectionContext> _collectionContext;
    long long _index;
    AWELiveVSTabBannerCell *_cell;
}

@property (weak, nonatomic) AWELiveVSTabBannerCell *cell;
@property (nonatomic) BOOL isInScreen;
@property (readonly, nonatomic) NSArray *model;
@property (weak, nonatomic) id<IGListCollectionContext> collectionContext;
@property (nonatomic) long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configCell:(id)arg0;
- (id)collectionContext;
- (void)containerViewDidAppear;
- (void)setIsInScreen:(BOOL)arg0;
- (void)trackBannerCellShowWithEpisode:(id)arg0;
- (BOOL)isInScreen;
- (void)bannerView:(id)arg0 didScrollFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)bannerView:(id)arg0 didSelectedItemAtIndex:(long long)arg1;
- (long long)bannerViewNumberOfItems:(id)arg0;
- (id)bannerView:(id)arg0 cellForIndexPath:(id)arg1;
- (void)containerViewDidDisAppear;
- (struct CGSize { double x0; double x1; })sizeWithcollectionViewSize:(struct CGSize { double x0; double x1; })arg0 cellContentSize:(struct CGSize { double x0; double x1; })arg1;
- (void)setCollectionContext:(id)arg0;
- (id)initWithModel:(id)arg0;
- (void)setIndex:(long long)arg0;
- (void).cxx_destruct;
- (id)model;
- (Class)cellClass;
- (long long)index;
- (id)cell;
- (void)setCell:(id)arg0;

@end
