//
//     Generated by private class-dump
//

@class HTSLiveText, HTSLiveCommon, HTSLiveUser;

@interface HTSLiveRoomChannelGiftMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (retain, nonatomic) HTSLiveText *rtfContent;
@property (nonatomic) BOOL hasRtfContent;

+ (id)descriptor;

@end
