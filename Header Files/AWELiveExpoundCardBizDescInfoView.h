//
//     Generated by private class-dump
//

@class NSString, UILabel, AWELiveExpoundCardBizDescInfo, UITableView;

@interface AWELiveExpoundCardBizDescInfoView : UIView <UITableViewDelegate, UITableViewDataSource> {
    UILabel *_descLabel;
    UITableView *_attrTableView;
    AWELiveExpoundCardBizDescInfo *_bizDescInfo;
}

@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UITableView *attrTableView;
@property (retain, nonatomic) AWELiveExpoundCardBizDescInfo *bizDescInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (id)attrTableView;
- (BOOL)isValidBizDescInfo:(id)arg0;
- (void)setBizDescInfo:(id)arg0;
- (id)bizDescInfo;
- (void)updateTitleLabelWithBizDescInfo:(id)arg0;
- (BOOL)isTitleTwoLine:(id)arg0;
- (void)updateViewWithBizDescInfo:(id)arg0;
- (void)setAttrTableView:(id)arg0;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (void)setupUI;

@end
