//
//     Generated by private class-dump
//

@class NSString;

@interface HTSLiveLinkerUpdateLinkTypeApplyContent : IESLivePBBaseMessage

@property (nonatomic) long long fromUserId;
@property (nonatomic) long long toUserId;
@property (nonatomic) int linkType;
@property (nonatomic) int source;
@property (copy, nonatomic) NSString *ackMessage;

+ (id)descriptor;

@end