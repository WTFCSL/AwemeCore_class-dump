//
//     Generated by private class-dump
//

@class NSString, IESLiveKtvSongStruct;

@interface GetSungSongListResponse_ResponseData_SungSongInfo : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKtvSongStruct *music;
@property (nonatomic) BOOL hasMusic;
@property (copy, nonatomic) NSString *itemId;

+ (id)descriptor;

@end