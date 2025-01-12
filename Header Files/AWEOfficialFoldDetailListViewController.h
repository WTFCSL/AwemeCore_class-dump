//
//     Generated by private class-dump
//

@class NSArray, UICollectionView, NSMutableSet, NSString, AWEIMMarkMoveNoticeTipView;
@protocol AWEIMDYOfficialDataManagerProtocol, AWEOfficialFoldDetailListViewNoticeTipProtocol;

@interface AWEOfficialFoldDetailListViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, AWEIMMarkMoveNoticeTipViewProtocol> {
    BOOL _hasShowTipView;
    BOOL _tipViewHasInteracted;
    id<AWEIMDYOfficialDataManagerProtocol> _officialDataManager;
    long long _group;
    id<AWEOfficialFoldDetailListViewNoticeTipProtocol> _delegate;
    AWEIMMarkMoveNoticeTipView *_noticeTipView;
    UICollectionView *_collectionView;
    NSArray *_foldGroupList;
    NSMutableSet *_showedCells;
}

@property (retain, nonatomic) AWEIMMarkMoveNoticeTipView *noticeTipView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *foldGroupList;
@property (retain, nonatomic) NSMutableSet *showedCells;
@property (nonatomic) BOOL hasShowTipView;
@property (nonatomic) BOOL tipViewHasInteracted;
@property (weak, nonatomic) id<AWEIMDYOfficialDataManagerProtocol> officialDataManager;
@property (nonatomic) long long group;
@property (weak, nonatomic) id<AWEOfficialFoldDetailListViewNoticeTipProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)enterFrom;
- (void)setDataList:(id)arg0;
- (id)foldGroupList;
- (void)setFoldGroupList:(id)arg0;
- (void)didTapMarkMoveNoticeTipView:(id)arg0;
- (void)didTapMarkMoveNoticeTipViewTailToken:(id)arg0;
- (void)didDeleteMarkMoveNoticeTipView:(id)arg0;
- (void)setOfficialDataManager:(id)arg0;
- (id)officialDataManager;
- (double)noticeTipHeaderHeight;
- (BOOL)enableAddOrderTopTipView;
- (void)addMoveNoticeTipView;
- (BOOL)hasShowTipView;
- (BOOL)tipViewHasInteracted;
- (void)setHasShowTipView:(BOOL)arg0;
- (id)noticeTipView;
- (id)showedCells;
- (void)trackEvent:(id)arg0 model:(id)arg1;
- (long long)unreadCountWithModel:(id)arg0;
- (long long)demoteStateWithModel:(id)arg0;
- (void)trackMarkMoveNoticeTipViewDelete;
- (void)setTipViewHasInteracted:(BOOL)arg0;
- (void)__handleMoveNoticeTipViewTap:(id)arg0;
- (void)trackMarkMoveNoticeTipViewClick;
- (int)getOrderChatModelType;
- (int)getOrderServiceType;
- (void)setNoticeTipView:(id)arg0;
- (void)setShowedCells:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (id)collectionViewLayout;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (long long)group;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setGroup:(long long)arg0;

@end
