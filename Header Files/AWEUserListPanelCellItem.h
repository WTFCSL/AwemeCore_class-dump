//
//     Generated by private class-dump
//

@class UIColor, NSString, NSDictionary, AWEAwemeModel, AWEUserModel;

@interface AWEUserListPanelCellItem : NSObject {
    BOOL _hasMoreActions;
    BOOL _isDarkMode;
    BOOL _isFriends;
    BOOL _isFamiliarItemAwemeModel;
    BOOL _isECommerceBoostInfoPanel;
    BOOL _isShowSourceType;
    BOOL _isLightMode;
    BOOL _shouldIgnoreUnfollowItemAndHideHisPostItemInMoreActions;
    long long _cellType;
    AWEUserModel *_userModel;
    NSString *_awemeID;
    NSString *_referString;
    NSString *_enterFrom;
    NSString *_enterMethod;
    NSString *_accountType;
    long long _currentAwemeItemUserFollowStatus;
    AWEAwemeModel *_awemeModel;
    long long _rewardAmount;
    unsigned long long _rewardType;
    NSDictionary *_extraParams;
    UIColor *_onlineDotBGColor;
    id /* block */ _customRightButtonAction;
}

@property (nonatomic) long long cellType;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *accountType;
@property (nonatomic) BOOL hasMoreActions;
@property (nonatomic) BOOL isDarkMode;
@property (nonatomic) BOOL isFriends;
@property (nonatomic) BOOL isFamiliarItemAwemeModel;
@property (nonatomic) long long currentAwemeItemUserFollowStatus;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) BOOL isECommerceBoostInfoPanel;
@property (nonatomic) long long rewardAmount;
@property (nonatomic) unsigned long long rewardType;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) UIColor *onlineDotBGColor;
@property (nonatomic) BOOL isShowSourceType;
@property (nonatomic) BOOL isLightMode;
@property (nonatomic) BOOL shouldIgnoreUnfollowItemAndHideHisPostItemInMoreActions;
@property (copy, nonatomic) id /* block */ customRightButtonAction;

- (id)awemeModel;
- (id)referString;
- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (void)setAwemeModel:(id)arg0;
- (void)setReferString:(id)arg0;
- (id)enterFrom;
- (BOOL)isFamiliarItemAwemeModel;
- (void)setIsFamiliarItemAwemeModel:(BOOL)arg0;
- (long long)currentAwemeItemUserFollowStatus;
- (void)setCurrentAwemeItemUserFollowStatus:(long long)arg0;
- (void)setAwemeID:(id)arg0;
- (id)awemeID;
- (long long)rewardAmount;
- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (void)setIsECommerceBoostInfoPanel:(BOOL)arg0;
- (void)setHasMoreActions:(BOOL)arg0;
- (void)setRewardAmount:(long long)arg0;
- (void)setRewardType:(unsigned long long)arg0;
- (unsigned long long)rewardType;
- (BOOL)isLightMode;
- (void)setIsLightMode:(BOOL)arg0;
- (BOOL)isFriends;
- (void)setIsFriends:(BOOL)arg0;
- (void)setShouldIgnoreUnfollowItemAndHideHisPostItemInMoreActions:(BOOL)arg0;
- (void)setIsShowSourceType:(BOOL)arg0;
- (void)setOnlineDotBGColor:(id)arg0;
- (void)setCustomRightButtonAction:(id /* block */)arg0;
- (id)onlineDotBGColor;
- (BOOL)hasMoreActions;
- (BOOL)isShowSourceType;
- (id /* block */)customRightButtonAction;
- (BOOL)shouldIgnoreUnfollowItemAndHideHisPostItemInMoreActions;
- (BOOL)isECommerceBoostInfoPanel;
- (void).cxx_destruct;
- (id)accountType;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (void)setCellType:(long long)arg0;
- (void)setAccountType:(id)arg0;
- (long long)cellType;
- (BOOL)isDarkMode;
- (void)setIsDarkMode:(BOOL)arg0;

@end
