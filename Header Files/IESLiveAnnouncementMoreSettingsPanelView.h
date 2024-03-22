//
//     Generated by private class-dump
//

@class IESLiveAnnouncementFansGroupRemindView, NSString, IESLiveAnnouncementViewModel, NSMutableArray, UITableView;
@protocol IESLiveAnnouncementMoreSettingDelegate;

@interface IESLiveAnnouncementMoreSettingsPanelView : UIView <UITableViewDelegate, UITableViewDataSource> {
    id<IESLiveAnnouncementMoreSettingDelegate> _delegate;
    UITableView *_tableView;
    NSMutableArray *_funcArray;
    IESLiveAnnouncementViewModel *_viewModel;
    IESLiveAnnouncementFansGroupRemindView *_fansGroupView;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSMutableArray *funcArray;
@property (retain, nonatomic) IESLiveAnnouncementViewModel *viewModel;
@property (retain, nonatomic) IESLiveAnnouncementFansGroupRemindView *fansGroupView;
@property (weak, nonatomic) id<IESLiveAnnouncementMoreSettingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configItems;
- (id)funcArray;
- (void)onCancelButtonTapped;
- (void)onConfirmButtonTapped;
- (id)fansGroupView;
- (void)setFuncArray:(id)arg0;
- (void)setFansGroupView:(id)arg0;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (void)setDelegate:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1;
- (void)setUpUI;

@end
