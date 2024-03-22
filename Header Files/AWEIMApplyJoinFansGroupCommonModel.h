//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEIMApplyJoinFansGroupCommonModel : NSObject {
    BOOL _showEntryLimitPanel;
    BOOL _immediatelyJoinMessageListVc;
    BOOL _needFloatMode;
    long long _sourceType;
    long long _cid;
    NSString *_ownerID;
    NSString *_enterFrom;
    NSString *_enterMethod;
    NSDictionary *_invitationExtra;
    NSDictionary *_bizExtra;
}

@property (nonatomic) long long sourceType;
@property (nonatomic) long long cid;
@property (copy, nonatomic) NSString *ownerID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *invitationExtra;
@property (copy, nonatomic) NSDictionary *bizExtra;
@property (nonatomic) BOOL showEntryLimitPanel;
@property (nonatomic) BOOL immediatelyJoinMessageListVc;
@property (nonatomic) BOOL needFloatMode;

- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (id)bizExtra;
- (void)setBizExtra:(id)arg0;
- (void)setShowEntryLimitPanel:(BOOL)arg0;
- (void)setImmediatelyJoinMessageListVc:(BOOL)arg0;
- (id)invitationExtra;
- (void)setInvitationExtra:(id)arg0;
- (BOOL)showEntryLimitPanel;
- (BOOL)immediatelyJoinMessageListVc;
- (BOOL)needFloatMode;
- (void)setNeedFloatMode:(BOOL)arg0;
- (void)setSourceType:(long long)arg0;
- (long long)sourceType;
- (id)init;
- (void).cxx_destruct;
- (long long)cid;
- (id)ownerID;
- (void)setOwnerID:(id)arg0;
- (void)setCid:(long long)arg0;

@end
