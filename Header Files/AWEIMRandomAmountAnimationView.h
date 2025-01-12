//
//     Generated by private class-dump
//

@class NSArray, NSString, UILabel, NSMutableArray, UITableView;

@interface AWEIMRandomAmountAnimationView : UIView <UITableViewDelegate, UITableViewDataSource> {
    UITableView *_tableView;
    UILabel *_currencyLabel;
    NSMutableArray *_dataSource;
    NSArray *_amountList;
    NSString *_currentAmount;
    NSString *_defaultAmount;
    unsigned long long _currentIndex;
    unsigned long long _refreshMode;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UILabel *currencyLabel;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (copy, nonatomic) NSArray *amountList;
@property (copy, nonatomic) NSString *currentAmount;
@property (copy, nonatomic) NSString *defaultAmount;
@property (nonatomic) unsigned long long currentIndex;
@property (nonatomic) unsigned long long refreshMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_reset;
- (id)amountList;
- (id)currencyLabel;
- (id)defaultAmount;
- (unsigned long long)refreshMode;
- (id)getCurrentAmount;
- (void)setDefaultAmount:(id)arg0;
- (void)setAmountList:(id)arg0;
- (void)startRandomSelect:(id /* block */)arg0;
- (void)setCurrencyLabel:(id)arg0;
- (void)setRefreshMode:(unsigned long long)arg0;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (unsigned long long)currentIndex;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setCurrentIndex:(unsigned long long)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)setCurrentAmount:(id)arg0;
- (id)currentAmount;

@end
