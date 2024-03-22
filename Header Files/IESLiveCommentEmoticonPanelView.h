//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, IESLiveCommentEmoticonPageItem, UIButton, NSDictionary, UICollectionView, IESLiveEmoticonTabBar;
@protocol IESLiveCommentEmoticonPanelViewDelegate;

@interface IESLiveCommentEmoticonPanelView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IESLiveCommentEmoticonPageViewDelegate, IESLiveCommentExpandDetailViewProtocol> {
    BOOL _actionTypeHasRestriction;
    BOOL _landScapeMode;
    BOOL _didSelectDefault;
    BOOL _tapToDisplayCell;
    unsigned long long currentActionType;
    id /* block */ didDismiss;
    id /* block */ didShow;
    id /* block */ didOutput;
    unsigned long long detailAreaType;
    id /* block */ willSend;
    id /* block */ areaTypeTempChange;
    id /* block */ willOutput;
    id /* block */ didDelete;
    id /* block */ finishComment;
    id<IESLiveCommentEmoticonPanelViewDelegate> _delegate;
    NSDictionary *_trackParams;
    id /* block */ _shouldDisplayItemBlock;
    id /* block */ _needDisplayActivityEmoticonBlock;
    id /* block */ _doesActivityEmoticonExist;
    id /* block */ _needDisplayFusionEmoticonBlock;
    UICollectionView *_collectionView;
    NSArray *_emoticonPages;
    unsigned long long _restrictActionType;
    IESLiveEmoticonTabBar *_tabBar;
    IESLiveCommentEmoticonPageItem *_currentSelectedPage;
    NSString *_defaultPageId;
    UIButton *_deleteBtn;
    UIView *_deleteBtnMask;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *emoticonPages;
@property (nonatomic) BOOL actionTypeHasRestriction;
@property (nonatomic) unsigned long long restrictActionType;
@property (retain, nonatomic) IESLiveEmoticonTabBar *tabBar;
@property (retain, nonatomic) IESLiveCommentEmoticonPageItem *currentSelectedPage;
@property (copy, nonatomic) NSString *defaultPageId;
@property (nonatomic) BOOL landScapeMode;
@property (nonatomic) BOOL didSelectDefault;
@property (nonatomic) BOOL tapToDisplayCell;
@property (retain, nonatomic) UIButton *deleteBtn;
@property (retain, nonatomic) UIView *deleteBtnMask;
@property (weak, nonatomic) id<IESLiveCommentEmoticonPanelViewDelegate> delegate;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) id /* block */ shouldDisplayItemBlock;
@property (copy, nonatomic) id /* block */ needDisplayActivityEmoticonBlock;
@property (copy, nonatomic) id /* block */ doesActivityEmoticonExist;
@property (copy, nonatomic) id /* block */ needDisplayFusionEmoticonBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long currentActionType;
@property (nonatomic) unsigned long long detailAreaType;
@property (copy, nonatomic) id /* block */ didShow;
@property (copy, nonatomic) id /* block */ didDismiss;
@property (copy, nonatomic) id /* block */ areaTypeTempChange;
@property (copy, nonatomic) id /* block */ willOutput;
@property (copy, nonatomic) id /* block */ didOutput;
@property (copy, nonatomic) id /* block */ willSend;
@property (copy, nonatomic) id /* block */ didDelete;
@property (copy, nonatomic) id /* block */ finishComment;

- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (void)setDidShow:(id /* block */)arg0;
- (unsigned long long)currentActionType;
- (id)deleteBtn;
- (void)setDeleteBtn:(id)arg0;
- (void)deleteAction:(id)arg0;
- (BOOL)supportActionType:(unsigned long long)arg0;
- (unsigned long long)detailAreaType;
- (void)setDetailAreaType:(unsigned long long)arg0;
- (id /* block */)areaTypeTempChange;
- (void)setAreaTypeTempChange:(id /* block */)arg0;
- (id /* block */)willOutput;
- (void)setWillOutput:(id /* block */)arg0;
- (id /* block */)didOutput;
- (void)setDidOutput:(id /* block */)arg0;
- (id /* block */)didDelete;
- (void)setDidDelete:(id /* block */)arg0;
- (id /* block */)finishComment;
- (void)setFinishComment:(id /* block */)arg0;
- (void)restrictActionType:(unsigned long long)arg0;
- (void)commentEmoticonPageView:(id)arg0 didSelectEmoticon:(id)arg1;
- (void)loadItems;
- (BOOL)landScapeMode;
- (void)setTapToDisplayCell:(BOOL)arg0;
- (void)selectPageItem:(id)arg0 withCollectionViewScroll:(BOOL)arg1 animated:(BOOL)arg2;
- (id)emoticonPages;
- (void)onItemsShow;
- (void)setupDeleteBtn;
- (void)setDeleteBtnMask:(id)arg0;
- (id)deleteBtnMask;
- (void)refreshDeleteBtnLayout;
- (BOOL)actionTypeHasRestriction;
- (unsigned long long)restrictActionType;
- (void)setEmoticonPages:(id)arg0;
- (BOOL)didSelectDefault;
- (id)defaultPageId;
- (void)setDidSelectDefault:(BOOL)arg0;
- (void)trackEmojiPanelShow;
- (id)currentSelectedPage;
- (void)setActionTypeHasRestriction:(BOOL)arg0;
- (void)setRestrictActionType:(unsigned long long)arg0;
- (void)setDefaultPageId:(id)arg0;
- (id /* block */)needDisplayActivityEmoticonBlock;
- (id /* block */)needDisplayFusionEmoticonBlock;
- (BOOL)tapToDisplayCell;
- (void)setCurrentSelectedPage:(id)arg0;
- (id /* block */)shouldDisplayItemBlock;
- (id /* block */)doesActivityEmoticonExist;
- (void)setDefaultSelectePageWithID:(id)arg0;
- (void)setShouldDisplayItemBlock:(id /* block */)arg0;
- (void)setNeedDisplayActivityEmoticonBlock:(id /* block */)arg0;
- (void)setDoesActivityEmoticonExist:(id /* block */)arg0;
- (void)setNeedDisplayFusionEmoticonBlock:(id /* block */)arg0;
- (void)setLandScapeMode:(BOOL)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)dismiss;
- (id /* block */)didDismiss;
- (BOOL)hasTabBar;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)setTabBar:(id)arg0;
- (id)tabBar;
- (void)show;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (id /* block */)didShow;
- (void)setupCollectionView;
- (void)setupViews;
- (void)setDidDismiss:(id /* block */)arg0;
- (void)setWillSend:(id /* block */)arg0;
- (id /* block */)willSend;

@end