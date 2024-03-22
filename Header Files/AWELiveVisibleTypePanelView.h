//
//     Generated by private class-dump
//

@class AWELiveVisibleTypeDataSource, HTSEventContext, NSArray, NSString, UITableView;

@interface AWELiveVisibleTypePanelView : UIView <UITableViewDelegate, UITableViewDataSource> {
    BOOL _isVip;
    BOOL _isShowNotPreviewOption;
    double _panelHeight;
    unsigned long long _type;
    unsigned long long _liveType;
    UITableView *_tableView;
    AWELiveVisibleTypeDataSource *_dataSource;
    HTSEventContext *_trackContext;
    id /* block */ _selectedBlock;
    NSArray *_selectedUsers;
    id /* block */ _selectedPaidBlock;
    unsigned long long _paidVisibleType;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long liveType;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWELiveVisibleTypeDataSource *dataSource;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (nonatomic) BOOL isVip;
@property (retain, nonatomic) NSArray *selectedUsers;
@property (nonatomic) BOOL isShowNotPreviewOption;
@property (copy, nonatomic) id /* block */ selectedPaidBlock;
@property (nonatomic) unsigned long long paidVisibleType;
@property (nonatomic) double panelHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (double)panelHeight;
- (BOOL)isVip;
- (void)setIsVip:(BOOL)arg0;
- (void)setLiveType:(unsigned long long)arg0;
- (unsigned long long)liveType;
- (void)setPanelHeight:(double)arg0;
- (void)setSelectedBlock:(id /* block */)arg0;
- (id /* block */)selectedBlock;
- (id)initWithType:(unsigned long long)arg0 liveType:(unsigned long long)arg1 isVip:(BOOL)arg2 trackerContext:(id)arg3 DIContext:(id)arg4 selectedBlock:(id /* block */)arg5;
- (id)initPaidPanelWithVisibleType:(unsigned long long)arg0 selectedUsers:(id)arg1 isShowNotPreviewOption:(BOOL)arg2 trackerContext:(id)arg3 DIContext:(id)arg4 selectedBlock:(id /* block */)arg5;
- (unsigned long long)paidVisibleType;
- (BOOL)isShowNotPreviewOption;
- (void)setIsShowNotPreviewOption:(BOOL)arg0;
- (void)setPaidVisibleType:(unsigned long long)arg0;
- (id /* block */)selectedPaidBlock;
- (void)setSelectedPaidBlock:(id /* block */)arg0;
- (void)reload;
- (void)setDataSource:(id)arg0;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)dataSource;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (void)setupUI;
- (void)setupData;
- (id)selectedUsers;
- (void)setSelectedUsers:(id)arg0;

@end