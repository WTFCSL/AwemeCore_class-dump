//
//     Generated by private class-dump
//

@class NSArray, NSString, UITableView;

@interface IESLiveAnchorPerfRemindProblemRecordView : UIView <UITableViewDataSource, UITableViewDelegate> {
    NSArray *_dataSource;
    UITableView *_tableView;
}

@property (retain, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showWithData:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void)dismiss;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;

@end
