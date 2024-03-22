//
//     Generated by private class-dump
//

@class UIView, IESLiveWaitingListUser, NSString, IESLivePKGuestInteractiveListView, UIImageView, UIButton, IESLivePKGuestApplyListBottomView, IESLivePKGuestApplyListPopUpViewConfig, UILabel;
@protocol IESLivePKGuestApplyListPopUpViewDelegate, IESLivePKGuestApplyListPopUpViewDataSource, IESLiveCompoundSubscription;

@interface IESLivePKGuestApplyListPopUpView : UIView <UITableViewDelegate, UITableViewDataSource> {
    IESLivePKGuestApplyListPopUpViewConfig *_config;
    id<IESLivePKGuestApplyListPopUpViewDelegate> _delegate;
    UIView *_containerView;
    UIView *_headerContainerView;
    UIImageView *_topLeftIamgeView;
    UILabel *_mainTitleLabel;
    UIButton *_linkMicBtn;
    UIView *_lineView;
    IESLivePKGuestInteractiveListView *_applyListView;
    id<IESLivePKGuestApplyListPopUpViewDataSource> _dataSource;
    id<IESLiveCompoundSubscription> _disposable;
    IESLivePKGuestApplyListBottomView *_bottomInfoView;
    UIView *_applyListHeaderView;
    UILabel *_applyListHeaderLeftLabel;
    UILabel *_applyListHeaderRightLabel;
    IESLiveWaitingListUser *_waitingUser;
}

@property (weak, nonatomic) id<IESLivePKGuestApplyListPopUpViewDelegate> delegate;
@property (retain, nonatomic) IESLivePKGuestApplyListPopUpViewConfig *config;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *headerContainerView;
@property (retain, nonatomic) UIImageView *topLeftIamgeView;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UIButton *linkMicBtn;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) IESLivePKGuestInteractiveListView *applyListView;
@property (weak, nonatomic) id<IESLivePKGuestApplyListPopUpViewDataSource> dataSource;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) IESLivePKGuestApplyListBottomView *bottomInfoView;
@property (retain, nonatomic) UIView *applyListHeaderView;
@property (retain, nonatomic) UILabel *applyListHeaderLeftLabel;
@property (retain, nonatomic) UILabel *applyListHeaderRightLabel;
@property (retain, nonatomic) IESLiveWaitingListUser *waitingUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (id)mainTitleLabel;
- (void)setMainTitleLabel:(id)arg0;
- (id)bottomInfoView;
- (void)setBottomInfoView:(id)arg0;
- (id)waitingUser;
- (void)updateTopAreaUI;
- (id)applyListHeaderLeftLabel;
- (void)bindDataProvider;
- (id)applyListView;
- (void)setWaitingUser:(id)arg0;
- (BOOL)p_isSortByApplyTime;
- (void)requestActivityForSite:(unsigned long long)arg0;
- (void)setTopLeftIamgeView:(id)arg0;
- (id)topLeftIamgeView;
- (void)setLinkMicBtn:(id)arg0;
- (void)setupApplyListUI;
- (void)p_initApplyListView;
- (void)showUserPreView:(id)arg0 trackerLabel:(id)arg1;
- (void)setApplyListView:(id)arg0;
- (id)linkMicBtn;
- (void)setApplyListHeaderLeftLabel:(id)arg0;
- (id)applyListHeaderRightLabel;
- (id)p_normalApplyUserList;
- (id)applyListHeaderView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 delegate:(id)arg1 dataSource:(id)arg2;
- (id)p_getProperSubStringWithEmojiString:(id)arg0 limitLength:(long long)arg1;
- (void)setApplyListHeaderView:(id)arg0;
- (void)setApplyListHeaderRightLabel:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (id)dataSource;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)setConfig:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)config;
- (void)updateWithConfig:(id)arg0;
- (void)setContainerView:(id)arg0;
- (id)delegate;
- (id)containerView;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (id)headerContainerView;
- (void)setHeaderContainerView:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (void)setupUI;

@end
