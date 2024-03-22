//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSDate;

@protocol IESIMConversationApplyModelProtocol <NSObject>

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

- (id)secUserID;
- (int)conversationType;
- (long long)conversationShortID;
- (long long)applyID;
- (long long)modifyUserID;
- (long long)userID;
- (long long)status;
- (id)createdAt;
- (id)modifiedAt;
- (id)ext;

@end
