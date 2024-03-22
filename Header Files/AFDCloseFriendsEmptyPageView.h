//
//     Generated by private class-dump
//

@class NSArray, NSString, UILabel, UITableView;

@interface AFDCloseFriendsEmptyPageView : UIView <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate> {
    BOOL _isWidgetInstalled;
    UITableView *_tableView;
    UILabel *_titleLabel;
    NSArray *_dataList;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSArray *dataList;
@property (nonatomic) BOOL isWidgetInstalled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDataList:(id)arg0;
- (id)noMoreData;
- (void)setIsWidgetInstalled:(BOOL)arg0;
- (void)checkWidgetInstalledWithCompletion:(id /* block */)arg0;
- (id)noMomentData;
- (BOOL)isWidgetInstalled;
- (void)showAsNoMoreData;
- (void)showAsNoMomentData;
- (void)showAsOwnTabNoData;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)titleLabel;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)dataList;

@end
