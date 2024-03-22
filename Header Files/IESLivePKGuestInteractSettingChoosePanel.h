//
//     Generated by private class-dump
//

@class UIView, NSString, UILabel, IESLivePKGuestInteractSettingChooseViewModel, UITableView;

@interface IESLivePKGuestInteractSettingChoosePanel : UIView <UITableViewDelegate, UITableViewDataSource> {
    IESLivePKGuestInteractSettingChooseViewModel *_viewModel;
    UILabel *_titleLabel;
    UITableView *_tableView;
    UIView *_seperatorLineView;
}

@property (retain, nonatomic) IESLivePKGuestInteractSettingChooseViewModel *viewModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *seperatorLineView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)seperatorLineView;
- (void)setSeperatorLineView:(id)arg0;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)titleLabel;
- (void)setViewModel:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (void)setTitleLabel:(id)arg0;
- (void)setupConstraints;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1;

@end