//
//     Generated by private class-dump
//

@class NSString, UICollectionView, HTSLiveFixedChatSyncData, NSMutableArray;

@interface IESLiveLimitCommentEmojiPannelView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    id /* block */ _limitCommentPageEmojiCellClickCallBack;
    UICollectionView *_collectionView;
    HTSLiveFixedChatSyncData *_limitData;
    NSMutableArray *_fixedEmojiListArray;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) HTSLiveFixedChatSyncData *limitData;
@property (retain, nonatomic) NSMutableArray *fixedEmojiListArray;
@property (copy, nonatomic) id /* block */ limitCommentPageEmojiCellClickCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)limitData;
- (void)setLimitData:(id)arg0;
- (id)fixedEmojiListArray;
- (void)setLimitCommentPageEmojiCellClickCallBack:(id /* block */)arg0;
- (void)setFixedEmojiListArray:(id)arg0;
- (id /* block */)limitCommentPageEmojiCellClickCallBack;
- (BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(long long)arg2;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setData:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;

@end