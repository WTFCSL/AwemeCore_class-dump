//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, IESLiveTimeNoticeViewModel, NSString, UITableView;

@interface IESLiveTimeNoticeDateVerticalView : UIView <UITableViewDelegate, UITableViewDataSource> {
    id /* block */ _dismissBlock;
    UITableView *_tableView;
    NSArray *_selectedDays;
    NSDictionary *_daysMapper;
    IESLiveTimeNoticeViewModel *_viewModel;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *selectedDays;
@property (retain, nonatomic) NSDictionary *daysMapper;
@property (weak, nonatomic) IESLiveTimeNoticeViewModel *viewModel;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)selectedDays;
- (void)onCancelButtonTapped;
- (void)saveDateSelectResult;
- (id)daysMapper;
- (void)setSelectedDays:(id)arg0;
- (void)setDaysMapper:(id)arg0;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setViewModel:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1;
- (void)setUpUI;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;

@end
