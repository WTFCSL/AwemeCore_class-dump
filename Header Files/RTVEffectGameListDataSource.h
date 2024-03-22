//
//     Generated by private class-dump
//

@class NSArray, UICollectionView, NSString, RxCollectionViewDiffableDataSource;
@protocol RTVEffectGameListCellDelegate, RTVEffectGameListViewController, RxInjector, RTVXRControllerInjector, RTVXRRoomSessionControllerInterface, RTVEffectGameManager;

@interface RTVEffectGameListDataSource : NSObject <RTVEffectGameListDataSource, RTVUICellModelDiffableInterface, RTVXRRoomSessionControllerObserver> {
    id<RxInjector> _injector;
    id<RTVXRControllerInjector> _controllerInjector;
    id<RTVEffectGameListCellDelegate, RTVEffectGameListViewController> _cellDelegate;
    id<RTVXRRoomSessionControllerInterface> _roomController;
    UICollectionView *_collectionView;
    RxCollectionViewDiffableDataSource *_dataSource;
    id<RTVEffectGameManager> _effectGameManager;
    NSArray *_remoteGames;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVEffectGameListCellDelegate, RTVEffectGameListViewController> cellDelegate;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) RxCollectionViewDiffableDataSource *dataSource;
@property (readonly, nonatomic) id<RTVEffectGameManager> effectGameManager;
@property (retain, nonatomic) NSArray *remoteGames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)renderModel:(id)arg0 context:(id)arg1;
- (id)controllerInjector;
- (void)renderBusinessHandler:(id)arg0 context:(id)arg1;
- (id)roomController;
- (void)rtvSession:(id)arg0 participatorsDidChange:(id)arg1 oldParticipators:(id)arg2;
- (id)effectGameManager;
- (id)__onCallParticipators:(id)arg0;
- (void)__registerClass;
- (void)__createDataSource;
- (id)__applyPlaceholderSnapshot;
- (id)__applyRemoteSnapshot;
- (id)__itemIdentifierForIndexPath:(id)arg0;
- (id)remoteGames;
- (id)__applySnapshotWithGames:(id)arg0;
- (id)__sectionIdentifier;
- (void)__applySnapshotWithIdentifiers:(id)arg0;
- (void)setRemoteGames:(id)arg0;
- (void)__showRetryView:(BOOL)arg0;
- (void)__showEmptyView:(BOOL)arg0;
- (id)effectModelForIndexPath:(id)arg0;
- (void)updateInGameGameModel:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (id)collectionView;
- (void)reloadData;
- (id)injector;
- (id)cellDelegate;

@end