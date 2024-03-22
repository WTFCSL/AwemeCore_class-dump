//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, UITableView;
@protocol IESLiveFunctionSquareCategoryContentCollectionViewCellDelegate;

@interface IESLiveFunctionSquareCategoryContentCollectionViewCell : UICollectionViewCell <UITableViewDataSource, UITableViewDelegate> {
    BOOL _tableViewCanScroll;
    BOOL _isBeforeLive;
    id<IESLiveFunctionSquareCategoryContentCollectionViewCellDelegate> _delegate;
    UITableView *_tableView;
    NSMutableArray *_dataSource;
}

@property (nonatomic) BOOL isBeforeLive;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (weak, nonatomic) id<IESLiveFunctionSquareCategoryContentCollectionViewCellDelegate> delegate;
@property (nonatomic) BOOL tableViewCanScroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (BOOL)tableViewCanScroll;
- (void)setIsBeforeLive:(BOOL)arg0;
- (BOOL)isBeforeLive;
- (void)setTableViewCanScroll:(BOOL)arg0;
- (void)updateContentDataSource:(id)arg0 isBeforeLive:(BOOL)arg1;
- (void)updateTableViewCanScroll:(BOOL)arg0;
- (id)getCurrentVisibleRowNodes;
- (void)setDataSource:(id)arg0;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)dataSource;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)setDelegate:(id)arg0;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (void)setupUI;

@end
