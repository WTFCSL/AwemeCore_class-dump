//
//     Generated by private class-dump
//

@class NSArray, NSString, UICollectionView;
@protocol IESLiveInteractionEmojiPageCellDelegate;

@interface IESLiveInteractionEmojiPageCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    BOOL _isOnlyAvatarEmoji;
    id<IESLiveInteractionEmojiPageCellDelegate> _delegate;
    UICollectionView *_collectionView;
    NSArray *_modelArray;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *modelArray;
@property (nonatomic) BOOL isOnlyAvatarEmoji;
@property (weak, nonatomic) id<IESLiveInteractionEmojiPageCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)cellWillDisplay;
- (id)modelArray;
- (void)setModelArray:(id)arg0;
- (void)configWithPageModel:(id)arg0 emojiStyle:(BOOL)arg1;
- (void)setIsOnlyAvatarEmoji:(BOOL)arg0;
- (BOOL)isOnlyAvatarEmoji;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(long long)arg2;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg0;
- (void)setupUI;

@end
