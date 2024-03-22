//
//     Generated by private class-dump
//

@class UITableView, AWESchoolInfoEditModel, UITableViewCell, NSString, UIView, NSMutableArray, UIButton;
@protocol AWEProfileEditViewModelProtocol, AWESettingsTableViewCellProtocol;

@interface AWESchoolInfoEditViewController : UIViewController <AWEUserMessage, AWERouterViewControllerProtocol, UITableViewDataSource, UITableViewDelegate, AFDSchoolInfoEditViewControllerProtocol> {
    BOOL _hasChangedSchoolInfo;
    id<AWEProfileEditViewModelProtocol> _viewModel;
    id /* block */ _submitBlock;
    UITableView *_tableView;
    UIButton *_saveButton;
    UIButton *_emptyButton;
    NSMutableArray *_cellArray;
    UITableViewCell<AWESettingsTableViewCellProtocol> *_schoolCell;
    UITableViewCell<AWESettingsTableViewCellProtocol> *_collegeCell;
    UITableViewCell<AWESettingsTableViewCellProtocol> *_yearCell;
    UITableViewCell<AWESettingsTableViewCellProtocol> *_educationCell;
    UITableViewCell *_lineCell;
    UITableViewCell<AWESettingsTableViewCellProtocol> *_visibleCell;
    UIView *_maskView;
    AWESchoolInfoEditModel *_editModel;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIButton *saveButton;
@property (retain, nonatomic) UIButton *emptyButton;
@property (retain, nonatomic) NSMutableArray *cellArray;
@property (retain, nonatomic) UITableViewCell<AWESettingsTableViewCellProtocol> *schoolCell;
@property (retain, nonatomic) UITableViewCell<AWESettingsTableViewCellProtocol> *collegeCell;
@property (retain, nonatomic) UITableViewCell<AWESettingsTableViewCellProtocol> *yearCell;
@property (retain, nonatomic) UITableViewCell<AWESettingsTableViewCellProtocol> *educationCell;
@property (retain, nonatomic) UITableViewCell *lineCell;
@property (retain, nonatomic) UITableViewCell<AWESettingsTableViewCellProtocol> *visibleCell;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) AWESchoolInfoEditModel *editModel;
@property (retain, nonatomic) id<AWEProfileEditViewModelProtocol> viewModel;
@property (copy, nonatomic) id /* block */ submitBlock;
@property (nonatomic) BOOL hasChangedSchoolInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishUpdateAwemeUser;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (BOOL)transition_enableCustomActionForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (void)transition_performCustomActionForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (void)setSubmitBlock:(id /* block */)arg0;
- (id /* block */)submitBlock;
- (void)setStatusBarBackgroundColor:(id)arg0;
- (void)p_setupUI;
- (void)showMaskView;
- (void)p_addObserver;
- (id)cellArray;
- (void)setCellArray:(id)arg0;
- (id)editModel;
- (id)emptyButton;
- (void)setEmptyButton:(id)arg0;
- (void)setEditModel:(id)arg0;
- (void)__setupBottomButton;
- (void)emptyButtonTapped;
- (BOOL)hasChangedSchoolInfo;
- (id)schoolCell;
- (id)collegeCell;
- (id)yearCell;
- (id)visibleCell;
- (id)educationCell;
- (void)changedSchoolInfo;
- (void)hiddenMaskView;
- (id)submitSchoolInfoDic;
- (void)submitWithParam:(id)arg0;
- (void)showAlertViewWithTitle:(id)arg0 confirmTitle:(id)arg1 cancelTitle:(id)arg2 confirmBlock:(id /* block */)arg3 cancelBlock:(id /* block */)arg4;
- (void)showAlertViewWithTitle:(id)arg0 message:(id)arg1 confirmTitle:(id)arg2 cancelTitle:(id)arg3 confirmBlock:(id /* block */)arg4 cancelBlock:(id /* block */)arg5;
- (void)setHasChangedSchoolInfo:(BOOL)arg0;
- (id)lineCell;
- (void)selectVisibleType;
- (void)showSelectSchoolViewController;
- (void)selectCollege;
- (void)selectYear;
- (void)selectEducation;
- (long long)editCellStyle;
- (BOOL)updateSucceed;
- (void)setSchoolCell:(id)arg0;
- (void)setCollegeCell:(id)arg0;
- (void)setYearCell:(id)arg0;
- (void)setEducationCell:(id)arg0;
- (void)setLineCell:(id)arg0;
- (void)setVisibleCell:(id)arg0;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg0;
- (id)maskView;
- (void)setViewModel:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setMaskView:(id)arg0;
- (id)placeholderString;
- (id)saveButton;
- (void)setSaveButton:(id)arg0;
- (void)backButtonTapped;
- (void)saveButtonTapped;

@end