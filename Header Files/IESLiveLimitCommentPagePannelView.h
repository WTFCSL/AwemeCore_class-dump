//
//     Generated by private class-dump
//

@class NSString, UIImageView, UICollectionView, HTSLiveFixedChatSyncData, IESLiveLimitCommentPageTabView;

@interface IESLiveLimitCommentPagePannelView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    id /* block */ _closeCallBack;
    id /* block */ _limitCommentPageEmojiCellClickCallBack;
    id /* block */ _limitCommentPageCommentCellClickCallBack;
    id /* block */ _indexChangeBlock;
    UIImageView *_closeView;
    UIImageView *_backgroundImageView;
    UIImageView *_backgroundDecorateImageView;
    UICollectionView *_collectionView;
    IESLiveLimitCommentPageTabView *_tabView;
    HTSLiveFixedChatSyncData *_limitModel;
}

@property (retain, nonatomic) UIImageView *closeView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *backgroundDecorateImageView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESLiveLimitCommentPageTabView *tabView;
@property (retain, nonatomic) HTSLiveFixedChatSyncData *limitModel;
@property (copy, nonatomic) id /* block */ closeCallBack;
@property (copy, nonatomic) id /* block */ limitCommentPageEmojiCellClickCallBack;
@property (copy, nonatomic) id /* block */ limitCommentPageCommentCellClickCallBack;
@property (copy, nonatomic) id /* block */ indexChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)pannelViewHeight;
+ (double)pannelViewWidth;

- (id /* block */)closeCallBack;
- (id)closeView;
- (void)setCloseView:(id)arg0;
- (void)setTabView:(id)arg0;
- (void)setIndexChangeBlock:(id /* block */)arg0;
- (id /* block */)indexChangeBlock;
- (void)setCloseCallBack:(id /* block */)arg0;
- (id)limitModel;
- (void)setLimitModel:(id)arg0;
- (void)setLimitCommentPageEmojiCellClickCallBack:(id /* block */)arg0;
- (void)setLimitCommentPageCommentCellClickCallBack:(id /* block */)arg0;
- (id /* block */)limitCommentPageEmojiCellClickCallBack;
- (id /* block */)limitCommentPageCommentCellClickCallBack;
- (id)backgroundDecorateImageView;
- (void)setBackgroundDecorateImageView:(id)arg0;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)backgroundImageView;
- (void)setData:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (void)closeAction;
- (void)layoutSubviews;
- (id)flowLayout;
- (void)setupUI;
- (void)setBackgroundImageView:(id)arg0;
- (id)tabView;

@end
