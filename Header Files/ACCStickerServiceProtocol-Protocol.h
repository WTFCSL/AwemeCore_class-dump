//
//     Generated by private class-dump
//

@class ACCStickerHandler, ACCStickerContainerView, RACSignal;
@protocol ACCStickerPlayerApplying, ACCStickerCompoundHandler;

@protocol ACCStickerServiceProtocol <NSObject>

@property (readonly, weak, nonatomic) ACCStickerContainerView *stickerContainer;
@property (readonly, weak, nonatomic) id<ACCStickerPlayerApplying> player;
@property (readonly, nonatomic) ACCStickerHandler<ACCStickerCompoundHandler> *compoundHandler;
@property (readonly, nonatomic) ACCStickerHandler<ACCStickerCompoundHandler> *globalCompoundHandler;
@property (readonly, nonatomic) RACSignal *willStartEditingStickerSignal;
@property (readonly, nonatomic) RACSignal *didFinishEditingStickerSignal;
@property (readonly, nonatomic) RACSignal *didFinishEditingStickerAnimationSignal;
@property (readonly, nonatomic) RACSignal *stickerDeselectedSignal;
@property (readonly, nonatomic) RACSignal *sequenceStickerSignal;
@property (readonly, nonatomic) BOOL isAllStickersInPlayer;
@property (readonly, nonatomic) BOOL isAllInfoStickersInPlayer;
@property (readonly, nonatomic) BOOL hasStickers;
@property (readonly, nonatomic) BOOL canAddMoreText;
@property (readonly, nonatomic) BOOL needAdaptPlayer;
@property (readonly, nonatomic) BOOL enableAllRuntimeStickerCovertToImageAlbum;
@property (readonly, nonatomic) long long infoStickerCount;
@property (readonly, nonatomic) long long stickerCount;
@property (readonly, nonatomic) BOOL needAdapterTo9V16FrameForPublish;
@property (retain, nonatomic) ACCStickerContainerView *simStickerContainer;
@property (readonly, nonatomic) long long independentStickersCount;
@property (readonly, nonatomic) RACSignal *willStartTextReadingStickerSignal;
@property (readonly, nonatomic) RACSignal *didFinishTextReadingStickerSignal;

- (long long)stickerCount;
- (void)registStickerHandler:(id)arg0;
- (void)unRegistStickerHandler:(id)arg0;
- (void)updateStickerPlayer:(id)arg0;
- (void)startEditingStickerOfType:(long long)arg0;
- (void)finishEditingStickerOfType:(long long)arg0;
- (void)finishEditingStickerAnimationOfType:(long long)arg0;
- (void)syncStickerTimeLine;
- (void)updateTextReaderClipForMainTrack;
- (void)deselectAllSticker;
- (void)dismissPreviewEdge;
- (void)syncStickerInfoWithVideo;
- (void)updateStickerViewWithOriginStickerId:(long long)arg0 newStickerId:(long long)arg1;
- (void)resetStickerInPlayer;
- (BOOL)isAllEditEffectInPlayerContaienr;
- (void)refreshVirtualStickerTracks;
- (BOOL)reachedMaxStickerCount;
- (id)stickerContainer;
- (id)compoundHandler;
- (id)globalCompoundHandler;
- (id)willStartEditingStickerSignal;
- (id)didFinishEditingStickerSignal;
- (id)didFinishEditingStickerAnimationSignal;
- (id)stickerDeselectedSignal;
- (id)sequenceStickerSignal;
- (BOOL)isAllStickersInPlayer;
- (BOOL)isAllInfoStickersInPlayer;
- (BOOL)canAddMoreText;
- (BOOL)needAdaptPlayer;
- (BOOL)enableAllRuntimeStickerCovertToImageAlbum;
- (long long)infoStickerCount;
- (BOOL)needAdapterTo9V16FrameForPublish;
- (void)addSubscriber:(id)arg0;
- (id)player;
- (void)removeSubscriber:(id)arg0;
- (BOOL)hasStickers;

@optional

- (void)recoveryStickersForContainer:(id)arg0 imageModel:(id)arg1;
- (void)updateStickersDuration:(double)arg0;
- (void)updateStickersDuration:(double)arg0 ignoreTimeRange:(BOOL)arg1;
- (BOOL)isSelectedSticker:(id)arg0;
- (void)startTextReadStickerOfType:(long long)arg0;
- (void)finishTextReadStickerOfType:(long long)arg0;
- (id)simStickerContainer;
- (void)setSimStickerContainer:(id)arg0;
- (long long)independentStickersCount;
- (id)willStartTextReadingStickerSignal;
- (id)didFinishTextReadingStickerSignal;

@end
