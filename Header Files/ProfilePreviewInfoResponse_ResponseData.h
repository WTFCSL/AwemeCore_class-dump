//
//     Generated by private class-dump
//

@class HTSLiveAlbumItem, HTSLiveImage, HTSLiveMultiSeasonInfo;

@interface ProfilePreviewInfoResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveMultiSeasonInfo *multiSeasonLabel;
@property (nonatomic) BOOL hasMultiSeasonLabel;
@property (retain, nonatomic) HTSLiveAlbumItem *profileCard;
@property (nonatomic) BOOL hasProfileCard;
@property (retain, nonatomic) HTSLiveImage *darkCover;
@property (nonatomic) BOOL hasDarkCover;
@property (retain, nonatomic) HTSLiveImage *lightCover;
@property (nonatomic) BOOL hasLightCover;

+ (id)descriptor;

@end