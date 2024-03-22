//
//     Generated by private class-dump
//

@class UILabel, NSString, NSNumber, UIView, NSMutableArray, UITableView;

@interface AWEBizDowngradeSettingViewController : UIViewController <AFDSettingSearchDelegate, UITableViewDataSource, UITableViewDelegate> {
    BOOL _needInvisibleToast;
    NSString *_enterFrom;
    UITableView *_tableView;
    NSMutableArray *_itemArray;
    UIView *_sectionFooterView;
    UILabel *_discriptionLabel;
    NSNumber *_preFluencySwitch;
    NSNumber *_prePowerSwitch;
    long long _highlightType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSMutableArray *itemArray;
@property (retain, nonatomic) UIView *sectionFooterView;
@property (retain, nonatomic) UILabel *discriptionLabel;
@property (readonly, copy, nonatomic) NSString *referString;
@property (retain, nonatomic) NSNumber *preFluencySwitch;
@property (retain, nonatomic) NSNumber *prePowerSwitch;
@property (nonatomic) long long highlightType;
@property (nonatomic) BOOL needInvisibleToast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)itemStatusWithSettingItem:(id)arg0;
+ (id)settingSearchRegisterDic;

- (id)referString;
- (void)setEnterFrom:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)enterFrom;
- (id)itemArray;
- (void)setItemArray:(id)arg0;
- (void)presentHalfScreenVC:(id)arg0 withView:(id)arg1;
- (void)setNeedInvisibleToast:(BOOL)arg0;
- (void)highlightCellIfNeeded;
- (BOOL)needInvisibleToast;
- (void)p_highlightCellIfNeeded;
- (void)highlightCellWithIndex:(id)arg0;
- (id)sectionFooterView;
- (id)p_highlightIndexPathWithType:(long long)arg0;
- (void)speedPerformancePageShow;
- (void)createDataSource;
- (void)setFooterView;
- (void)setPreFluencySwitch:(id)arg0;
- (id)powerSwitchNum;
- (void)setPrePowerSwitch:(id)arg0;
- (void)speedPerformancePageLeave;
- (id)discriptionLabel;
- (id)fluencyItem;
- (id)energyItem;
- (void)fluencySwitchValueChanged:(BOOL)arg0;
- (id)energyDetail;
- (void)didTapEnergyItem;
- (void)speedPerformanceButtonClick:(BOOL)arg0;
- (id)prepareSheetItemsOnVC:(id)arg0;
- (id)subtitleSelectItemModelWithTitle:(id)arg0 subtitle:(id)arg1 settingIndexValue:(long long)arg2 isSelected:(BOOL)arg3;
- (void)actionAfterTap;
- (id)selectItemModelWithTitle:(id)arg0 settingIndexValue:(long long)arg1 isSelected:(BOOL)arg2;
- (id)preFluencySwitch;
- (id)prePowerSwitch;
- (void)setSectionFooterView:(id)arg0;
- (void)setDiscriptionLabel:(id)arg0;
- (long long)highlightType;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (void)setHighlightType:(long long)arg0;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;

@end