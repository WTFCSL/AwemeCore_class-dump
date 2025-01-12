//
//     Generated by private class-dump
//

@class UITableView, NSArray, NSString, CJPayMethodAddCardCellView;
@protocol CJCJPayBDMethodTableViewDelegate;

@interface CJPayBDMethodTableView : UIView <UITableViewDelegate, UITableViewDataSource, CJPayBaseLoadingProtocol> {
    NSArray *_models;
    id<CJCJPayBDMethodTableViewDelegate> _delegate;
    UITableView *_tableView;
    CJPayMethodAddCardCellView *_addBankCardCell;
}

@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) CJPayMethodAddCardCellView *addBankCardCell;
@property (copy, nonatomic) NSArray *models;
@property (weak, nonatomic) id<CJCJPayBDMethodTableViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)getCellClass:(id)arg0;
- (double)calculBankCardModelHeight:(id)arg0;
- (void)setAddBankCardCell:(id)arg0;
- (id)addBankCardCell;
- (id)p_getLoadingCell;
- (void)startLoadingAnimationOnAddBankCardCell;
- (void)stopLoadingAnimationOnAddBankCardCell;
- (void)stopLoading;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (void)startLoading;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)models;
- (id)delegate;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)setModels:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)setupUI;

@end
