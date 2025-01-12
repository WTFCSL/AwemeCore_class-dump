//
//     Generated by private class-dump
//

@class NSNumber, IESLiveWaitingListUser, UIImageView, NSString, UILabel, UIView, UIButton;

@interface IESLiveFastMatchEntryView : UIView {
    BOOL _isUserWaiting;
    BOOL _sortByTime;
    BOOL _transToPaidQueue;
    BOOL _enableMultiAddPrice;
    id /* block */ _onClickEntryBtn;
    id /* block */ _onClickAvatar;
    id /* block */ _onClickAddPriceBtn;
    unsigned long long _viewStyle;
    IESLiveWaitingListUser *_userInfo;
    NSString *_timeLabelPrefixString;
    UIView *_containerView;
    UIButton *_entryBtn;
    UILabel *_entryHintLabel;
    UILabel *_entryHintSubLabel;
    UIButton *_addPriceBtn;
    UIImageView *_avatarView;
    UIImageView *_genderIcon;
    UILabel *_nicknameLabel;
    UILabel *_timeLabel;
    UILabel *_rankLabel;
    NSNumber *_addPriceTime;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *entryBtn;
@property (retain, nonatomic) UILabel *entryHintLabel;
@property (retain, nonatomic) UILabel *entryHintSubLabel;
@property (retain, nonatomic) UIButton *addPriceBtn;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *genderIcon;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) IESLiveWaitingListUser *userInfo;
@property (retain, nonatomic) NSNumber *addPriceTime;
@property (copy, nonatomic) id /* block */ onClickEntryBtn;
@property (copy, nonatomic) id /* block */ onClickAvatar;
@property (copy, nonatomic) id /* block */ onClickAddPriceBtn;
@property (nonatomic) BOOL isUserWaiting;
@property (nonatomic) BOOL sortByTime;
@property (nonatomic) BOOL transToPaidQueue;
@property (nonatomic) BOOL enableMultiAddPrice;
@property (nonatomic) unsigned long long viewStyle;
@property (copy, nonatomic) NSString *timeLabelPrefixString;

- (id /* block */)onClickAvatar;
- (BOOL)sortByTime;
- (id)entryBtn;
- (void)setEntryBtn:(id)arg0;
- (BOOL)enableMultiAddPrice;
- (void)setGenderIcon:(id)arg0;
- (id)genderIcon;
- (void)setAddPriceTime:(id)arg0;
- (void)updateRankText;
- (id)waitingDesString:(id)arg0 nowTime:(id)arg1;
- (BOOL)isUserWaiting;
- (id)p_normalBtn;
- (void)updateUserInfo:(id)arg0 now:(id)arg1;
- (void)updateWaitingTime:(id)arg0;
- (void)setIsUserWaiting:(BOOL)arg0;
- (void)setOnClickAvatar:(id /* block */)arg0;
- (void)setSortByTime:(BOOL)arg0;
- (id)entryHintLabel;
- (void)setEntryHintLabel:(id)arg0;
- (id)addPriceTime;
- (void)updateAddPriceBtnUserInterfaceEnable:(BOOL)arg0;
- (void)setTimeLabelPrefixString:(id)arg0;
- (void)setTransToPaidQueue:(BOOL)arg0;
- (void)setEnableMultiAddPrice:(BOOL)arg0;
- (void)setOnClickEntryBtn:(id /* block */)arg0;
- (void)setOnClickAddPriceBtn:(id /* block */)arg0;
- (void)updateAddPriceBtnEnable:(BOOL)arg0;
- (id)addPriceWaitingDesString:(id)arg0 nowTime:(id)arg1 useAddPriceText:(BOOL)arg2;
- (id)waitingDesString:(id)arg0 nowTime:(id)arg1 isInPaidLinkmic:(BOOL)arg2;
- (id /* block */)onClickEntryBtn;
- (void)setAddPriceBtn:(id)arg0;
- (id)addPriceBtn;
- (id /* block */)onClickAddPriceBtn;
- (void)setEntryHintSubLabel:(id)arg0;
- (id)entryHintSubLabel;
- (BOOL)p_isAddPriceStyle;
- (BOOL)transToPaidQueue;
- (id)p_timeLabelStringWithText:(id)arg0;
- (id)timeLabelPrefixString;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (void)setUserInfo:(id)arg0;
- (unsigned long long)viewStyle;
- (void)setContainerView:(id)arg0;
- (void)onTapAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTimeLabel:(id)arg0;
- (id)containerView;
- (id)userInfo;
- (void)setViewStyle:(unsigned long long)arg0;
- (id)timeLabel;
- (void)setupUI;
- (id)rankLabel;
- (void)setRankLabel:(id)arg0;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg0;

@end
