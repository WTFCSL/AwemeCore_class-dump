//
//     Generated by private class-dump
//

@protocol ACCMusicModelProtocol;

@protocol ACCMusicRepoData <NSObject>

@property (readonly, nonatomic) id<ACCMusicModelProtocol> backgroundMusic;

- (BOOL)postDownload;
- (id)musicConfigAssembler;
- (id)passthroughMusicID;
- (BOOL)isEditReplaceMusic;
- (id)editPageNeedDelayLoadMusicId;
- (BOOL)hasBgm;
- (id)backgroundMusic;

@end