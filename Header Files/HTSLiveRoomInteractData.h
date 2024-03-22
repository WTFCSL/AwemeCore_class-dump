//
//     Generated by private class-dump
//

@class HTSLivePublicScreenSpeedConf, RoomIntroLabel, HTSLiveFeaturedPublicScreenConf, HTSLiveEpisodeExtraInfo;

@interface HTSLiveRoomInteractData : IESLivePBBaseMessage

@property (nonatomic) long long landscapeCommentStyle;
@property (retain, nonatomic) HTSLiveEpisodeExtraInfo *vsComponentExtra;
@property (nonatomic) BOOL hasVsComponentExtra;
@property (retain, nonatomic) HTSLiveFeaturedPublicScreenConf *featuredPublicScreenData;
@property (nonatomic) BOOL hasFeaturedPublicScreenData;
@property (retain, nonatomic) HTSLivePublicScreenSpeedConf *publicScreenSpeedConf;
@property (nonatomic) BOOL hasPublicScreenSpeedConf;
@property (retain, nonatomic) RoomIntroLabel *publicRoomIntroLabel;
@property (nonatomic) BOOL hasPublicRoomIntroLabel;

+ (id)descriptor;

@end