//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSDictionary, AWEGDAlbumScrollView, AWEGDAlbumDataProcessor, NSMutableArray, AWEGoodsDetailPageContext;

@interface AWEGDAlbumPageView : UIView <UIScrollViewDelegate> {
    AWEGoodsDetailPageContext *_context;
    NSString *_sessionID;
    id /* block */ _onSelectBlock;
    NSDictionary *_logParams;
    NSMutableArray *_pageIndexs;
    AWEGDAlbumScrollView *_scrollView;
    NSMutableDictionary *_albums;
    long long _currentIndex;
    AWEGDAlbumDataProcessor *_dataProcessor;
}

@property (retain, nonatomic) NSDictionary *logParams;
@property (retain, nonatomic) NSMutableArray *pageIndexs;
@property (retain, nonatomic) AWEGDAlbumScrollView *scrollView;
@property (retain, nonatomic) NSMutableDictionary *albums;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) AWEGDAlbumDataProcessor *dataProcessor;
@property (weak, nonatomic) AWEGoodsDetailPageContext *context;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) id /* block */ onSelectBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDataProcessor:(id)arg0;
- (id)dataProcessor;
- (void)scrollViewDidEndScroll:(id)arg0;
- (id)logParams;
- (void)setLogParams:(id)arg0;
- (void)enableScroll;
- (void)appendAlbumItemWithCategoryInfo:(id)arg0;
- (id)pageIndexs;
- (long long)currentPageIndex:(id)arg0;
- (void)scrollToIndex:(long long)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)trackShowPOIPicOperationWithPageIndex:(long long)arg0;
- (id /* block */)onSelectBlock;
- (void)loadDataWithModel:(id)arg0 extraParam:(id)arg1 dataProcessor:(id)arg2;
- (void)prohibitScroll;
- (void)reloadCurrentAlbum;
- (void)anchorFistAlbumToIndex:(long long)arg0;
- (void)setOnSelectBlock:(id /* block */)arg0;
- (void)setPageIndexs:(id)arg0;
- (void)scrollViewWillBeginDecelerating:(id)arg0;
- (void)setScrollView:(id)arg0;
- (void).cxx_destruct;
- (void)setSessionID:(id)arg0;
- (long long)currentIndex;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (id)sessionID;
- (void)setContext:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setCurrentIndex:(long long)arg0;
- (id)context;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (id)albums;
- (id)scrollView;
- (void)setupUI;
- (void)setAlbums:(id)arg0;

@end
