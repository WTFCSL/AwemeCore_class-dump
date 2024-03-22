//
//     Generated by private class-dump
//

@class NSString, NSArray, LSIMBizMessage, NSDictionary;

@interface LSIMMessageCardRobotListCellVM : LSIMMessageCardRobotCellVM <LSIMMessageRobotListCellVM> {
    NSString *_cardID;
    NSString *_title;
    NSArray *_itemArray;
}

@property (copy, nonatomic) NSString *cardID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *itemArray;
@property (readonly, nonatomic) LSIMBizMessage *message;
@property (readonly, nonatomic) unsigned long long combineStyle;
@property (readonly, nonatomic) BOOL shouldShowTopTime;
@property (readonly, nonatomic) double createTime;
@property (readonly, nonatomic) BOOL isSystemMessage;
@property (readonly, nonatomic) BOOL isRobotMessage;
@property (readonly, nonatomic) BOOL isSelfSide;
@property (readonly, nonatomic) BOOL isMerchantUser;
@property (readonly, nonatomic) BOOL hasAvatar;
@property (readonly, nonatomic) BOOL shouldShowAvatar;
@property (readonly, copy, nonatomic) NSString *avatarURLString;
@property (readonly, nonatomic) BOOL shouldShowUserInfo;
@property (readonly, copy, nonatomic) NSString *userName;
@property (readonly, copy, nonatomic) NSString *userTagString;
@property (readonly, nonatomic) BOOL shouldShowFooter;
@property (readonly, nonatomic) unsigned long long footerStyle;
@property (readonly, nonatomic) long long messageStatus;
@property (nonatomic) unsigned long long readStatus;
@property (readonly, nonatomic) unsigned long long userMsgFooterStatus;
@property (readonly, nonatomic) BOOL shouldShowRiskContent;
@property (readonly, copy, nonatomic) NSString *riskContent;
@property (readonly, nonatomic) BOOL isRecalled;
@property (readonly, copy, nonatomic) NSDictionary *originExtDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)itemArray;
- (void)setItemArray:(id)arg0;
- (id)itemIDKey;
- (id)itemContentKey;
- (void)contentLabelDidTappedAtIndex:(unsigned long long)arg0;
- (void)handleMessage;
- (void)bindCardBody;
- (id)robotListDict;
- (id)actionListKey;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:(id)arg0;
- (id)titleKey;
- (id)cardID;
- (void)setCardID:(id)arg0;

@end
