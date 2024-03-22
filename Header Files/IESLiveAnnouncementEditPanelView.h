//
//     Generated by private class-dump
//

@class IESLiveWebpLoadingView, NSString, IESLiveAnnouncementCreateSuccessView, IESLiveActionSheetPresentViewController, UIButton, UITableView, NSMutableArray, IESLiveAnnouncementViewModel, IESLiveTimeNoticeViewModel;
@protocol IESLiveCalendarEventService;

@interface IESLiveAnnouncementEditPanelView : UIView <UITableViewDelegate, UITableViewDataSource, IESLiveAnnouncementTimeNoticeReaction, IESLiveAnnouncementMoreSettingDelegate, IESLiveAnnouncementEditContentCellDelegate> {
    BOOL _iskeyboardShown;
    UITableView *_tableView;
    NSMutableArray *_functionArray;
    IESLiveAnnouncementViewModel *_viewModel;
    IESLiveTimeNoticeViewModel *_timeNoticeViewModel;
    IESLiveActionSheetPresentViewController *_hostVC;
    IESLiveActionSheetPresentViewController *_timeSettingViewPresentor;
    IESLiveActionSheetPresentViewController *_dateViewPresentor;
    IESLiveActionSheetPresentViewController *_moreSettingsPresentor;
    id /* block */ _dismissBlock;
    id /* block */ _finishBlock;
    IESLiveWebpLoadingView *_loadingView;
    NSString *_backupAnnouncementContent;
    id<IESLiveCalendarEventService> _calendarService;
    IESLiveAnnouncementCreateSuccessView *_createSuccessView;
    UIButton *_submitButton;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSMutableArray *functionArray;
@property (retain, nonatomic) IESLiveAnnouncementViewModel *viewModel;
@property (retain, nonatomic) IESLiveTimeNoticeViewModel *timeNoticeViewModel;
@property (weak, nonatomic) IESLiveActionSheetPresentViewController *hostVC;
@property (retain, nonatomic) IESLiveActionSheetPresentViewController *timeSettingViewPresentor;
@property (retain, nonatomic) IESLiveActionSheetPresentViewController *dateViewPresentor;
@property (retain, nonatomic) IESLiveActionSheetPresentViewController *moreSettingsPresentor;
@property (nonatomic) BOOL iskeyboardShown;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (retain, nonatomic) NSString *backupAnnouncementContent;
@property (retain, nonatomic) id<IESLiveCalendarEventService> calendarService;
@property (retain, nonatomic) IESLiveAnnouncementCreateSuccessView *createSuccessView;
@property (retain, nonatomic) UIButton *submitButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)hostVC;
- (void)setHostVC:(id)arg0;
- (void)onBackButtonTapped;
- (void)setCalendarService:(id)arg0;
- (void)keyBoardWillShow:(id)arg0;
- (void)keyBoardWillHidden:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1 finishBlock:(id /* block */)arg2;
- (void)refreshSubmitButtonState;
- (BOOL)canDismissDirectly;
- (BOOL)iskeyboardShown;
- (id)functionArray;
- (id)openLiveTime;
- (id)weekSchedule;
- (id)announcementContent;
- (id)moreSettings;
- (void)deleteCurrentAnnouncement;
- (id)createSuccessView;
- (void)showCanlenderAlert;
- (void)setCreateSuccessView:(id)arg0;
- (void)doFinishCallback;
- (void)doCommitAction:(id /* block */)arg0;
- (void)setIskeyboardShown:(BOOL)arg0;
- (id)timeNoticeViewModel;
- (id)createTimeNoticeViewModel;
- (void)setTimeNoticeViewModel:(id)arg0;
- (void)setTimeSettingViewPresentor:(id)arg0;
- (id)datesStringWithSelectedDays:(id)arg0;
- (void)refreshMaskLayer:(id)arg0;
- (void)setDateViewPresentor:(id)arg0;
- (void)setMoreSettingsPresentor:(id)arg0;
- (id)strWithWeekDay:(long long)arg0;
- (void)saveCurrentAnnouncement;
- (id)timeSettingViewPresentor;
- (void)updateCellDetailText:(id)arg0;
- (id)dateViewPresentor;
- (id)moreSettingsPresentor;
- (void)saveToCalender;
- (void)openLiveTimeDataChanged:(id)arg0 update:(BOOL)arg1;
- (void)weekScheduleDataChanged:(id)arg0 update:(BOOL)arg1;
- (void)moreSettingPageShouldDismiss:(BOOL)arg0;
- (void)onTextChanged;
- (void)showWithHostVC:(id)arg0 viewModel:(id)arg1;
- (void)cancelCalender;
- (void)setFunctionArray:(id)arg0;
- (id)backupAnnouncementContent;
- (void)setBackupAnnouncementContent:(id)arg0;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)dismiss;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)calendarService;
- (void)setViewModel:(id)arg0;
- (void)submit;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1;
- (id /* block */)finishBlock;
- (void)setFinishBlock:(id /* block */)arg0;
- (id)submitButton;
- (void)setSubmitButton:(id)arg0;
- (void)setUpContent;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;

@end