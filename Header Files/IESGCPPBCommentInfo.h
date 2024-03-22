//
//     Generated by private class-dump
//

@class NSString, IESGCPPBGameUser, IESGCPPBGameCPUserExtra;

@interface IESGCPPBCommentInfo : GPBMessage

@property (copy, nonatomic) NSString *commentId;
@property (copy, nonatomic) NSString *evalId;
@property (copy, nonatomic) NSString *gameId;
@property (nonatomic) long long layer;
@property (copy, nonatomic) NSString *replyToCommentId;
@property (copy, nonatomic) NSString *replyToReplyId;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long createTime;
@property (nonatomic) long long likeCount;
@property (nonatomic) long long commentCount;
@property (nonatomic) long long relationTypeFlag;
@property (nonatomic) int commentStatus;
@property (retain, nonatomic) IESGCPPBGameCPUserExtra *userExtra;
@property (nonatomic) BOOL hasUserExtra;
@property (retain, nonatomic) IESGCPPBGameUser *gameUser;
@property (nonatomic) BOOL hasGameUser;
@property (retain, nonatomic) IESGCPPBGameUser *replyToGameUser;
@property (nonatomic) BOOL hasReplyToGameUser;
@property (nonatomic) BOOL isOwnReply;

+ (id)descriptor;

@end
