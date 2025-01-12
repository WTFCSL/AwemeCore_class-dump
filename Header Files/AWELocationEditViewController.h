//
//     Generated by private class-dump
//

@class UITableViewCell, NSString, NSArray, AWELocationEditResult, AWELocationServicePersistModel, NSDictionary, AWEProfileLocationSegment, NSMutableArray, UITableView, AWEUILoadingView;
@protocol AWESettingsTableViewCellProtocol;

@interface AWELocationEditViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    BOOL _needCurrentLocation;
    BOOL _isInitial;
    BOOL _hasHideLocation;
    BOOL _isFromH5;
    BOOL _isBecomeActiveFromLocationPermission;
    BOOL _isSubpage;
    NSArray *_locationSegments;
    AWELocationEditResult *_editResult;
    id /* block */ _completionBlock;
    id /* block */ _hideBlock;
    UITableView *_tableView;
    UITableViewCell<AWESettingsTableViewCellProtocol> *_hideLocationCell;
    UITableViewCell *_currentLocationHeaderCell;
    UITableViewCell<AWESettingsTableViewCellProtocol> *_currentLocationCell;
    UITableViewCell *_otherLocationCell;
    UITableViewCell *_emptyCell;
    NSMutableArray *_cellArray;
    NSArray *_sectionTitles;
    NSDictionary *_sections;
    AWEProfileLocationSegment *_previousSelectedSegment;
    AWELocationServicePersistModel *_placemark;
    AWEUILoadingView *_loadingView;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UITableViewCell<AWESettingsTableViewCellProtocol> *hideLocationCell;
@property (retain, nonatomic) UITableViewCell *currentLocationHeaderCell;
@property (retain, nonatomic) UITableViewCell<AWESettingsTableViewCellProtocol> *currentLocationCell;
@property (retain, nonatomic) UITableViewCell *otherLocationCell;
@property (retain, nonatomic) UITableViewCell *emptyCell;
@property (retain, nonatomic) NSMutableArray *cellArray;
@property (retain, nonatomic) NSArray *sectionTitles;
@property (retain, nonatomic) NSDictionary *sections;
@property (retain, nonatomic) AWEProfileLocationSegment *previousSelectedSegment;
@property (retain, nonatomic) AWELocationServicePersistModel *placemark;
@property (nonatomic) BOOL isFromH5;
@property (nonatomic) BOOL isBecomeActiveFromLocationPermission;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL isSubpage;
@property (nonatomic) BOOL needCurrentLocation;
@property (nonatomic) BOOL isInitial;
@property (nonatomic) BOOL hasHideLocation;
@property (retain, nonatomic) NSArray *locationSegments;
@property (retain, nonatomic) AWELocationEditResult *editResult;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ hideBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (void)setIsInitial:(BOOL)arg0;
- (void)setStatusBarBackgroundColor:(id)arg0;
- (void)p_setupUI;
- (id /* block */)hideBlock;
- (void)setHideBlock:(id /* block */)arg0;
- (void)_onApplicationDidBecomeActiveNotification:(id)arg0;
- (BOOL)hasHideLocation;
- (BOOL)hasLocationPermission;
- (id)cellArray;
- (void)setCellArray:(id)arg0;
- (void)__openSettings;
- (void)setIsBecomeActiveFromLocationPermission:(BOOL)arg0;
- (BOOL)isBecomeActiveFromLocationPermission;
- (id)emptyCell;
- (id)initFromH5;
- (void)setNeedCurrentLocation:(BOOL)arg0;
- (void)setIsFromH5:(BOOL)arg0;
- (BOOL)isSubpage;
- (BOOL)isFromH5;
- (void)fetchDataFromGecko;
- (id)locationSegments;
- (void)setLocationSegments:(id)arg0;
- (void)configCurrentLocationLabelWithPlacemark:(id)arg0;
- (void)getCurrentPlacemarkWitchCompletion:(id /* block */)arg0;
- (BOOL)needCurrentLocation;
- (id)getLocationSegmentWithIndexPath:(id)arg0;
- (id)previousSelectedSegment;
- (void)clearEditResultWithLocationSegment:(id)arg0;
- (void)setPreviousSelectedSegment:(id)arg0;
- (void)configEditResultWithLocationSegment:(id)arg0;
- (id)editResult;
- (void)setEditResult:(id)arg0;
- (void)setIsSubpage:(BOOL)arg0;
- (void)popAllLocationEditViewController;
- (id)hideLocationCell;
- (id)currentLocationHeaderCell;
- (id)currentLocationCell;
- (id)otherLocationCell;
- (void)selectHideLocation;
- (void)__setupLocation;
- (void)configEditResult:(id)arg0 withPlacemark:(id)arg1;
- (id)__locationCertWithToken:(id)arg0;
- (void)generateSections;
- (void)setHasHideLocation:(BOOL)arg0;
- (void)setHideLocationCell:(id)arg0;
- (void)setCurrentLocationHeaderCell:(id)arg0;
- (void)setCurrentLocationCell:(id)arg0;
- (void)setOtherLocationCell:(id)arg0;
- (void)setEmptyCell:(id)arg0;
- (id)sections;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id /* block */)completionBlock;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setCompletionBlock:(id /* block */)arg0;
- (id)sectionTitles;
- (void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(long long)arg2;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)setupDataSource;
- (void)setSections:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (BOOL)isInitial;
- (void)viewDidLoad;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (id)placemark;
- (void)setPlacemark:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)setSectionTitles:(id)arg0;
- (void)selectCurrentLocation;
- (void)back;

@end
