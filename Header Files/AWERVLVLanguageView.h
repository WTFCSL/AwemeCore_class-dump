//
//     Generated by private class-dump
//

@class NSArray, UICollectionView, NSString, AWERVDetailPageContext;
@protocol AWERVLVSelectDelegate, AWERVLVLanguageViewDelegate;

@interface AWERVLVLanguageView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    id<AWERVLVSelectDelegate> _delegate;
    id<AWERVLVLanguageViewDelegate> _trackDelegate;
    AWERVDetailPageContext *_pageContext;
    UICollectionView *_collectionView;
    long long _index;
    NSArray *_languageModelList;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSArray *languageModelList;
@property (weak, nonatomic) id<AWERVLVSelectDelegate> delegate;
@property (weak, nonatomic) id<AWERVLVLanguageViewDelegate> trackDelegate;
@property (weak, nonatomic) AWERVDetailPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackDelegate;
- (void)setTrackDelegate:(id)arg0;
- (void)updateWithModel:(id)arg0 currentSelectIndex:(long long)arg1;
- (void)setLanguageModelList:(id)arg0;
- (id)languageModelList;
- (void)setIndex:(long long)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (long long)index;
- (void)setDelegate:(id)arg0;
- (void)setupUI;
- (id)pageContext;
- (void)setPageContext:(id)arg0;

@end