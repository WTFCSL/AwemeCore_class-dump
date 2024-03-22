//
//     Generated by private class-dump
//

@class NSArray, NSString, UITableView;

@interface IESLivePlaybackPortraitSelectTableView : UIView <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate> {
    id /* block */ _selectedBlock;
    id /* block */ _dismissBlock;
    id /* block */ _cancelBlock;
    UITableView *_tableView;
    NSArray *_list;
    long long _selectIdx;
    long long _showStyle;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *list;
@property (nonatomic) long long selectIdx;
@property (readonly, nonatomic) double tableViewHeight;
@property (nonatomic) long long showStyle;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)showStyle;
- (void)setShowStyle:(long long)arg0;
- (void)setSelectedBlock:(id /* block */)arg0;
- (id /* block */)selectedBlock;
- (long long)selectIdx;
- (void)setSelectIdx:(long long)arg0;
- (void)dismissSelectTableView;
- (void)showSelectTableView;
- (void)updateDataList:(id)arg0 initialIndex:(long long)arg1;
- (void)updateDataList:(id)arg0;
- (double)tableViewBottom;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (id /* block */)cancelBlock;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg0;
- (id)tableView;
- (id)list;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setList:(id)arg0;
- (void)setup;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)setCancelBlock:(id /* block */)arg0;
- (void)setupSubviews;
- (double)viewHeight;
- (double)tableViewHeight;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;

@end
