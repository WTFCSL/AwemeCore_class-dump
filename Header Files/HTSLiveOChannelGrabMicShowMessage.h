//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon, HTSLiveUser;

@interface HTSLiveOChannelGrabMicShowMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long showId;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long startTimestamp;
@property (nonatomic) long long endTimestamp;
@property (retain, nonatomic) HTSLiveUser *channelUser;
@property (nonatomic) BOOL hasChannelUser;
@property (copy, nonatomic) NSString *showlistName;

+ (id)descriptor;

@end
