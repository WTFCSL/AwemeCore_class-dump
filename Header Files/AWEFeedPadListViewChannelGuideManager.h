//
//     Generated by private class-dump
//

@class NSString, NSArray, MMKV, AWEFeedPadListViewChannelBadgeInfoModel, AWEFeedPadListViewChannelBubbleInfoModel, AWEPadListViewChannelInfo, AWEPadListViewChannelTabLottieModel;
@protocol AWEFeedPadListViewChannelGuideManagerDelegate;

@interface AWEFeedPadListViewChannelGuideManager : NSObject <AWEPadListViewChannelGuideManagerProtocol, AWEActivityLifeCycleProtocol> {
    BOOL _isChannelViewAppear;
    BOOL _isShowingBadge;
    BOOL _isShowingBubble;
    BOOL _isShowingLottie;
    id<AWEFeedPadListViewChannelGuideManagerDelegate> _delegate;
    AWEPadListViewChannelInfo *_channelInfo;
    NSArray *_bubbleArray;
    NSArray *_badgeArray;
    MMKV *_mmkv;
    AWEFeedPadListViewChannelBadgeInfoModel *_currentBadge;
    AWEFeedPadListViewChannelBubbleInfoModel *_currentBubble;
    AWEPadListViewChannelTabLottieModel *_currentLottie;
}

@property (retain, nonatomic) AWEPadListViewChannelInfo *channelInfo;
@property (retain, nonatomic) NSArray *bubbleArray;
@property (retain, nonatomic) NSArray *badgeArray;
@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) AWEFeedPadListViewChannelBadgeInfoModel *currentBadge;
@property (retain, nonatomic) AWEFeedPadListViewChannelBubbleInfoModel *currentBubble;
@property (retain, nonatomic) AWEPadListViewChannelTabLottieModel *currentLottie;
@property (nonatomic) BOOL isChannelViewAppear;
@property (nonatomic) BOOL isShowingBadge;
@property (nonatomic) BOOL isShowingBubble;
@property (nonatomic) BOOL isShowingLottie;
@property (weak, nonatomic) id<AWEFeedPadListViewChannelGuideManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMmkv:(id)arg0;
- (id)mmkv;
- (void)channelDidLoad;
- (void)channelViewDidAppear;
- (void)channelViewDidDisappear;
- (id)initWithData:(id)arg0 extraInfo:(id)arg1;
- (id)badgeArray;
- (id)bubbleArray;
- (void)setChannelInfo:(id)arg0;
- (BOOL)isChannelViewAppear;
- (void)setIsChannelViewAppear:(BOOL)arg0;
- (void)setBubbleArray:(id)arg0;
- (void)setBadgeArray:(id)arg0;
- (void)hideBadgeIfNeed;
- (BOOL)isShowingLottie;
- (id)currentLottie;
- (id)lottieIsClickKey:(id)arg0;
- (void)trackNoticeClickIfNeed;
- (void)showBubbleIfNeed;
- (void)showBadgeIfNeed;
- (void)updateTopBarLottieIfNeed;
- (void)autoHideBadgeIfNeed;
- (void)autoHideTopBarLottieIfNeed;
- (BOOL)isShowingBadge;
- (BOOL)canShowBadge:(id)arg0;
- (void)setIsShowingBadge:(BOOL)arg0;
- (void)setCurrentBadge:(id)arg0;
- (void)trackNoticeShow:(id)arg0;
- (id)currentBadge;
- (long long)currentBadgeVersion;
- (BOOL)checkIfCurrentTimeInRangeWithStartTime:(double)arg0 endTime:(double)arg1;
- (BOOL)isShowingBubble;
- (BOOL)canShowBubble:(id)arg0;
- (void)trackNoticeClick:(id)arg0;
- (void)setIsShowingBubble:(BOOL)arg0;
- (void)setCurrentBubble:(id)arg0;
- (long long)currentBubbleVersion;
- (BOOL)canShowTopBarLottie:(id)arg0;
- (void)setCurrentLottie:(id)arg0;
- (void)setIsShowingLottie:(BOOL)arg0;
- (id)lottieShowCountKey:(id)arg0;
- (id)currentBubble;
- (void)timing;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)channelInfo;

@end
