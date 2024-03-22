//
//     Generated by private class-dump
//

@class NSString, NSArray, ACCMusicListUseCase, NSMutableSet, ACCMusicItemViewModel;
@protocol ACCMusicListBizHandler, ACCMusicListRepositoryProtocol, ACCMusicTrackerProtocol;

@interface ACCMusicListViewModel : NSObject <ACCMusicListViewModelProtocol> {
    BOOL _enableStreamDownload;
    BOOL _itemEnableDeselect;
    BOOL _hasMore;
    id<ACCMusicListRepositoryProtocol> _repository;
    ACCMusicListUseCase *_useCase;
    id<ACCMusicListBizHandler> _bizHandler;
    id<ACCMusicTrackerProtocol> _tracker;
    NSString *_title;
    long long _uiState;
    NSString *_emptyText;
    NSArray *_items;
    NSString *_identifier;
    NSMutableSet *_trackedIds;
    ACCMusicItemViewModel *_preSelectItem;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long uiState;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *emptyText;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) id<ACCMusicListRepositoryProtocol> repository;
@property (retain, nonatomic) ACCMusicListUseCase *useCase;
@property (weak, nonatomic) id<ACCMusicListBizHandler> bizHandler;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableSet *trackedIds;
@property (weak, nonatomic) ACCMusicItemViewModel *preSelectItem;
@property (nonatomic) BOOL enableStreamDownload;
@property (nonatomic) BOOL itemEnableDeselect;
@property (retain, nonatomic) id<ACCMusicTrackerProtocol> tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)musicSelectedFrom;
- (void)setupBinding;
- (id)selectedMusic;
- (void)trackItemClickAtIndex:(unsigned long long)arg0;
- (void)trackItemShowAtIndex:(unsigned long long)arg0;
- (id)emptyText;
- (BOOL)itemEnableDeselect;
- (void)selectMusicItemAtIndex:(unsigned long long)arg0;
- (void)clipMusic:(id)arg0;
- (void)toggleMusicFavorite:(id)arg0;
- (id)contextMenuActionsWithItem:(id)arg0;
- (void)didTriggerMenu:(id)arg0 withItem:(id)arg1;
- (id)itemsFromMusicList:(id)arg0;
- (id)bizHandler;
- (BOOL)contextMenuEnabled:(id)arg0;
- (id)itemWithMusic:(id)arg0;
- (void)selectMusicItem:(id)arg0;
- (void)trackItemDeselectAtIndex:(unsigned long long)arg0;
- (void)updateTrackInfoOnDeselectItem:(id)arg0;
- (id)preSelectItem;
- (void)updateTrackInfoOnSelectIndex:(unsigned long long)arg0;
- (void)trackItemSelectAtIndex:(unsigned long long)arg0;
- (void)downloadMusicAtIndex:(unsigned long long)arg0;
- (void)setPreSelectItem:(id)arg0;
- (BOOL)enableStreamDownload;
- (id)trackedIds;
- (id)initWithRepository:(id)arg0 useCase:(id)arg1 bizHandler:(id)arg2;
- (void)setEnableStreamDownload:(BOOL)arg0;
- (void)setItemEnableDeselect:(BOOL)arg0;
- (void)setBizHandler:(id)arg0;
- (void)setEmptyText:(id)arg0;
- (void)setTrackedIds:(id)arg0;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void)setItems:(id)arg0;
- (id)useCase;
- (void).cxx_destruct;
- (id)items;
- (void)fetchData;
- (void)reloadData;
- (id)identifier;
- (void)setUseCase:(id)arg0;
- (id)title;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setRepository:(id)arg0;
- (id)repository;
- (void)setIdentifier:(id)arg0;
- (void)setTitle:(id)arg0;
- (long long)uiState;
- (void)setUiState:(long long)arg0;

@end
