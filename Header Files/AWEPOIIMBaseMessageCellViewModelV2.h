//
//     Generated by private class-dump
//

@class AWEPOIIMBaseMessageV2, NSString, NSDictionary, AWEPOIIMConvMember, AWEPOIIMMessageService;
@protocol AWEPOIIMBaseMessageCellViewModelV2, AWEPOIIMMsgCellVMDelegate;

@interface AWEPOIIMBaseMessageCellViewModelV2 : NSObject <AWEPOIIMConvMemberObserver, AWEPOIIMBaseMessageCellViewModelV2> {
    BOOL isFromLongConnect;
    BOOL _shouldShowTime;
    BOOL _isAddedBindObserver;
    BOOL _shouldShowFooter;
    BOOL _shouldShowRiskContent;
    BOOL _isRecalled;
    id<AWEPOIIMMsgCellVMDelegate> delegate;
    long long readStatus;
    id<AWEPOIIMBaseMessageCellViewModelV2> preCellVM;
    unsigned long long imType;
    unsigned long long chatType;
    NSString *bizShopId;
    NSString *bizConGroupId;
    NSString *bizConversationId;
    NSString *appletID;
    unsigned long long appletType;
    NSString *imAccountID;
    NSString *groupLifeAccountID;
    NSString *_cellIdentifier;
    AWEPOIIMConvMember *_senderMember;
    AWEPOIIMBaseMessageV2 *_message;
    unsigned long long _combineStyle;
    long long _messageStatus;
    NSString *_riskContent;
    NSString *_type;
    NSDictionary *_originExtDict;
}

@property (copy, nonatomic) NSString *cellIdentifier;
@property (weak, nonatomic) AWEPOIIMConvMember *senderMember;
@property (retain, nonatomic) AWEPOIIMBaseMessageV2 *message;
@property (nonatomic) unsigned long long combineStyle;
@property (nonatomic) BOOL shouldShowTime;
@property (nonatomic) BOOL isAddedBindObserver;
@property (nonatomic) long long messageStatus;
@property (nonatomic) BOOL shouldShowFooter;
@property (nonatomic) BOOL shouldShowRiskContent;
@property (copy, nonatomic) NSString *riskContent;
@property (nonatomic) BOOL isRecalled;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *originExtDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) AWEPOIIMMessageService *messageService;
@property (readonly, nonatomic) long long msgType;
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
@property (readonly, nonatomic) double createTime;
@property (readonly, nonatomic) BOOL isSelfSide;
@property (readonly, nonatomic) BOOL isMerchantUser;
@property (readonly, nonatomic) BOOL isSystemMessage;
@property (nonatomic) long long readStatus;
@property (readonly, nonatomic) BOOL hasAvatar;
@property (readonly, nonatomic) BOOL shouldShowAvatar;
@property (readonly, copy, nonatomic) NSString *avatarURLString;
@property (readonly, nonatomic) BOOL shouldShowUserInfo;
@property (readonly, copy, nonatomic) NSString *userName;
@property (readonly, copy, nonatomic) NSString *userTagString;
@property (readonly, nonatomic) BOOL hasSwtichHumanFlag;
@property (readonly, nonatomic) unsigned long long footerStyle;
@property (readonly, nonatomic) unsigned long long userMsgFooterStatus;

- (void)cellWillDisplay;
- (id)userTagString;
- (unsigned long long)chatType;
- (BOOL)isRecalled;
- (id)bizConversationId;
- (void)setBizConversationId:(id)arg0;
- (void)setReadStatus:(long long)arg0;
- (void)setChatType:(unsigned long long)arg0;
- (void)trackCellShow;
- (void)setCellIdentifier:(id)arg0;
- (id)messageService;
- (id)avatarURLString;
- (void)handleMessageBind;
- (id)senderMember;
- (void)setSenderMember:(id)arg0;
- (void)sendIMMessage;
- (id)preCellVM;
- (void)setShouldShowTime:(BOOL)arg0;
- (void)makeCombineStyle;
- (void)makeFooterStatusIsInitial:(BOOL)arg0;
- (BOOL)isRobotMsg;
- (void)setCombineStyle:(unsigned long long)arg0;
- (BOOL)canCombineWithPreCellVM;
- (BOOL)isCombineBodyOrHeader;
- (BOOL)isCombineBodyOrTail;
- (BOOL)isSameSenderWithPreCellVM;
- (BOOL)shouldShowRiskContent;
- (BOOL)isGroupConv;
- (unsigned long long)combineStyle;
- (void)setOriginExtDict:(id)arg0;
- (void)setRiskContent:(id)arg0;
- (void)setShouldShowRiskContent:(BOOL)arg0;
- (BOOL)isAddedBindObserver;
- (void)setIsAddedBindObserver:(BOOL)arg0;
- (BOOL)hasSwtichHumanFlag;
- (BOOL)shouldShowFooter;
- (void)setShouldShowFooter:(BOOL)arg0;
- (void)cellHeightDidChanged;
- (void)cellHeightDidChangedNeedShowFull:(BOOL)arg0;
- (BOOL)isGroupSystemMessage;
- (BOOL)isCombineHeaderOrNone;
- (BOOL)isRealGroupConv;
- (BOOL)isSelfSide;
- (void)setIsRecalled:(BOOL)arg0;
- (void)originExtDictDidUpdated;
- (id)defaultTrackerParams;
- (unsigned long long)imType;
- (id)groupLifeAccountID;
- (id)bizShopId;
- (id)bizConGroupId;
- (void)memeberDidUpdate:(id)arg0;
- (void)bindSenderMember:(id)arg0;
- (void)doFinalInitial;
- (void)makeTimeShowAndCombineStyle;
- (void)sendSwitchToHumanMessage;
- (BOOL)needCustomRecalled;
- (void)updateRiskControlWithUpdateMessage:(id)arg0;
- (void)updateOriginExtWithUpdateMessage:(id)arg0;
- (void)containerDidTapped;
- (void)avatarDidTapped;
- (void)setImType:(unsigned long long)arg0;
- (void)setBizShopId:(id)arg0;
- (void)setBizConGroupId:(id)arg0;
- (id)imAccountID;
- (void)setImAccountID:(id)arg0;
- (unsigned long long)appletType;
- (void)setAppletType:(unsigned long long)arg0;
- (id)appletID;
- (void)setAppletID:(id)arg0;
- (void)setGroupLifeAccountID:(id)arg0;
- (BOOL)isFromLongConnect;
- (void)setIsFromLongConnect:(BOOL)arg0;
- (void)setPreCellVM:(id)arg0;
- (BOOL)shouldShowTime;
- (BOOL)isMerchantUser;
- (BOOL)shouldShowAvatar;
- (BOOL)shouldShowUserInfo;
- (unsigned long long)userMsgFooterStatus;
- (id)riskContent;
- (id)originExtDict;
- (id)initWithBaseMessage:(id)arg0 cellIdentifier:(id)arg1;
- (void)resendIMMessage;
- (void)requestImageURLWithURI:(id)arg0 completion:(id /* block */)arg1;
- (void)trackEvent:(id)arg0 additionalParams:(id)arg1;
- (void)setMessage:(id)arg0;
- (id)userName;
- (void).cxx_destruct;
- (unsigned long long)footerStyle;
- (id)type;
- (id)message;
- (void)setType:(id)arg0;
- (id)delegate;
- (double)createTime;
- (void)setDelegate:(id)arg0;
- (id)cellIdentifier;
- (BOOL)isSystemMessage;
- (long long)messageStatus;
- (void)setMessageStatus:(long long)arg0;
- (long long)readStatus;
- (long long)msgType;
- (BOOL)hasAvatar;

@end
