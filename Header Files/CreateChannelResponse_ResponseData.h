//
//     Generated by private class-dump
//

@class NSString, RoomChannelInfo, HTSLiveText;

@interface CreateChannelResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) RoomChannelInfo *channelInfo;
@property (nonatomic) BOOL hasChannelInfo;
@property (retain, nonatomic) HTSLiveText *createTips;
@property (nonatomic) BOOL hasCreateTips;
@property (copy, nonatomic) NSString *guideToast;

+ (id)descriptor;

@end
