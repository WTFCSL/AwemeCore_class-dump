//
//     Generated by private class-dump
//

@class NSString;

@interface HTSLiveCommentWallInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long id_p;
@property (nonatomic) long long commentMsgId;
@property (nonatomic) long long commenterId;
@property (copy, nonatomic) NSString *commenterNickname;
@property (nonatomic) long long eventTime;
@property (nonatomic) long long msgTime;
@property (nonatomic) long long endTime;
@property (nonatomic) int countdownStyle;
@property (nonatomic) long long operatorId;
@property (copy, nonatomic) NSString *operatorNickname;

+ (id)descriptor;

@end