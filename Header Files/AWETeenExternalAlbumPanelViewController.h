//
//     Generated by private class-dump
//

@class UIButton, NSString, AWETeenExternalAlbumTitleView, AWETeenExternalAlbumDataController, UITableView;

@interface AWETeenExternalAlbumPanelViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    UITableView *_tableView;
    AWETeenExternalAlbumDataController *_dataController;
    AWETeenExternalAlbumTitleView *_titleView;
    UIButton *_closeButton;
    NSString *_anchorAwemeID;
}

@property (retain, nonatomic) AWETeenExternalAlbumDataController *dataController;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWETeenExternalAlbumTitleView *titleView;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) NSString *anchorAwemeID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (void)setDataController:(id)arg0;
- (id)initWithDataController:(id)arg0;
- (void)loadPrevious;
- (void)setAnchorAwemeID:(id)arg0;
- (id)anchorAwemeID;
- (void)scrollToCellAtIndex:(long long)arg0;
- (void)loadMore;
- (void)closeButtonDidClick:(id)arg0;
- (void)reloadWithAnchorAweme:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setTitleView:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)viewDidLoad;
- (id)titleView;
- (BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1;
- (void)setupUI;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)dataController;

@end