//
//     Generated by private class-dump
//

@class NSString, UIImage, UIView, AWEListenFeedBgImageCollectionView;

@interface AWEListenFeedBackgroundElement : AWEListenFeedInteractionBaseElement <AWEListenFeedBgImageCollectionViewDelegate, AWEListenFeedBgImageCollectionViewDataSource> {
    AWEListenFeedBgImageCollectionView *_bgImageCollectionView;
    UIImage *_defaultBgImage;
    UIView *_maskView;
}

@property (retain, nonatomic) AWEListenFeedBgImageCollectionView *bgImageCollectionView;
@property (retain, nonatomic) UIImage *defaultBgImage;
@property (retain, nonatomic) UIView *maskView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleConnectionChanged:(id)arg0;
- (id)bgImageCollectionView;
- (void)scrollToContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)bgImageColletionView:(id)arg0 didScrollFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (id)defaultBgImage;
- (long long)bgImageColletionViewNumberOfItems:(id)arg0;
- (id)bgImageColletionView:(id)arg0 cellForIndexPath:(id)arg1;
- (void)updateWithModel:(id)arg0 playModel:(id)arg1 extendModelArray:(id)arg2 mixVideoModel:(id)arg3 currentModelIndex:(long long)arg4 context:(id)arg5;
- (void)updateWithModel:(id)arg0 playModel:(id)arg1 context:(id)arg2;
- (void)extendModelArrayDidUpdate;
- (void)prepareForReuseVC;
- (void)setBgImageCollectionView:(id)arg0;
- (void)setDefaultBgImage:(id)arg0;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (id)maskView;
- (void)viewDidLoad;
- (void)setMaskView:(id)arg0;

@end