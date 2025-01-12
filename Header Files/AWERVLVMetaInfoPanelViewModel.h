//
//     Generated by private class-dump
//

@class NSString, AWELVideoAlbumInfoModel, UITableView;

@interface AWERVLVMetaInfoPanelViewModel : AWERVLVBasePanelViewModel <UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource, AWERVLVFloatPanelProtocol, AWERVLVRightPushPanelProtocol> {
    UITableView *_tableView;
    AWELVideoAlbumInfoModel *_model;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWELVideoAlbumInfoModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshModel:(id)arg0;
- (void)panelDidLoad;
- (id)panelContentView;
- (double)pushPanelTopPadding;
- (void)setModel:(id)arg0;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)model;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)contentScrollView;

@end
