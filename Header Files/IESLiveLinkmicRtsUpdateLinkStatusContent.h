//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveLinkmicRtsUpdateLinkStatusContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *targetLinkmicIdStr;
@property (nonatomic) long long targetUserId;
@property (nonatomic) int linkType;
@property (nonatomic) int silenceStatus;
@property (nonatomic) BOOL isKtv;
@property (nonatomic) BOOL needAck;
@property (copy, nonatomic) NSString *ackMessage;
@property (nonatomic) BOOL forceResumeVideoStream;
@property (nonatomic) BOOL forceResumeAudioStream;

+ (id)descriptor;

@end
