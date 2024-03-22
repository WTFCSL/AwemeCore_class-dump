//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMusicFeedService : HTSService <AWEMusicFeedService> {
    NSString *_musicId;
    NSString *_videoId;
    NSString *_enterFrom;
}

@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)setMusicId:(id)arg0;
- (id)musicId;
- (void)showAlertIfNeedFrom:(id)arg0 isMiniLuna:(BOOL)arg1;
- (void)showAlertIfNeedFrom:(id)arg0 isMiniLuna:(BOOL)arg1 confirmBlk:(id /* block */)arg2;
- (BOOL)shouldShowLikeGuide;
- (void)changeMusicCollectWithCustom:(unsigned long long)arg0 musicId:(id)arg1 videoId:(id)arg2 scene:(id)arg3 trackParam:(id)arg4 completion:(id /* block */)arg5;
- (id)musicLabelStringFromModel:(id)arg0;
- (void)p_trackFavouriteSongWithCollectType:(unsigned long long)arg0 EnterFrom:(id)arg1 musicId:(id)arg2 groupId:(id)arg3;
- (id)p_titleForGuide;
- (id)p_descForGuide;
- (id)p_confirmForGuide;
- (id)p_cancelForGuide;
- (void)p_handleConfirmAction;
- (void)p_gotoDSP:(BOOL)arg0;
- (id)p_tutorialTypeForGuide;
- (void)p_trackTutorialCompleteWithEnterFrom:(id)arg0 type:(id)arg1 method:(id)arg2;
- (BOOL)p_isMyMusicEntranceShow;
- (void)p_trackTutorialShowWithEnterFrom:(id)arg0 type:(id)arg1;
- (id)p_musicLabelStringForPGCMusic:(id)arg0;
- (BOOL)musicInfoStringSimplify;
- (void)setVideoId:(id)arg0;
- (void).cxx_destruct;
- (id)videoId;

@end