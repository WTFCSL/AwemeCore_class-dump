//
//     Generated by private class-dump
//

@class NSString, IESLiveMultiRtcInfo;

@interface IESLiveLinkMicAudienceUpdateLinkTypeReplyResponse_ResponseData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *rtcExtInfo;
@property (copy, nonatomic) NSString *liveCoreExtInfo;
@property (retain, nonatomic) IESLiveMultiRtcInfo *multiRtcInfo;
@property (nonatomic) BOOL hasMultiRtcInfo;

+ (id)descriptor;

@end
