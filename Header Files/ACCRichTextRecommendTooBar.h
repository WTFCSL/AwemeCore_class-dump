//
//     Generated by private class-dump
//

@class UIColor, NSString, UICollectionView, NSArray, AWEVideoPublishViewModel, UIView, NSMutableArray;
@protocol ACCRichTextRecommendTooBarDelegate;

@interface ACCRichTextRecommendTooBar : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    BOOL _hasRequested;
    BOOL _isShowing;
    id<ACCRichTextRecommendTooBarDelegate> _delegate;
    NSArray *_recommendTextArray;
    id /* block */ _onSelectRecommendText;
    AWEVideoPublishViewModel *_publishViewModel;
    UICollectionView *_collectionView;
    NSString *_hashtagText;
    UIView *_maskView;
    UIColor *_currentTextColor;
    NSMutableArray *_hasShownRecommendTextArray;
}

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSString *hashtagText;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIColor *currentTextColor;
@property (retain, nonatomic) NSMutableArray *hasShownRecommendTextArray;
@property (weak, nonatomic) id<ACCRichTextRecommendTooBarDelegate> delegate;
@property (nonatomic) BOOL hasRequested;
@property (nonatomic) BOOL isShowing;
@property (copy, nonatomic) NSArray *recommendTextArray;
@property (copy, nonatomic) id /* block */ onSelectRecommendText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultBarHeight;

- (void)setIsShowing:(BOOL)arg0;
- (id)publishViewModel;
- (id)hashtagText;
- (void)setHashtagText:(id)arg0;
- (void)setPublishViewModel:(id)arg0;
- (BOOL)hasRequested;
- (void)setHasRequested:(BOOL)arg0;
- (void)setRecommendTextColor:(id)arg0;
- (void)scrollToPreIndex:(id)arg0 scrollPosition:(unsigned long long)arg1;
- (void)trackRecommendInfoWithEvent:(id)arg0 trackInfo:(id)arg1;
- (void)dismissWithAnimate;
- (long long)minIndexPath:(id)arg0;
- (long long)maxIndexPath:(id)arg0;
- (void)hideRecommendToolBar:(BOOL)arg0;
- (void)getRecommendText;
- (void)setRecommendTextArray:(id)arg0;
- (id)recommendTextArray;
- (void)setCurrentTextColor:(id)arg0;
- (id /* block */)onSelectRecommendText;
- (id)hasShownRecommendTextArray;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 hashtagText:(id)arg1 publishModel:(id)arg2;
- (void)setOnSelectRecommendText:(id /* block */)arg0;
- (void)setHasShownRecommendTextArray:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)maskView;
- (void)setCollectionView:(id)arg0;
- (BOOL)isShowing;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setMaskView:(id)arg0;
- (id)currentTextColor;
- (void)setupUI;

@end