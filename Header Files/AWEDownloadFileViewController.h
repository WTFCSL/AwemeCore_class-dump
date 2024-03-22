//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSMutableArray, UITableView;

@interface AWEDownloadFileViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, QLPreviewControllerDataSource> {
    BOOL _isPAY;
    id /* block */ _disappearNewDownloadFileViewBlock;
    NSDictionary *_params;
    NSString *_directory;
    NSString *_subDirectory;
    UITableView *_tableView;
    NSMutableArray *_files;
}

@property (copy, nonatomic) NSString *directory;
@property (copy, nonatomic) NSString *subDirectory;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSMutableArray *files;
@property (copy, nonatomic) id /* block */ disappearNewDownloadFileViewBlock;
@property (retain, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL isPAY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)p_setupUI;
- (void)p_configFilesArray;
- (void)p_checkIfEmpty;
- (BOOL)isPAY;
- (id /* block */)disappearNewDownloadFileViewBlock;
- (void)p_quickLookFileAtIndex:(long long)arg0;
- (id)p_targetDirectory;
- (id)subDirectory;
- (void)setDisappearNewDownloadFileViewBlock:(id /* block */)arg0;
- (void)setIsPAY:(BOOL)arg0;
- (void)setSubDirectory:(id)arg0;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg0;
- (id)previewController:(id)arg0 previewItemAtIndex:(long long)arg1;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)directory;
- (id)params;
- (id)initWithParams:(id)arg0;
- (void)viewDidLoad;
- (void)setDirectory:(id)arg0;
- (void)setParams:(id)arg0;
- (id)files;
- (void)setFiles:(id)arg0;

@end
