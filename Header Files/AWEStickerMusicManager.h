//
//     Generated by private class-dump
//

@interface AWEStickerMusicManager : NSObject

+ (id)localURLForMusic:(id)arg0;
+ (BOOL)musicIsForceBindStickerWithExtra:(id)arg0;
+ (BOOL)insertMusicModelToCache:(id)arg0;
+ (void)setForceBindMusicDownloadFailedWithEffectIdentifier:(id)arg0;
+ (id)fetchtMusicModelFromCache:(id)arg0;
+ (BOOL)getForceBindMusicDownloadFailed:(id)arg0;
+ (BOOL)needToDownloadMusicWithEffectModel:(id)arg0;
+ (void)initializeForceBindMusicDownloadFailed;

@end
