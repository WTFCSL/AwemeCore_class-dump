//
//     Generated by private class-dump
//

@class EpisodeInfoStructNewV2, AlbumInfoStructV2, LVideoHighLightV2, LVideoPreviewConfigV2, NSString, XiguaGuideV2;

@interface LVideoBriefStructV2 : GPBMessage

@property (retain, nonatomic) AlbumInfoStructV2 *albumInfo;
@property (nonatomic) BOOL hasAlbumInfo;
@property (retain, nonatomic) EpisodeInfoStructNewV2 *episodeInfo;
@property (nonatomic) BOOL hasEpisodeInfo;
@property (retain, nonatomic) XiguaGuideV2 *xiguaGuide;
@property (nonatomic) BOOL hasXiguaGuide;
@property (retain, nonatomic) LVideoHighLightV2 *highLightInfo;
@property (nonatomic) BOOL hasHighLightInfo;
@property (retain, nonatomic) LVideoPreviewConfigV2 *config;
@property (nonatomic) BOOL hasConfig;
@property (nonatomic) int containerType;
@property (nonatomic) BOOL hasContainerType;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasCursor;
@property (copy, nonatomic) NSString *authorRoleTitle;
@property (nonatomic) BOOL hasAuthorRoleTitle;

+ (id)descriptor;

@end
