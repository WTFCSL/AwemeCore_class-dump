//
//     Generated by private class-dump
//

@class NSString, AWEUserCenterWhoCanMessageMeDataController, UICollectionView;

@interface AWEUserCenterWhoCanMessageMeViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AWEUserCenterWhoCanMessageMeUpdateDataDelegate, AWERouterViewControllerProtocol> {
    BOOL _directlyExitPageAfterPopupDismiss;
    BOOL _useCardUIStyle;
    BOOL _needInvisibleToast;
    NSString *_enterFrom;
    AWEUserCenterWhoCanMessageMeDataController *_dataController;
    UICollectionView *_collectionView;
    NSString *_defaultOpen;
    NSString *_highlightID;
}

@property (retain, nonatomic) AWEUserCenterWhoCanMessageMeDataController *dataController;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSString *defaultOpen;
@property (nonatomic) BOOL directlyExitPageAfterPopupDismiss;
@property (nonatomic) BOOL useCardUIStyle;
@property (copy, nonatomic) NSString *highlightID;
@property (nonatomic) BOOL needInvisibleToast;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)enterFrom;
- (id)highlightID;
- (void)setHighlightID:(id)arg0;
- (void)backBtnClicked;
- (void)setDataController:(id)arg0;
- (BOOL)useCardUIStyle;
- (void)setUseCardUIStyle:(BOOL)arg0;
- (void)setNeedInvisibleToast:(BOOL)arg0;
- (void)addThemeChangeObserver;
- (void)p_didThemeChanged;
- (void)setDefaultOpen:(id)arg0;
- (void)highlightCellIfNeeded;
- (id)defaultOpen;
- (BOOL)needInvisibleToast;
- (void)p_highlightCellIfNeeded;
- (void)highlightCellWithIndex:(id)arg0;
- (BOOL)directlyExitPageAfterPopupDismiss;
- (void)setDirectlyExitPageAfterPopupDismiss:(BOOL)arg0;
- (void)__openChatBlockSettingIfNeed;
- (id)p_highlightIndexPathWithID:(id)arg0;
- (void)exitPage;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)reload;
- (id)init;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void)viewDidAppear:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(long long)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setCollectionView:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)reloadSections:(long long)arg0;
- (id)dataController;

@end
