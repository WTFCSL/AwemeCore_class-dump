//
//     Generated by private class-dump
//

@class UIView, NSString, ACCVoiceChangerViewModel, UIButton, NSMutableArray, UICollectionView, UILabel, NSIndexPath;

@interface ACCVoiceChangerSelectCollectionView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    BOOL isPreprocessing;
    id /* block */ clearVoiceEffectHandler;
    id /* block */ didSelectVoiceEffectHandler;
    id /* block */ didTapVoiceEffectHandler;
    id /* block */ backPreviouPageHandler;
    ACCVoiceChangerViewModel *_viewModel;
    id /* block */ voiceEffectPreviewHandler;
    NSIndexPath *_selectedIndexPath;
    NSMutableArray *_effectList;
    UIView *_headerView;
    UILabel *_headerTitleLabel;
    UIButton *_headerBackButton;
    UIView *_contentView;
    UICollectionView *_collectionView;
    NSIndexPath *_previousSelectedIndexPath;
}

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UILabel *headerTitleLabel;
@property (retain, nonatomic) UIButton *headerBackButton;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMutableArray *effectList;
@property (retain, nonatomic) NSIndexPath *previousSelectedIndexPath;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (copy, nonatomic) id /* block */ didSelectVoiceEffectHandler;
@property (copy, nonatomic) id /* block */ didTapVoiceEffectHandler;
@property (copy, nonatomic) id /* block */ clearVoiceEffectHandler;
@property (copy, nonatomic) id /* block */ voiceEffectPreviewHandler;
@property (nonatomic) BOOL isPreprocessing;
@property (weak, nonatomic) ACCVoiceChangerViewModel *viewModel;
@property (copy, nonatomic) id /* block */ backPreviouPageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsPreprocessing:(BOOL)arg0;
- (BOOL)isPreprocessing;
- (long long)numberOfCellPerRow;
- (void)didClickBackButton;
- (void)resetSelectedIndex;
- (void)setPreviousSelectedIndexPath:(id)arg0;
- (void)p_clearSeletedCellExcept:(id)arg0;
- (void)p_selectAndDownloadEffectAtIndexPath:(id)arg0;
- (id)previousSelectedIndexPath;
- (void)setVoiceEffectPreviewHandler:(id /* block */)arg0;
- (void)setDidTapVoiceEffectHandler:(id /* block */)arg0;
- (void)setDidSelectVoiceEffectHandler:(id /* block */)arg0;
- (void)setClearVoiceEffectHandler:(id /* block */)arg0;
- (void)selectNoneItemIfNeeded;
- (id)headerBackButton;
- (void)p_handleCollectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (id /* block */)didTapVoiceEffectHandler;
- (id /* block */)voiceEffectPreviewHandler;
- (void)p_selectWithCell:(id)arg0 model:(id)arg1 indexPath:(id)arg2 resultModel:(id)arg3;
- (id /* block */)didSelectVoiceEffectHandler;
- (id /* block */)backPreviouPageHandler;
- (void)recoverToVoiceID:(long long)arg0;
- (void)updateWithVoiceEffectList:(id)arg0 recoverWithVoiceID:(long long)arg1;
- (void)scrollToSelectedIndexIfNeeded;
- (id /* block */)clearVoiceEffectHandler;
- (void)setBackPreviouPageHandler:(id /* block */)arg0;
- (void)setHeaderBackButton:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)reloadData;
- (void)setHeaderView:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)contentView;
- (id)viewModel;
- (id)headerView;
- (void)setContentView:(id)arg0;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg0;
- (void)setupUI;
- (id)effectList;
- (void)setEffectList:(id)arg0;
- (id)headerTitleLabel;
- (void)setHeaderTitleLabel:(id)arg0;

@end
