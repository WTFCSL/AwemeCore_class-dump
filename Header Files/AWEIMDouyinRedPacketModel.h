//
//     Generated by private class-dump
//

@class NSString, AWEPayRPFavourEffectInfo, AWEPayRPConditionCheckInfo;

@interface AWEIMDouyinRedPacketModel : AWEBaseApiModel {
    BOOL _isOverDue;
    BOOL _isAllReceived;
    BOOL _enableCurrentUserReceive;
    NSString *_orderId;
    long long _amount;
    long long _singleAmount;
    long long _receiveAmount;
    long long _count;
    long long _receiveCount;
    long long _currentUserReceiveAmount;
    unsigned long long _receiveStatus;
    unsigned long long _redPacketType;
    unsigned long long _redPacketSubtype;
    long long _sendTime;
    long long _receiveTime;
    long long _dueTime;
    NSString *_statusDesc;
    NSString *_title;
    NSString *_subTitle;
    NSString *_openTitle;
    NSString *_titlePrefix;
    NSString *_titleMid;
    NSString *_titleSuffix;
    NSString *_allRecvCostTime;
    NSString *_changeText;
    NSString *_changeURL;
    NSString *_coverId;
    NSString *_refundAddr;
    NSString *_openMode;
    NSString *_openCommand;
    long long _allRecvTime;
    NSString *_reachRecvLimitText;
    long long _recvCondition;
    long long _curUserRewardAmount;
    NSString *_teaSource;
    NSString *_favourRpRefundDesc;
    AWEPayRPFavourEffectInfo *_favourRpEffectInfo;
    NSString *_rpStatus;
    long long _maxCount;
    long long _minCount;
    long long _expireLeftTime;
    NSString *_createUid;
    AWEPayRPConditionCheckInfo *_conditionInfo;
    long long _coverType;
    NSString *_coverUrl;
}

@property (copy, nonatomic) NSString *orderId;
@property (nonatomic) long long amount;
@property (nonatomic) long long singleAmount;
@property (nonatomic) long long receiveAmount;
@property (nonatomic) long long count;
@property (nonatomic) long long receiveCount;
@property (nonatomic) long long currentUserReceiveAmount;
@property (nonatomic) BOOL isOverDue;
@property (nonatomic) BOOL isAllReceived;
@property (nonatomic) unsigned long long receiveStatus;
@property (nonatomic) unsigned long long redPacketType;
@property (nonatomic) unsigned long long redPacketSubtype;
@property (nonatomic) long long sendTime;
@property (nonatomic) long long receiveTime;
@property (nonatomic) long long dueTime;
@property (nonatomic) BOOL enableCurrentUserReceive;
@property (copy, nonatomic) NSString *statusDesc;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *openTitle;
@property (copy, nonatomic) NSString *titlePrefix;
@property (copy, nonatomic) NSString *titleMid;
@property (copy, nonatomic) NSString *titleSuffix;
@property (copy, nonatomic) NSString *allRecvCostTime;
@property (copy, nonatomic) NSString *changeText;
@property (copy, nonatomic) NSString *changeURL;
@property (copy, nonatomic) NSString *coverId;
@property (copy, nonatomic) NSString *refundAddr;
@property (copy, nonatomic) NSString *openMode;
@property (copy, nonatomic) NSString *openCommand;
@property (readonly, nonatomic) BOOL isCommandRedPacket;
@property (nonatomic) long long allRecvTime;
@property (copy, nonatomic) NSString *reachRecvLimitText;
@property (nonatomic) long long recvCondition;
@property (nonatomic) long long curUserRewardAmount;
@property (copy, nonatomic) NSString *teaSource;
@property (copy, nonatomic) NSString *favourRpRefundDesc;
@property (retain, nonatomic) AWEPayRPFavourEffectInfo *favourRpEffectInfo;
@property (readonly, nonatomic) unsigned long long infoStatus;
@property (readonly, nonatomic) long long openRedPacketStatus;
@property (readonly, nonatomic) BOOL isMultiRandom;
@property (readonly, nonatomic) BOOL isMultiRedPacket;
@property (readonly, nonatomic) BOOL isSingleRedPacket;
@property (readonly, nonatomic) BOOL isBlessRedPacket;
@property (readonly, nonatomic) BOOL isSpringFestivalRedPacket;
@property (readonly, nonatomic) BOOL isVideoRedPacket;
@property (copy, nonatomic) NSString *rpStatus;
@property (nonatomic) long long maxCount;
@property (nonatomic) long long minCount;
@property (nonatomic) long long expireLeftTime;
@property (copy, nonatomic) NSString *createUid;
@property (readonly, nonatomic) BOOL isExchangeRP;
@property (retain, nonatomic) AWEPayRPConditionCheckInfo *conditionInfo;
@property (nonatomic) long long coverType;
@property (copy, nonatomic) NSString *coverUrl;

+ (id)conditionInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setCoverUrl:(id)arg0;
- (void)setCoverType:(long long)arg0;
- (long long)coverType;
- (id)coverUrl;
- (void)setSingleAmount:(long long)arg0;
- (long long)singleAmount;
- (id)coverId;
- (void)setCoverId:(id)arg0;
- (void)setReceiveTime:(long long)arg0;
- (long long)receiveTime;
- (id)orderId;
- (void)setOrderId:(id)arg0;
- (id)statusDesc;
- (void)setStatusDesc:(id)arg0;
- (id)titleSuffix;
- (void)setTitleSuffix:(id)arg0;
- (BOOL)isCommandRedPacket;
- (id)openMode;
- (id)openCommand;
- (long long)currentUserReceiveAmount;
- (BOOL)isAllReceived;
- (BOOL)isOverDue;
- (id)conditionInfo;
- (long long)recvCondition;
- (void)setRecvCondition:(long long)arg0;
- (void)setConditionInfo:(id)arg0;
- (id)teaSource;
- (void)setTeaSource:(id)arg0;
- (void)setRedPacketType:(unsigned long long)arg0;
- (unsigned long long)redPacketType;
- (void)setIsAllReceived:(BOOL)arg0;
- (void)setIsOverDue:(BOOL)arg0;
- (long long)allRecvTime;
- (id)reachRecvLimitText;
- (id)favourRpEffectInfo;
- (void)setRpStatus:(id)arg0;
- (id)createUid;
- (BOOL)isExchangeRP;
- (id)titleMid;
- (BOOL)isBlessRedPacket;
- (BOOL)isSingleRedPacket;
- (BOOL)isSpringFestivalRedPacket;
- (long long)curUserRewardAmount;
- (id)favourRpRefundDesc;
- (long long)receiveCount;
- (id)allRecvCostTime;
- (id)refundAddr;
- (BOOL)isMultiRedPacket;
- (id)changeURL;
- (void)setReceiveStatus:(unsigned long long)arg0;
- (unsigned long long)receiveStatus;
- (BOOL)isVideoRedPacket;
- (BOOL)isMultiRandom;
- (void)setChangeURL:(id)arg0;
- (void)setRefundAddr:(id)arg0;
- (void)setTitleMid:(id)arg0;
- (void)setCurrentUserReceiveAmount:(long long)arg0;
- (id)rpStatus;
- (long long)getOpenModeType;
- (long long)openRedPacketStatus;
- (void)setReceiveCount:(long long)arg0;
- (unsigned long long)redPacketSubtype;
- (void)setRedPacketSubtype:(unsigned long long)arg0;
- (BOOL)enableCurrentUserReceive;
- (unsigned long long)infoStatus;
- (void)setReceiveAmount:(long long)arg0;
- (void)setEnableCurrentUserReceive:(BOOL)arg0;
- (void)setOpenTitle:(id)arg0;
- (void)setAllRecvCostTime:(id)arg0;
- (void)setOpenMode:(id)arg0;
- (void)setOpenCommand:(id)arg0;
- (void)setAllRecvTime:(long long)arg0;
- (void)setReachRecvLimitText:(id)arg0;
- (void)setCurUserRewardAmount:(long long)arg0;
- (void)setFavourRpRefundDesc:(id)arg0;
- (void)setFavourRpEffectInfo:(id)arg0;
- (long long)expireLeftTime;
- (void)setExpireLeftTime:(long long)arg0;
- (void)setCreateUid:(id)arg0;
- (void)setCount:(long long)arg0;
- (long long)minCount;
- (void)setMinCount:(long long)arg0;
- (void).cxx_destruct;
- (void)setMaxCount:(long long)arg0;
- (id)title;
- (long long)count;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (long long)maxCount;
- (void)setTitle:(id)arg0;
- (long long)amount;
- (void)setAmount:(long long)arg0;
- (long long)receiveAmount;
- (void)setTitlePrefix:(id)arg0;
- (id)titlePrefix;
- (long long)dueTime;
- (void)setDueTime:(long long)arg0;
- (id)changeText;
- (void)setChangeText:(id)arg0;
- (id)openTitle;
- (long long)sendTime;
- (void)setSendTime:(long long)arg0;

@end
