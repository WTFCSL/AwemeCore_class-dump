//
//     Generated by private class-dump
//

@class NSMutableArray, NSString, NSArray, UILabel, UIView, UITableView;

@interface BDPListSubscribeContentView_HG : UIView <UITableViewDelegate, UITableViewDataSource> {
    UITableView *_tableView;
    id /* block */ _didUpdateSelectedCallback;
    UIView *_infoContainer;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    NSString *_title;
    NSString *_message;
    NSArray *_templateTitleList;
    NSArray *_templateInfoList;
    NSMutableArray *_statusList;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ didUpdateSelectedCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)didUpdateSelectedCallback;
- (void)setDidUpdateSelectedCallback:(id /* block */)arg0;
- (id)deSelectedIndexs;
- (id)selectedIndexs;
- (id)initWithTitle:(id)arg0 message:(id)arg1 templateTitleList:(id)arg2 templateInfoList:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)titleLabel;
- (id)title;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)setTitleLabel:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setupUI;
- (void)setupTableView;
- (void)setupTitleLabel;

@end
