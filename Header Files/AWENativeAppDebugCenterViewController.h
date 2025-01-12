//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, DUXNavigationBar, DUXNavigationBarImageAction, NSDictionary, UITableView, DUXSwitch, DUXButton, UILabel;
@protocol AWENativeAppDebugCenterDelegate;

@interface AWENativeAppDebugCenterViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEAboutEaterEggTableViewProtocol> {
    BOOL _isExistTestVersion;
    BOOL _isScanSchemaValid;
    long long _localVersionType;
    NSDictionary *_selectLatestVersionInfo;
    id<AWENativeAppDebugCenterDelegate> _delegate;
    DUXNavigationBar *_duxNaviBar;
    DUXNavigationBarImageAction *_duxImageAction;
    DUXSwitch *_versionTypeSwitch;
    UILabel *_versionTypeLabel;
    UIView *_groudView;
    UIView *_line;
    UITableView *_tableView;
    DUXButton *_deleteButton;
    UILabel *_debugLabel;
    DUXSwitch *_debugSwitch;
    NSArray *_dataSource;
    NSArray *_secondaryDataSource;
    NSString *_appID;
    NSString *_appName;
    NSString *_appTypeStr;
    NSString *_schemaPrefixStr;
    long long _appType;
}

@property (retain, nonatomic) DUXNavigationBar *duxNaviBar;
@property (retain, nonatomic) DUXNavigationBarImageAction *duxImageAction;
@property (retain, nonatomic) DUXSwitch *versionTypeSwitch;
@property (retain, nonatomic) UILabel *versionTypeLabel;
@property (retain, nonatomic) UIView *groudView;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) DUXButton *deleteButton;
@property (retain, nonatomic) UILabel *debugLabel;
@property (retain, nonatomic) DUXSwitch *debugSwitch;
@property (nonatomic) BOOL isExistTestVersion;
@property (nonatomic) BOOL isScanSchemaValid;
@property (copy, nonatomic) NSArray *dataSource;
@property (copy, nonatomic) NSArray *secondaryDataSource;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appTypeStr;
@property (copy, nonatomic) NSString *schemaPrefixStr;
@property (nonatomic) long long appType;
@property (nonatomic) long long localVersionType;
@property (copy, nonatomic) NSDictionary *selectLatestVersionInfo;
@property (weak, nonatomic) id<AWENativeAppDebugCenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onBackButtonClicked;
- (void)setDuxNaviBar:(id)arg0;
- (id)duxNaviBar;
- (void)setDuxImageAction:(id)arg0;
- (id)duxImageAction;
- (void)setAppTypeStr:(id)arg0;
- (id)appTypeStr;
- (void)openCameraForScan;
- (id)versionTypeSwitch;
- (long long)localVersionType;
- (void)requestForTestVersionTypeNeedShowToast:(BOOL)arg0;
- (void)buildDataSourceNeedReload:(BOOL)arg0 latestVersionInfo:(id)arg1 needUpdateLatestVersion:(BOOL)arg2;
- (id)debugSwitch;
- (id)groudView;
- (id)versionTypeLabel;
- (BOOL)isExistTestVersion;
- (BOOL)isScanSchemaValid;
- (void)setIsScanSchemaValid:(BOOL)arg0;
- (id)selectLatestVersionInfo;
- (void)setSecondaryDataSource:(id)arg0;
- (void)TapDeleteButton;
- (void)versionTypeSwitchOnChange;
- (void)setIsExistTestVersion:(BOOL)arg0;
- (void)updateEasterEggUserDefaultsForParams:(id)arg0;
- (long long)checkSchemaValid:(id)arg0;
- (void)getSchemaFromURL:(id)arg0 completion:(id /* block */)arg1;
- (void)scanCodeWithModel:(id)arg0 completion:(id /* block */)arg1;
- (id)schemaPrefixStr;
- (id)secondaryDataSource;
- (id)initWithAppID:(id)arg0 appName:(id)arg1 appType:(long long)arg2;
- (void)setLocalVersionType:(long long)arg0;
- (void)setSelectLatestVersionInfo:(id)arg0;
- (void)setVersionTypeSwitch:(id)arg0;
- (void)setVersionTypeLabel:(id)arg0;
- (void)setGroudView:(id)arg0;
- (void)setDebugSwitch:(id)arg0;
- (void)setSchemaPrefixStr:(id)arg0;
- (long long)appType;
- (void)setAppName:(id)arg0;
- (id)appName;
- (id)debugLabel;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void)setAppID:(id)arg0;
- (void)setDeleteButton:(id)arg0;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (long long)preferredStatusBarStyle;
- (id)deleteButton;
- (id)delegate;
- (id)appID;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)setAppType:(long long)arg0;
- (id)line;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (void)setDebugLabel:(id)arg0;
- (void)setLine:(id)arg0;
- (void)setupUI;

@end
