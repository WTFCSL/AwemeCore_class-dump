//
//     Generated by private class-dump
//

@class ECOMTIMPBNParticipant;

@interface ECOMTIMPBNMemberInfo : GPBMessage

@property (nonatomic) long long userId;
@property (nonatomic) BOOL hasUserId;
@property (nonatomic) BOOL isInConversation;
@property (nonatomic) BOOL hasIsInConversation;
@property (nonatomic) long long createTime;
@property (nonatomic) BOOL hasCreateTime;
@property (nonatomic) long long pingTime;
@property (nonatomic) BOOL hasPingTime;
@property (retain, nonatomic) ECOMTIMPBNParticipant *participant;
@property (nonatomic) BOOL hasParticipant;

+ (id)descriptor;

@end
