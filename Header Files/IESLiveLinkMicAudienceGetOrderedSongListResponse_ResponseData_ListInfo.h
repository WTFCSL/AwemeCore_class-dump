//
//     Generated by private class-dump
//

@class HTSLiveMultiChorusSongItem, IESLiveKtvSongStruct;

@interface IESLiveLinkMicAudienceGetOrderedSongListResponse_ResponseData_ListInfo : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKtvSongStruct *music;
@property (nonatomic) BOOL hasMusic;
@property (nonatomic) BOOL isSelfSeeing;
@property (retain, nonatomic) HTSLiveMultiChorusSongItem *multiChorusSongItem;
@property (nonatomic) BOOL hasMultiChorusSongItem;

+ (id)descriptor;

@end
