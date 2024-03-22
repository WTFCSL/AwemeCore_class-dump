//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, UIImageView, UIButton, UITableView, UITextField, UILabel;

@interface AWENaviDuetMatchPanelView : UIView <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate> {
    BOOL _enableMultipleSelection;
    id /* block */ _onClosedBlock;
    id /* block */ _onCompletedBlock;
    id /* block */ _onSelectedBlock;
    NSArray *_originUsers;
    UILabel *_titleLabel;
    UIButton *_closeButton;
    UITableView *_tableView;
    UIView *_containerView;
    UIButton *_completeButton;
    UIImageView *_magnifierImgView;
    UITextField *_textField;
    UIView *_seperateView;
    UILabel *_emptyLabel;
    NSArray *_filterUsers;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *completeButton;
@property (retain, nonatomic) UIImageView *magnifierImgView;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIView *seperateView;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (copy, nonatomic) NSArray *filterUsers;
@property (copy, nonatomic) id /* block */ onClosedBlock;
@property (copy, nonatomic) id /* block */ onCompletedBlock;
@property (copy, nonatomic) id /* block */ onSelectedBlock;
@property (nonatomic) BOOL enableMultipleSelection;
@property (copy, nonatomic) NSArray *originUsers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)seperateView;
- (void)setSeperateView:(id)arg0;
- (id /* block */)onCompletedBlock;
- (void)setOnCompletedBlock:(id /* block */)arg0;
- (void)setOnSelectedBlock:(id /* block */)arg0;
- (id /* block */)onSelectedBlock;
- (void)setOriginUsers:(id)arg0;
- (id)originUsers;
- (void)filterReset;
- (void)setEnableMultipleSelection:(BOOL)arg0;
- (void)setOnClosedBlock:(id /* block */)arg0;
- (id)magnifierImgView;
- (id)completeButton;
- (void)setFilterUsers:(id)arg0;
- (void)checkSelectedStatus;
- (BOOL)enableMultipleSelection;
- (id)filterUsers;
- (id)curSelectedUsers;
- (void)changeUserSelect:(BOOL)arg0 atIndex:(long long)arg1;
- (id /* block */)onClosedBlock;
- (void)touchUpInsideClose:(id)arg0;
- (void)touchUpInsideComplete:(id)arg0;
- (id)adjustUsers:(id)arg0;
- (void)resetSelectedOfOriginUsers;
- (void)updateTitleForPanel:(id)arg0;
- (void)updateTitleForCompleteButton:(id)arg0;
- (void)setCompleteButton:(id)arg0;
- (void)setMagnifierImgView:(id)arg0;
- (void)setTextField:(id)arg0;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (id)textField;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)setTitleLabel:(id)arg0;
- (BOOL)textFieldShouldReturn:(id)arg0;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (void)setupSubviews;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg0;

@end
