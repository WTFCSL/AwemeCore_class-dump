//
//     Generated by private class-dump
//

@class BDNovelCommonVipHelpData, NSString, UITableView;

@interface BDNovelCommonVipHelpView : BDNovelCommonVipBaseChildView <UITableViewDelegate, UITableViewDataSource> {
    UITableView *_contentTableView;
    BDNovelCommonVipHelpData *_data;
}

@property (retain, nonatomic) UITableView *contentTableView;
@property (retain, nonatomic) BDNovelCommonVipHelpData *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contentTableView;
- (void)setContentTableView:(id)arg0;
- (double)item:(id)arg0 width:(double)arg1;
- (void)itemClick:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 parentView:(id)arg1 viewModel:(id)arg2;
- (void)sizeToWidth:(double)arg0;
- (id)data;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setData:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)layoutSubviews;

@end
