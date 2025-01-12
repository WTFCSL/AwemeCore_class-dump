//
//     Generated by private class-dump
//

@class UITableView, UIButton, NSString, UIView, UILabel, AWEPublishToControllCell;

@interface AWEPublishToControllerDouyin : AWEPublishPrivacyTransitionViewController <UITableViewDelegate, UITableViewDataSource, AWEPublishToControllerProtocol> {
    unsigned long long selectedType;
    id /* block */ selectBlock;
    UITableView *_tableView;
    AWEPublishToControllCell *_selfCell;
    AWEPublishToControllCell *_anchorCell;
    UIView *_contentView;
    UILabel *_titleLabel;
    UIButton *_closeButton;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEPublishToControllCell *selfCell;
@property (retain, nonatomic) AWEPublishToControllCell *anchorCell;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long selectedType;
@property (copy, nonatomic) id /* block */ selectBlock;

- (void)closeButtonClicked:(id)arg0;
- (void)setSelectedType:(unsigned long long)arg0;
- (void)addSubviews;
- (id)animationViewInTransition;
- (double)offsetYInTransition;
- (BOOL)needInteractiveTransition;
- (void)setSelectBlock:(id /* block */)arg0;
- (id)anchorCell;
- (void)setAnchorCell:(id)arg0;
- (id)p_commonCells;
- (id)selfCell;
- (void)setSelfCell:(id)arg0;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (id)titleLabel;
- (id)contentView;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)setContentView:(id)arg0;
- (unsigned long long)selectedType;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)maskColor;
- (id /* block */)selectBlock;

@end
