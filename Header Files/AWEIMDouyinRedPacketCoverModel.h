//
//     Generated by private class-dump
//

@class NSString;

@interface AWEIMDouyinRedPacketCoverModel : AWEBaseApiModel {
    BOOL _isAllowRecv;
    NSString *_coverId;
    NSString *_selectedDesc;
    NSString *_amount;
    NSString *_coverDesc;
    NSString *_selectedTips;
    NSString *_imageAddr;
    NSString *_videoAddr;
    NSString *_auUid;
    NSString *_auSecUid;
    NSString *_auAvatar;
    NSString *_auName;
    long long _auditStatus;
    long long _coverChannel;
    long long _coverType;
    NSString *_expriedTime;
    long long _followStatus;
    NSString *_btnAddr;
    NSString *_btnDesc;
    NSString *_btnBubble;
}

@property (copy, nonatomic) NSString *coverId;
@property (copy, nonatomic) NSString *selectedDesc;
@property (copy, nonatomic) NSString *amount;
@property (copy, nonatomic) NSString *coverDesc;
@property (copy, nonatomic) NSString *selectedTips;
@property (copy, nonatomic) NSString *imageAddr;
@property (copy, nonatomic) NSString *videoAddr;
@property (copy, nonatomic) NSString *auUid;
@property (copy, nonatomic) NSString *auSecUid;
@property (copy, nonatomic) NSString *auAvatar;
@property (copy, nonatomic) NSString *auName;
@property (nonatomic) BOOL isAllowRecv;
@property (nonatomic) long long auditStatus;
@property (nonatomic) long long coverChannel;
@property (nonatomic) long long coverType;
@property (copy, nonatomic) NSString *expriedTime;
@property (nonatomic) long long followStatus;
@property (copy, nonatomic) NSString *btnAddr;
@property (copy, nonatomic) NSString *btnDesc;
@property (copy, nonatomic) NSString *btnBubble;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)followStatus;
- (void)setFollowStatus:(long long)arg0;
- (void)setCoverType:(long long)arg0;
- (long long)coverType;
- (id)coverId;
- (void)setCoverId:(id)arg0;
- (void)setImageAddr:(id)arg0;
- (long long)coverChannel;
- (long long)auditStatus;
- (id)coverDesc;
- (id)selectedDesc;
- (id)imageAddr;
- (id)videoAddr;
- (id)auUid;
- (id)auAvatar;
- (id)auName;
- (id)auSecUid;
- (id)btnDesc;
- (id)btnBubble;
- (id)btnAddr;
- (void)setSelectedDesc:(id)arg0;
- (void)setCoverDesc:(id)arg0;
- (id)selectedTips;
- (void)setSelectedTips:(id)arg0;
- (void)setVideoAddr:(id)arg0;
- (void)setAuUid:(id)arg0;
- (void)setAuSecUid:(id)arg0;
- (void)setAuAvatar:(id)arg0;
- (void)setAuName:(id)arg0;
- (BOOL)isAllowRecv;
- (void)setIsAllowRecv:(BOOL)arg0;
- (void)setAuditStatus:(long long)arg0;
- (void)setCoverChannel:(long long)arg0;
- (id)expriedTime;
- (void)setExpriedTime:(id)arg0;
- (void)setBtnAddr:(id)arg0;
- (void)setBtnDesc:(id)arg0;
- (void)setBtnBubble:(id)arg0;
- (void).cxx_destruct;
- (id)amount;
- (void)setAmount:(id)arg0;

@end
