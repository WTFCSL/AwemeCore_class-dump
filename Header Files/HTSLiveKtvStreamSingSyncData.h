//
//     Generated by private class-dump
//

@class IESLiveKtvAtmosphereVideoInfo, IESLiveKTVMVInfo, IESLiveKtvSongStruct;

@interface HTSLiveKtvStreamSingSyncData : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKtvSongStruct *song;
@property (nonatomic) BOOL hasSong;
@property (retain, nonatomic) IESLiveKtvAtmosphereVideoInfo *videoInfo;
@property (nonatomic) BOOL hasVideoInfo;
@property (nonatomic) long long timeStamp;
@property (nonatomic) int action;
@property (retain, nonatomic) IESLiveKTVMVInfo *mvInfo;
@property (nonatomic) BOOL hasMvInfo;

+ (id)descriptor;

@end
