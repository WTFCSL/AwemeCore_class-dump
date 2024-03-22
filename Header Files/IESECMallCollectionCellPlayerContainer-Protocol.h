//
//     Generated by private class-dump
//

@protocol IESECMallCollectionCellPlayerContainer <NSObject>

@optional

- (double)currentPlayTime;
- (id)videoData;
- (id)awemeId;
- (BOOL)isValidVideo;
- (id)playTimeLabel;
- (id)liveModel;
- (id)playIconImageView;
- (id)containerForAwemePlay;
- (id)mainVideoURL;
- (id)mainStreamData;
- (id)mainVideoDuration;
- (void)reportPlayerPlayResult:(id)arg0;
- (id)coverImageViewForAwemePlay;
- (id)playerInnerListEnvID;
- (void)updateCurrent:(double)arg0 duration:(double)arg1;
- (BOOL)isCellMute;
- (BOOL)shouldRepeatForVideo;
- (BOOL)canSetMute;
- (id)nickname;
- (unsigned long long)cellType;
- (void)setPlayerHidden:(BOOL)arg0;

@end