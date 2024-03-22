//
//     Generated by private class-dump
//

@class UIView, IESLiveTableViewCellDisplayTrackHelper, NSString, IESLivePKSpeedAutoMatchViewModel, UIButton, UITableView, IESLiveAnimatedImageView, UILabel, UIScrollView;
@protocol IESLiveCompoundSubscription, IESLiveRoomServiceAdapter;

@interface IESLivePKSpeedAutoMatchPanel : HTSLivePopUpView <UITableViewDelegate, UITableViewDataSource, IESLiveTableViewCellDisplayTrackHelperDelegate> {
    BOOL _shouldShowDialog;
    BOOL _isSticky;
    IESLivePKSpeedAutoMatchViewModel *_viewModel;
    UIView *_speedContainerView;
    UILabel *_predictWaitLabel;
    UILabel *_timeLabel;
    UILabel *_processExplainLabel;
    UILabel *_titleLabel;
    UIView *_speedUpView;
    UIScrollView *_scrollView;
    UITableView *_tableView;
    IESLiveAnimatedImageView *_speedAnimView;
    id<IESLiveCompoundSubscription> _disposable;
    id<IESLiveRoomServiceAdapter> _room;
    UIButton *_showDialogButton;
    IESLiveTableViewCellDisplayTrackHelper *_tableViewTrackHelper;
}

@property (retain, nonatomic) IESLivePKSpeedAutoMatchViewModel *viewModel;
@property (retain, nonatomic) UIView *speedContainerView;
@property (retain, nonatomic) UILabel *predictWaitLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *processExplainLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *speedUpView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) IESLiveAnimatedImageView *speedAnimView;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> room;
@property (retain, nonatomic) UIButton *showDialogButton;
@property (nonatomic) BOOL shouldShowDialog;
@property (nonatomic) BOOL isSticky;
@property (retain, nonatomic) IESLiveTableViewCellDisplayTrackHelper *tableViewTrackHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsSticky:(BOOL)arg0;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)bindAction;
- (BOOL)shouldShowDialog;
- (void)setUpData;
- (BOOL)trackDisplayedCellWithIndexPath:(id)arg0;
- (void)layoutBaseUI;
- (id)tableViewTrackHelper;
- (void)setTableViewTrackHelper:(id)arg0;
- (id)countDownStr:(long long)arg0;
- (void)setSpeedContainerView:(id)arg0;
- (void)setPredictWaitLabel:(id)arg0;
- (id)speedContainerView;
- (id)predictWaitLabel;
- (void)speedButtonClicked;
- (void)setProcessExplainLabel:(id)arg0;
- (id)processExplainLabel;
- (void)setSpeedUpView:(id)arg0;
- (id)speedUpView;
- (id)speedAnimView;
- (void)setSpeedAnimView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 roomModel:(id)arg1 DIContext:(id)arg2;
- (void)updateWithViewModel;
- (void)updateStickyTitleWithRemainTime:(long long)arg0;
- (void)showRemindOptionPanel;
- (void)updateViewWithRemainTime:(long long)arg0;
- (void)fetchInviteList;
- (void)updateSpeedUpView;
- (void)didTapShowDialogButton;
- (void)setShowDialogButton:(id)arg0;
- (void)showSpeedDialog;
- (void)setShouldShowDialog:(BOOL)arg0;
- (id)showDialogButton;
- (void)setScrollView:(id)arg0;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)titleLabel;
- (void)setViewModel:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (void)setTimeLabel:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (id)scrollView;
- (id)timeLabel;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (BOOL)isSticky;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)didTapCancelButton;

@end