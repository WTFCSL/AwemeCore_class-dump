//
//     Generated by private class-dump
//

@class AWEBigThumbModel, NSMutableDictionary, NSString, AWEAwemeModel, AFDVideoProgressInteractionView, AWEStoryProgressContainerView, UIImage;
@protocol AFDVideoProgressInteractionManagerDelegate;

@interface AFDVideoProgressInteractionManager : NSObject <AFDVideoProgressInteractionManagerProtocol> {
    BOOL _requestBigThumb;
    id<AFDVideoProgressInteractionManagerDelegate> _delegate;
    AFDVideoProgressInteractionView *_videoProgressInteractionView;
    AWEStoryProgressContainerView *_progressContainerView;
    AWEAwemeModel *_model;
    double _duration;
    NSMutableDictionary *_bigImageDict;
    UIImage *_engineBigImage;
    AWEBigThumbModel *_dashThumbModel;
    double _slidingTime;
    double _touchBeganOffsetX;
}

@property (retain, nonatomic) AFDVideoProgressInteractionView *videoProgressInteractionView;
@property (retain, nonatomic) AWEStoryProgressContainerView *progressContainerView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSMutableDictionary *bigImageDict;
@property (retain, nonatomic) UIImage *engineBigImage;
@property (retain, nonatomic) AWEBigThumbModel *dashThumbModel;
@property (nonatomic) BOOL requestBigThumb;
@property (nonatomic) double slidingTime;
@property (nonatomic) double touchBeganOffsetX;
@property (weak, nonatomic) id<AFDVideoProgressInteractionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getBigThumbsWithIndex:(long long)arg0 model:(id)arg1 completion:(id /* block */)arg2;

- (void)progressContainerViewValueChangedWithOffsetX:(double)arg0;
- (void)pauseAlbumTimer:(BOOL)arg0;
- (void)touchActionCancelled;
- (BOOL)isInPinchView;
- (void)preloadPreviewImageWithModel:(id)arg0;
- (void)updateWithProgressContainerView:(id)arg0 model:(id)arg1 duration:(double)arg2;
- (void)progressContainerViewTouchBeganWithSuperview:(id)arg0;
- (double)currentProgressPercentage;
- (void)progressContainerViewTouchEndedWithPlayerController:(id)arg0 playActionBlock:(id /* block */)arg1 trackParams:(id)arg2 needUsePlayer:(BOOL)arg3;
- (void)resetPreviewImageCache;
- (void)dismissViews;
- (double)slidingTime;
- (void)setSlidingTime:(double)arg0;
- (id)dashThumbInfo;
- (void)setDashThumbModel:(id)arg0;
- (id)dashThumbModel;
- (id)engineBigImage;
- (BOOL)requestBigThumb;
- (void)setRequestBigThumb:(BOOL)arg0;
- (void)setEngineBigImage:(id)arg0;
- (BOOL)isStoryAlbum;
- (id)progressContainerView;
- (void)setProgressContainerView:(id)arg0;
- (BOOL)cancelActionIfMovedOutHotZone;
- (void)setBigImageDict:(id)arg0;
- (id)videoProgressInteractionView;
- (id)bigImageDict;
- (void)updatePreviewImage;
- (void)loadPreviewWithCompletion:(id /* block */)arg0 showPreviewImageView:(BOOL)arg1;
- (double)touchBeganOffsetX;
- (void)updateLastLocation;
- (void)setTouchBeganOffsetX:(double)arg0;
- (void)showPreviewImageIfNeeded;
- (BOOL)playStoryAlbum;
- (void)playVideoWithPlayerController:(id)arg0 playActionBlock:(id /* block */)arg1 duration:(double)arg2;
- (BOOL)playAlbum;
- (void)cancelActionTrackWithParams:(id)arg0;
- (void)trackActionWithParams:(id)arg0;
- (BOOL)shouldPreventPlay;
- (void)setVideoProgressInteractionView:(id)arg0;
- (void)setModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)model;
- (double)duration;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)pause;
- (void)setDuration:(double)arg0;

@end