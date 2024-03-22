//
//     Generated by private class-dump
//

@class NSArray, UICollectionView, NSString, UICollectionViewFlowLayout, UILabel;

@interface AWEChallengeDetailHorizontalVideoView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AWEChallengeDetailHorizontalVideoView> {
    BOOL _hiddenLikeImageView;
    BOOL _newStyle;
    id /* block */ _horizontalVideoClicked;
    double _labelHeight;
    double _spacingUnderLabel;
    UILabel *_titleLabel;
    unsigned long long _styleType;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    NSArray *_videoList;
    NSString *_title;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (copy, nonatomic) NSArray *videoList;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ horizontalVideoClicked;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) double labelHeight;
@property (nonatomic) double spacingUnderLabel;
@property (nonatomic) BOOL newStyle;
@property (nonatomic) BOOL hiddenLikeImageView;
@property (nonatomic) unsigned long long styleType;

- (void)setVideoList:(id)arg0;
- (id)videoList;
- (void)setLabelHeight:(double)arg0;
- (double)labelHeight;
- (void)setStyleType:(unsigned long long)arg0;
- (void)configureUI;
- (void)setHorizontalVideoClicked:(id /* block */)arg0;
- (void)updateWithVideoList:(id)arg0 title:(id)arg1;
- (id /* block */)horizontalVideoClicked;
- (double)spacingUnderLabel;
- (void)setSpacingUnderLabel:(double)arg0;
- (BOOL)newStyle;
- (void)setNewStyle:(BOOL)arg0;
- (BOOL)hiddenLikeImageView;
- (void)setHiddenLikeImageView:(BOOL)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (unsigned long long)styleType;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (id)collectionViewLayout;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)titleLabel;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)title;
- (void)setTitleLabel:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setCollectionViewLayout:(id)arg0;

@end
