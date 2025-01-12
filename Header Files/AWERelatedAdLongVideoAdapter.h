//
//     Generated by private class-dump
//

@class NSString, AWEAdLongVideoContainerViewModel;

@interface AWERelatedAdLongVideoAdapter : NSObject <AWERelatedAdLongVideoAdapter, AWEAdLongVideoContainerLifeCycleDelegate, AWEAdLongVideoContainerInteractionDelegate> {
    id /* block */ _playValidTrackBlock;
    AWEAdLongVideoContainerViewModel *_bannerViewModel;
}

@property (copy, nonatomic) id /* block */ playValidTrackBlock;
@property (copy, nonatomic) AWEAdLongVideoContainerViewModel *bannerViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isPreAdExistInLongVideo:(id)arg0;
+ (id)relatedLongVideoAdPageContextWithModel:(id)arg0;
+ (BOOL)canShowAdLongContainerView;
+ (void)refreshAdContainer:(id)arg0 withAwemeModel:(id)arg1;

- (void)startFetchLongVideoAdBannerData:(id)arg0 withBlock:(id /* block */)arg1;
- (void)resetAdBanner;
- (void)didTappedEnterFullScreenView:(id)arg0;
- (void)didTappedTimerCloseAdView:(id)arg0;
- (void)didTappedBackbutton:(id)arg0;
- (void)didTappedAdEventArea:(long long)arg0 videoInfo:(id)arg1;
- (void)adContainer:(id)arg0 userStopped:(id)arg1;
- (void)adContainer:(id)arg0 startPlayVideo:(id)arg1;
- (void)adContainer:(id)arg0 videoFinish:(id)arg1;
- (void)adContainer:(id)arg0 videoPlayTime:(double)arg1 videoInfo:(id)arg2;
- (void)trackAdLVEventWithLabel:(id)arg0 refer:(id)arg1 videoInfo:(id)arg2;
- (void)updatePlayValidTrackBlockWithVideoInfo:(id)arg0;
- (id /* block */)playValidTrackBlock;
- (void)setPlayValidTrackBlock:(id /* block */)arg0;
- (id)bannerViewModel;
- (void)setBannerViewModel:(id)arg0;
- (void)clearAllData;
- (void).cxx_destruct;

@end
