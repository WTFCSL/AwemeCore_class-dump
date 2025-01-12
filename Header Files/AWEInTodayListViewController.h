//
//     Generated by private class-dump
//

@class UIView, AWEInTodayAggregateConfig, NSString, AWEInTodaySchemaData, UIButton, AWEMemoriesPlayerEmptyView, NSMutableArray, NSObject, UICollectionView, UILabel, ACCButton;
@protocol AWEMemoriesPlayerDataControllerProtocol;

@interface AWEInTodayListViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWEMemoriesPlayerGridViewControllerProtocol> {
    BOOL _localAlbumHasShowed;
    BOOL _isSelectedState;
    BOOL _selectedStateFromPlayer;
    BOOL _isLoading;
    UIButton *_backButton;
    UIButton *_allSelectButton;
    UIView *_navBar;
    UICollectionView *_collectionView;
    UIButton *_moreButton;
    UIButton *_selectButton;
    UILabel *_selectedCountLabel;
    UIButton *_cancelButton;
    NSMutableArray *_memoriesList;
    unsigned long long _currentIndex;
    id /* block */ _clickAction;
    id /* block */ _publishAction;
    NSObject<AWEMemoriesPlayerDataControllerProtocol> *_dataController;
    AWEMemoriesPlayerEmptyView *_emptyView;
    id /* block */ _dismissHandler;
    NSMutableArray *_selectedModels;
    UIView *_bottomBar;
    ACCButton *_publishButton;
    ACCButton *_publishDiaryButton;
    AWEInTodaySchemaData *_schemaData;
    AWEInTodayAggregateConfig *_aggregateConfig;
    id /* block */ _shootAction;
}

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *allSelectButton;
@property (retain, nonatomic) UIView *navBar;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) UIButton *selectButton;
@property (retain, nonatomic) UILabel *selectedCountLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) NSMutableArray *memoriesList;
@property (nonatomic) unsigned long long currentIndex;
@property (copy, nonatomic) id /* block */ clickAction;
@property (copy, nonatomic) id /* block */ publishAction;
@property (nonatomic) BOOL localAlbumHasShowed;
@property (weak, nonatomic) NSObject<AWEMemoriesPlayerDataControllerProtocol> *dataController;
@property (retain, nonatomic) AWEMemoriesPlayerEmptyView *emptyView;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (nonatomic) BOOL isSelectedState;
@property (retain, nonatomic) NSMutableArray *selectedModels;
@property (retain, nonatomic) UIView *bottomBar;
@property (retain, nonatomic) ACCButton *publishButton;
@property (retain, nonatomic) ACCButton *publishDiaryButton;
@property (nonatomic) BOOL selectedStateFromPlayer;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) AWEInTodaySchemaData *schemaData;
@property (retain, nonatomic) AWEInTodayAggregateConfig *aggregateConfig;
@property (copy, nonatomic) id /* block */ shootAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)useAvatarIfNeed:(id)arg0;
+ (struct CGSize { double x0; double x1; })cellSize;
+ (double)cellSpacing;

- (id /* block */)clickAction;
- (void)setDataController:(id)arg0;
- (void)setClickAction:(id /* block */)arg0;
- (void)showEmptyView;
- (void)backAction:(id)arg0;
- (id)publishButton;
- (void)setPublishButton:(id)arg0;
- (id)memoriesList;
- (void)bindObserve;
- (void)addCollectionView;
- (id)selectedModels;
- (id /* block */)publishAction;
- (void)prepareSelected;
- (void)updateButtonState;
- (BOOL)isSelectedState;
- (void)addSelectedModel:(id)arg0;
- (void)trackClickItemWithModel:(id)arg0 manual:(BOOL)arg1;
- (id)publishDiaryButton;
- (void)addBackButton;
- (void)addMoreButton;
- (void)addSelectedCountLabel;
- (void)addSelectButton;
- (void)addBottomBar;
- (void)addAllSelectButton;
- (void)selectedCountChanged;
- (void)updateCollectionViewConstraints;
- (id)allSelectButton;
- (id)selectedCountLabel;
- (void)updateSelectedModelsWhenSourceChanged;
- (void)setMemoriesList:(id)arg0;
- (void)setIsSelectedState:(BOOL)arg0;
- (void)dismissEmptyView;
- (id /* block */)shootAction;
- (void)setShootAction:(id /* block */)arg0;
- (BOOL)localAlbumHasShowed;
- (void)hideLocalAlbum;
- (void)showLocalAlbum;
- (void)refreshVisibleCells;
- (void)setSelectedStateFromPlayer:(BOOL)arg0;
- (void)removeAllSelectedModels;
- (BOOL)hasSelectedAllModels;
- (void)addAllSelectedModels;
- (BOOL)selectedStateFromPlayer;
- (BOOL)beyondLimitedCount;
- (BOOL)didNotSelected;
- (void)updatePublishButton:(id)arg0 selected:(BOOL)arg1;
- (void)setLocalAlbumHasShowed:(BOOL)arg0;
- (id)aggregateConfig;
- (BOOL)hasSelectedModel:(id)arg0;
- (unsigned long long)stateWithTileModel:(id)arg0;
- (void)removeSelectedModel:(id)arg0;
- (void)setSelectedModels:(id)arg0;
- (void)moreAction:(id)arg0;
- (void)allSelectButtonAction:(id)arg0;
- (void)cancelButtonAction:(id)arg0;
- (void)publishButtonTtileConfig;
- (void)publishButtonAction:(id)arg0;
- (void)publishDiaryButtonAction:(id)arg0;
- (id)initWithDataController:(id)arg0 currentIndex:(unsigned long long)arg1 isSelected:(BOOL)arg2 schemaData:(id)arg3 aggregateConfig:(id)arg4 clickAction:(id /* block */)arg5 publishAction:(id /* block */)arg6 shootAction:(id /* block */)arg7;
- (void)scrollTargetCellToCenterWithIndex:(long long)arg0;
- (id)fetchTargetCellWithIndex:(long long)arg0;
- (void)setTargetCellHidden:(BOOL)arg0 withIndex:(long long)arg1;
- (void)isLoading:(BOOL)arg0;
- (void)dismissHandler:(id /* block */)arg0;
- (long long)indexOfSelectedModel:(id)arg0;
- (void)setAllSelectButton:(id)arg0;
- (void)setSelectedCountLabel:(id)arg0;
- (void)setPublishAction:(id /* block */)arg0;
- (void)setPublishDiaryButton:(id)arg0;
- (void)setAggregateConfig:(id)arg0;
- (long long)limitCount;
- (BOOL)isLoading;
- (void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)setCancelButton:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)moreButton;
- (id)collectionView;
- (unsigned long long)currentIndex;
- (id)cancelButton;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setDismissHandler:(id /* block */)arg0;
- (void)setBottomBar:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (long long)preferredStatusBarStyle;
- (void)setCurrentIndex:(unsigned long long)arg0;
- (void)setMoreButton:(id)arg0;
- (id)bottomBar;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)setIsLoading:(BOOL)arg0;
- (void)viewDidLoad;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (id /* block */)dismissHandler;
- (void)setupUI;
- (id)emptyView;
- (void)setEmptyView:(id)arg0;
- (double)bottomBarHeight;
- (id)selectButton;
- (void)setSelectButton:(id)arg0;
- (void)setupFooter;
- (id)dataController;
- (void)addCancelButton;
- (void)selectButtonAction:(id)arg0;
- (id)schemaData;
- (id)navBar;
- (void)setNavBar:(id)arg0;
- (void)setSchemaData:(id)arg0;

@end
