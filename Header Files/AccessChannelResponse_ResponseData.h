//
//     Generated by private class-dump
//

@class NSString, RoomChannelInfo;

@interface AccessChannelResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) RoomChannelInfo *channelInfo;
@property (nonatomic) BOOL hasChannelInfo;
@property (nonatomic) BOOL needReview;
@property (copy, nonatomic) NSString *toast;

+ (id)descriptor;

@end
