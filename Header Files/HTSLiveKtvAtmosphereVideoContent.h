//
//     Generated by private class-dump
//

@class IESLiveKtvAtmosphereVideoInfo, IESLiveKTVMVInfo;

@interface HTSLiveKtvAtmosphereVideoContent : IESLivePBBaseMessage

@property (nonatomic) long long uid;
@property (nonatomic) long long songId;
@property (retain, nonatomic) IESLiveKtvAtmosphereVideoInfo *videoInfo;
@property (nonatomic) BOOL hasVideoInfo;
@property (retain, nonatomic) IESLiveKTVMVInfo *mvInfo;
@property (nonatomic) BOOL hasMvInfo;

+ (id)descriptor;

@end
