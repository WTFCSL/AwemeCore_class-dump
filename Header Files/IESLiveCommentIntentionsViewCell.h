//
//     Generated by private class-dump
//

@class NSString, UICollectionView, UILabel, IESLiveCommentIntentionEntryModel;
@protocol IESLiveCommentIntentionsViewCellDelegate;

@interface IESLiveCommentIntentionsViewCell : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    BOOL _disableTapResult;
    id<IESLiveCommentIntentionsViewCellDelegate> _delegate;
    UILabel *_entryTitleLabel;
    UICollectionView *_collectionView;
    IESLiveCommentIntentionEntryModel *_entryModel;
}

@property (retain, nonatomic) UILabel *entryTitleLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESLiveCommentIntentionEntryModel *entryModel;
@property (nonatomic) BOOL disableTapResult;
@property (weak, nonatomic) id<IESLiveCommentIntentionsViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)entryModel;
- (void)setEntryModel:(id)arg0;
- (id)entryTitleLabel;
- (void)setEntryTitleLabel:(id)arg0;
- (void)updateWithIntentionEntryModel:(id)arg0;
- (void)setDisableTapResult:(BOOL)arg0;
- (BOOL)disableTapResult;
- (BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg0;
- (void)setupViews;

@end
