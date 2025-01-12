//
//     Generated by private class-dump
//

@class AWEPOIIMBaseMessageV2, NSString, NSDictionary, AWEPOIIMConvMember, AWEPOIIMLynxConfigModel, AWEPOIIMMessageService;
@protocol AWEPOIIMBaseMessageCellViewModelV2, AWEPOIIMMsgCellVMDelegate;

@interface AWEPOIIMMsgCardLynxCellViewModel : AWEPOIIMMsgBaseCardCellViewModel <AWEPOIIMMsgLynx> {
    AWEPOIIMLynxConfigModel *lynxConfig;
    NSDictionary *preserveData;
    NSString *_nativeCardUniqueId;
}

@property (copy, nonatomic) NSString *nativeCardUniqueId;
@property (retain, nonatomic) AWEPOIIMLynxConfigModel *lynxConfig;
@property (readonly, copy, nonatomic) NSDictionary *commonParams;
@property (copy, nonatomic) NSDictionary *preserveData;
@property (readonly, copy, nonatomic) NSString *cellIdentifier;
@property (readonly, nonatomic) AWEPOIIMBaseMessageV2 *message;
@property (readonly, weak, nonatomic) AWEPOIIMMessageService *messageService;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, nonatomic) long long msgType;
@property (readonly, weak, nonatomic) AWEPOIIMConvMember *senderMember;
@property (weak, nonatomic) id<AWEPOIIMMsgCellVMDelegate> delegate;
@property (nonatomic) unsigned long long imType;
@property (nonatomic) unsigned long long chatType;
@property (copy, nonatomic) NSString *bizShopId;
@property (copy, nonatomic) NSString *bizConGroupId;
@property (copy, nonatomic) NSString *bizConversationId;
@property (copy, nonatomic) NSString *imAccountID;
@property (nonatomic) unsigned long long appletType;
@property (copy, nonatomic) NSString *appletID;
@property (copy, nonatomic) NSString *groupLifeAccountID;
@property (nonatomic) BOOL isFromLongConnect;
@property (weak, nonatomic) id<AWEPOIIMBaseMessageCellViewModelV2> preCellVM;
@property (readonly, nonatomic) unsigned long long combineStyle;
@property (readonly, nonatomic) BOOL shouldShowTime;
@property (readonly, nonatomic) double createTime;
@property (readonly, nonatomic) BOOL isSelfSide;
@property (readonly, nonatomic) BOOL isMerchantUser;
@property (readonly, nonatomic) BOOL isSystemMessage;
@property (readonly, nonatomic) long long messageStatus;
@property (nonatomic) long long readStatus;
@property (readonly, nonatomic) BOOL hasAvatar;
@property (readonly, nonatomic) BOOL shouldShowAvatar;
@property (readonly, copy, nonatomic) NSString *avatarURLString;
@property (readonly, nonatomic) BOOL shouldShowUserInfo;
@property (readonly, copy, nonatomic) NSString *userName;
@property (readonly, copy, nonatomic) NSString *userTagString;
@property (readonly, nonatomic) BOOL shouldShowFooter;
@property (readonly, nonatomic) BOOL hasSwtichHumanFlag;
@property (readonly, nonatomic) unsigned long long footerStyle;
@property (readonly, nonatomic) unsigned long long userMsgFooterStatus;
@property (readonly, nonatomic) BOOL shouldShowRiskContent;
@property (readonly, copy, nonatomic) NSString *riskContent;
@property (readonly, nonatomic) BOOL isRecalled;
@property (readonly, copy, nonatomic) NSDictionary *originExtDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonParams;
- (id)preserveData;
- (void)setPreserveData:(id)arg0;
- (void)setLynxConfig:(id)arg0;
- (id)lynxConfig;
- (void)handleMessageBind;
- (id)nativeCardUniqueId;
- (BOOL)hasSendMethod;
- (void)setNativeCardUniqueId:(id)arg0;
- (void).cxx_destruct;
- (long long)msgType;

@end
