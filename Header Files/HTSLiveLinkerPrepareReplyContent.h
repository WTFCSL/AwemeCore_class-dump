//
//     Generated by private class-dump
//

@class NSString;

@interface HTSLiveLinkerPrepareReplyContent : IESLivePBBaseMessage

@property (nonatomic) long long fromUserId;
@property (nonatomic) long long fromRoomId;
@property (nonatomic) long long toUserId;
@property (nonatomic) int replyType;
@property (copy, nonatomic) NSString *toast;

+ (id)descriptor;

@end
