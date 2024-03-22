//
//     Generated by private class-dump
//

@class IESLiveSubscribeEmojiViewModel, NSString, UIImageView, UICollectionView, UILabel, NSDictionary, UIButton;
@protocol IESLiveCommentEmoticonPageViewDelegate;

@interface IESLiveSubscribeEmojiView : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, IESLiveCommentEmoticonPageViewProtocol> {
    BOOL _landscapeMode;
    BOOL _isLandscape;
    id<IESLiveCommentEmoticonPageViewDelegate> _delegate;
    unsigned long long _selectType;
    NSDictionary *_trackParams;
    double _extraBottomInset;
    UICollectionView *_collectionView;
    UIImageView *_guideBackgroundView;
    UILabel *_guideLabel;
    UIButton *_guideButton;
    IESLiveSubscribeEmojiViewModel *_viewModel;
    double _slideOffset;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIImageView *guideBackgroundView;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) UIButton *guideButton;
@property (retain, nonatomic) IESLiveSubscribeEmojiViewModel *viewModel;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) double slideOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly, nonatomic) unsigned long long selectType;
@property (weak, nonatomic) id<IESLiveCommentEmoticonPageViewDelegate> delegate;
@property (nonatomic) BOOL landscapeMode;
@property (nonatomic) double extraBottomInset;

- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (id)guideLabel;
- (void)setGuideLabel:(id)arg0;
- (unsigned long long)selectType;
- (id)guideBackgroundView;
- (void)setGuideBackgroundView:(id)arg0;
- (void)setLandscapeMode:(BOOL)arg0;
- (double)extraBottomInset;
- (void)setExtraBottomInset:(double)arg0;
- (double)slideOffset;
- (void)setSlideOffset:(double)arg0;
- (void)p_tapGuideButton;
- (void)updateWithViewModel:(id)arg0 isLandscape:(BOOL)arg1 slideOffset:(double)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setIsLandscape:(BOOL)arg0;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (id)viewModel;
- (BOOL)isLandscape;
- (void)refreshUI;
- (void)setDelegate:(id)arg0;
- (void)setupCollectionView;
- (void)setupUI;
- (id)guideButton;
- (void)setGuideButton:(id)arg0;
- (BOOL)landscapeMode;

@end