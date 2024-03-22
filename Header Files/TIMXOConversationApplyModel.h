//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSDate;

@interface TIMXOConversationApplyModel : NSObject <IESIMConversationApplyModelProtocol, NSCoding> {
    int _conversationType;
    long long _applyID;
    long long _userID;
    NSString *_secUserID;
    long long _conversationShortID;
    long long _inviteUserID;
    NSString *_secInviteUserID;
    long long _status;
    NSDate *_createdAt;
    long long _modifyUserID;
    NSDate *_modifiedAt;
    NSString *_applyReason;
    NSDictionary *_ext;
}

@property (readonly, nonatomic) long long applyID;
@property (readonly, nonatomic) long long userID;
@property (readonly, copy, nonatomic) NSString *secUserID;
@property (readonly, nonatomic) long long conversationShortID;
@property (readonly, nonatomic) int conversationType;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSDate *createdAt;
@property (readonly, nonatomic) long long modifyUserID;
@property (readonly, nonatomic) NSDate *modifiedAt;
@property (readonly, copy, nonatomic) NSDictionary *ext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long applyID;
@property (readonly, nonatomic) long long userID;
@property (readonly, copy, nonatomic) NSString *secUserID;
@property (readonly, nonatomic) long long conversationShortID;
@property (readonly, nonatomic) long long inviteUserID;
@property (readonly, copy, nonatomic) NSString *secInviteUserID;
@property (readonly, nonatomic) int conversationType;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSDate *createdAt;
@property (readonly, nonatomic) long long modifyUserID;
@property (readonly, nonatomic) NSDate *modifiedAt;
@property (readonly, copy, nonatomic) NSString *applyReason;
@property (readonly, copy, nonatomic) NSDictionary *ext;

+ (id)createFromModel:(id)arg0;

- (id)secUserID;
- (int)conversationType;
- (long long)conversationShortID;
- (id)applyReason;
- (long long)applyID;
- (long long)modifyUserID;
- (long long)inviteUserID;
- (id)secInviteUserID;
- (id)initWithApply:(id)arg0;
- (long long)userID;
- (void).cxx_destruct;
- (long long)status;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)createdAt;
- (id)modifiedAt;
- (id)ext;

@end
