//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, AWEUserModel, UIImageView, UIButton, UITableView, UILabel;
@protocol AFDModalViewHelperProtocol, AWELiveUserModelProtocol;

@interface AWEConcernBellPushVideoStrategyPanelViewController : UIViewController <AWEPanelTransitionWithBackground, UITableViewDelegate, UITableViewDataSource> {
    BOOL _isRequesting;
    BOOL _useCardUIStyle;
    id<AFDModalViewHelperProtocol> _halfModalViewHelper;
    UILabel *_titleLabel;
    UIButton *_closeButton;
    UIImageView *_avatarView;
    UILabel *_nameLabel;
    UITableView *_tableView;
    UIView *_indicatorLineView;
    AWEUserModel *_toUser;
    id<AWELiveUserModelProtocol> _toLiveUser;
    id /* block */ _strategyChangeAction;
    NSArray *_strategyDatas;
    unsigned long long _selectedStrategy;
    unsigned long long _bellPushType;
}

@property (retain, nonatomic) id<AFDModalViewHelperProtocol> halfModalViewHelper;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *indicatorLineView;
@property (retain, nonatomic) AWEUserModel *toUser;
@property (retain, nonatomic) id<AWELiveUserModelProtocol> toLiveUser;
@property (copy, nonatomic) id /* block */ strategyChangeAction;
@property (retain, nonatomic) NSArray *strategyDatas;
@property (nonatomic) unsigned long long selectedStrategy;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) unsigned long long bellPushType;
@property (nonatomic) BOOL useCardUIStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)wantsDimmingTransitionBackground;
- (void)setToUser:(id)arg0;
- (void)setIsRequesting:(BOOL)arg0;
- (BOOL)isRequesting;
- (void)configUI;
- (id)strategyDatas;
- (void)setBellPushType:(unsigned long long)arg0;
- (void)setStrategyDatas:(id)arg0;
- (void)setSelectedStrategy:(unsigned long long)arg0;
- (unsigned long long)bellPushType;
- (unsigned long long)selectedStrategy;
- (void)changeBellPushStrategy:(unsigned long long)arg0 oldStrategy:(unsigned long long)arg1;
- (void)trackNewVideoNotificationSwitchWithOldStrategy:(unsigned long long)arg0 newStrategy:(unsigned long long)arg1;
- (void)setHalfModalViewHelper:(id)arg0;
- (id)halfModalViewHelper;
- (double)heightForHalfContent;
- (void)trackNewVideoNotificationClickWithStrategy:(unsigned long long)arg0;
- (void)p_clickCloseButton:(id)arg0;
- (BOOL)useCardUIStyle;
- (void)setUseCardUIStyle:(BOOL)arg0;
- (id)initWithToUser:(id)arg0 currStrategy:(unsigned long long)arg1 strategyChangeAction:(id /* block */)arg2;
- (void)setStrategyChangeAction:(id /* block */)arg0;
- (void)loadStrategyDatas;
- (void)setToLiveUser:(id)arg0;
- (void)setupCardUIStyleUI;
- (id)toLiveUser;
- (id)indicatorLineView;
- (id /* block */)strategyChangeAction;
- (id)initWithToLiveUser:(id)arg0 currStrategy:(unsigned long long)arg1 strategyChangeAction:(id /* block */)arg2;
- (void)setIndicatorLineView:(id)arg0;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)titleLabel;
- (id)nameLabel;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (id)cellReuseIdentifier;
- (void)setNameLabel:(id)arg0;
- (void)setupViews;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)toUser;

@end