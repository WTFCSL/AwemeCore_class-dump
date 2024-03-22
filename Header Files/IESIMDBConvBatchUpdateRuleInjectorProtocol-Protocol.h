//
//     Generated by private class-dump
//

@protocol IESIMDBConvBatchUpdateRuleInjectorProtocol <NSObject>

@property (nonatomic) BOOL hasFoldBoxTypeBatchUpdateDone;
@property (nonatomic) BOOL hasStrangerBoxTypeBatchUpdateDone;
@property (nonatomic) BOOL hasLiveConsultBoxTypeBatchUpdateDone;
@property (nonatomic) BOOL hasUnreadNeglectMaskMuteBatchUpdateDone;
@property (nonatomic) BOOL hasProcessedUnreadCountBatchUpdateDone;
@property (nonatomic) BOOL hasNotDisplayBoxTypeBatchUpdateDone;
@property (nonatomic) BOOL hasUnreadBoxTypeBatchUpdateDone;
@property (nonatomic) BOOL hasEnterpriseBoxTypeBatchUpdateDone;
@property (nonatomic) BOOL hasfeedSkylightBatchUpdateDone;
@property (nonatomic) BOOL isQualifiedForEnterpriseModes;

- (BOOL)isQualifiedForEnterpriseModes;
- (BOOL)hasAllRulesBatchUpdateDone;
- (void)loginWithUid:(id)arg0;
- (BOOL)hasUnreadBoxTypeBatchUpdateDone;
- (BOOL)hasEnterpriseBoxTypeBatchUpdateDone;
- (BOOL)hasFoldBoxTypeBatchUpdateDone;
- (BOOL)hasStrangerBoxTypeBatchUpdateDone;
- (BOOL)hasLiveConsultBoxTypeBatchUpdateDone;
- (BOOL)hasUnreadNeglectMaskMuteBatchUpdateDone;
- (BOOL)hasProcessedUnreadCountBatchUpdateDone;
- (BOOL)hasNotDisplayBoxTypeBatchUpdateDone;
- (BOOL)hasfeedSkylightBatchUpdateDone;
- (void)injectorRule:(id)arg0;
- (void)clearAllSDKProcessersVersionWithUid:(id)arg0;
- (void)clearLastHintMsgProcesserVersionWithUid:(id)arg0;
- (void)setHasFoldBoxTypeBatchUpdateDone:(BOOL)arg0;
- (void)setHasStrangerBoxTypeBatchUpdateDone:(BOOL)arg0;
- (void)setHasLiveConsultBoxTypeBatchUpdateDone:(BOOL)arg0;
- (void)setHasUnreadNeglectMaskMuteBatchUpdateDone:(BOOL)arg0;
- (void)setHasProcessedUnreadCountBatchUpdateDone:(BOOL)arg0;
- (void)setHasNotDisplayBoxTypeBatchUpdateDone:(BOOL)arg0;
- (void)setHasUnreadBoxTypeBatchUpdateDone:(BOOL)arg0;
- (void)setHasEnterpriseBoxTypeBatchUpdateDone:(BOOL)arg0;
- (void)setHasfeedSkylightBatchUpdateDone:(BOOL)arg0;
- (void)setIsQualifiedForEnterpriseModes:(BOOL)arg0;

@end