//
//     Generated by private class-dump
//

@class JoinChannelRtcInfo;

@interface LinkMicApplyResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) BOOL needPermit;
@property (retain, nonatomic) JoinChannelRtcInfo *rtcInfo;
@property (nonatomic) BOOL hasRtcInfo;

+ (id)descriptor;

@end
