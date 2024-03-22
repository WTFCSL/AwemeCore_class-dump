//
//     Generated by private class-dump
//

@class AWECreateSubAccountViewConfig, NSString, UILabel, AWECreateSubAccountHeaderView, UIButton;
@protocol AWECreateSubAccountViewDelegate;

@interface AWECreateSubAccountBaseView : UIView <AWECreateSubAccountViewProtocol> {
    id<AWECreateSubAccountViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIButton *_addAccountBtn;
    UIButton *_createAccountBtn;
    AWECreateSubAccountHeaderView *_headerView;
    AWECreateSubAccountViewConfig *_config;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *addAccountBtn;
@property (retain, nonatomic) UIButton *createAccountBtn;
@property (retain, nonatomic) AWECreateSubAccountHeaderView *headerView;
@property (retain, nonatomic) AWECreateSubAccountViewConfig *config;
@property (weak, nonatomic) id<AWECreateSubAccountViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)addAccountBtn;
- (id)createAccountBtn;
- (void)addAccountBtnTapped;
- (void)createAccountBtnTapped;
- (void)setAddAccountBtn:(id)arg0;
- (void)setCreateAccountBtn:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)titleLabel;
- (void)setHeaderView:(id)arg0;
- (id)initWithConfig:(id)arg0;
- (id)delegate;
- (id)headerView;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupSubviews;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;

@end