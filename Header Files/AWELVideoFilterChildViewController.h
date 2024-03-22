//
//     Generated by private class-dump
//

@class AWELVideoLibraryPageContext, NSArray, NSString, DUXVacantView, UITableView;

@interface AWELVideoFilterChildViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    BOOL _isHiddenTopCategory;
    NSArray *_categories;
    AWELVideoLibraryPageContext *_context;
    UITableView *_tableView;
    DUXVacantView *_errorView;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) DUXVacantView *errorView;
@property (nonatomic) BOOL isHiddenTopCategory;
@property (copy, nonatomic) NSArray *categories;
@property (retain, nonatomic) AWELVideoLibraryPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsHiddenTopCategory:(BOOL)arg0;
- (BOOL)isHiddenTopCategory;
- (void)showErrorView:(BOOL)arg0;
- (id)categories;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (void)setCategories:(id)arg0;
- (void)setContext:(id)arg0;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)context;
- (void)viewDidLoad;
- (void)setupUI;
- (id)errorView;
- (void)setErrorView:(id)arg0;

@end
