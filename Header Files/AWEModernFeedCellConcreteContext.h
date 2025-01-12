//
//     Generated by private class-dump
//

@class NSString, NSDictionary, UIScrollView, UIViewController;

@interface AWEModernFeedCellConcreteContext : NSObject <AWEModernFeedCellContext> {
    id /* block */ _updateAccesoryViewBlock;
    id /* block */ _updateHiddenStatusBlock;
    id /* block */ _focusCurrentCellBlock;
    id /* block */ _saveCurrentScrollingStateBlock;
    id /* block */ _restoreSavedScrollingStateBlock;
    id /* block */ _forceBecomeActiveBlock;
    id /* block */ _endForceBecomingActiveBlock;
    id /* block */ _reloadCurrentSectionBlock;
    id /* block */ _removeRecommendWordsCardBlock;
    id /* block */ _queryIsLoadingDataBlock;
    id /* block */ _singleTapEnterAwemeDetailBlock;
    id /* block */ _singleTapEnterAwemeDetailBlockWithPlayer;
    id /* block */ _singleTapEnterAwemeDetailWithExtraBlock;
    id /* block */ _combinateCardAwemeListBlock;
    id /* block */ _recalculateToAutoPlayBlock;
    id /* block */ _registAutoPlayDistributeBlock;
    id /* block */ _videoPlayerStartPlay;
    id /* block */ _videoPlayerDidEndBlock;
    id /* block */ _videoPlayerDidPlayErrorBlock;
    id /* block */ _willEnterFullScreenBlock;
    id /* block */ _scrollToOffsetY;
    id /* block */ _scrollToDisplayItemWithOffset;
    id /* block */ _immersivePlayBlock;
    id /* block */ _immersiveBannerBlock;
    id /* block */ _showPendantBlock;
    id /* block */ _immersiveTransToBottomBlock;
    id /* block */ _searchChangeBackgroundColorBlock;
    id /* block */ _getSearchCardLocationBlock;
    id /* block */ _getFeedOffset;
    UIScrollView *_videoFeedScrollView;
    NSDictionary *_searchLogPassback;
    NSString *_searchType;
    id _bindedData;
    long long _sectionIndex;
    UIViewController *_startFromViewController;
    NSDictionary *_logExtraDict;
    id /* block */ _videoSinglePlayedBlock;
    id /* block */ _setAttachmentDataBlock;
    id /* block */ _updateIndexAwemeListBlock;
    id /* block */ _switchToSubTabBlock;
    id /* block */ _showRecommendWords;
    struct CGSize { double width; double height; } _viewControllerSize;
}

@property (copy, nonatomic) id /* block */ updateAccesoryViewBlock;
@property (copy, nonatomic) id /* block */ updateHiddenStatusBlock;
@property (copy, nonatomic) id /* block */ focusCurrentCellBlock;
@property (copy, nonatomic) id /* block */ saveCurrentScrollingStateBlock;
@property (copy, nonatomic) id /* block */ restoreSavedScrollingStateBlock;
@property (copy, nonatomic) id /* block */ forceBecomeActiveBlock;
@property (copy, nonatomic) id /* block */ endForceBecomingActiveBlock;
@property (copy, nonatomic) id /* block */ reloadCurrentSectionBlock;
@property (copy, nonatomic) id /* block */ removeRecommendWordsCardBlock;
@property (copy, nonatomic) id /* block */ queryIsLoadingDataBlock;
@property (copy, nonatomic) id /* block */ singleTapEnterAwemeDetailBlock;
@property (copy, nonatomic) id /* block */ singleTapEnterAwemeDetailBlockWithPlayer;
@property (copy, nonatomic) id /* block */ singleTapEnterAwemeDetailWithExtraBlock;
@property (copy, nonatomic) id /* block */ combinateCardAwemeListBlock;
@property (copy, nonatomic) id /* block */ recalculateToAutoPlayBlock;
@property (copy, nonatomic) id /* block */ registAutoPlayDistributeBlock;
@property (copy, nonatomic) id /* block */ videoPlayerStartPlay;
@property (copy, nonatomic) id /* block */ videoPlayerDidEndBlock;
@property (copy, nonatomic) id /* block */ videoPlayerDidPlayErrorBlock;
@property (copy, nonatomic) id /* block */ willEnterFullScreenBlock;
@property (copy, nonatomic) id /* block */ scrollToOffsetY;
@property (copy, nonatomic) id /* block */ scrollToDisplayItemWithOffset;
@property (copy, nonatomic) id /* block */ immersivePlayBlock;
@property (copy, nonatomic) id /* block */ immersiveBannerBlock;
@property (copy, nonatomic) id /* block */ showPendantBlock;
@property (copy, nonatomic) id /* block */ immersiveTransToBottomBlock;
@property (copy, nonatomic) id /* block */ searchChangeBackgroundColorBlock;
@property (copy, nonatomic) id /* block */ getSearchCardLocationBlock;
@property (copy, nonatomic) id /* block */ getFeedOffset;
@property (nonatomic) struct CGSize { double width; double height; } viewControllerSize;
@property (retain, nonatomic) UIScrollView *videoFeedScrollView;
@property (copy, nonatomic) NSDictionary *searchLogPassback;
@property (copy, nonatomic) NSString *searchType;
@property (retain, nonatomic) id bindedData;
@property (nonatomic) long long sectionIndex;
@property (weak, nonatomic) UIViewController *startFromViewController;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) id /* block */ videoSinglePlayedBlock;
@property (copy, nonatomic) id /* block */ setAttachmentDataBlock;
@property (copy, nonatomic) id /* block */ updateIndexAwemeListBlock;
@property (copy, nonatomic) id /* block */ switchToSubTabBlock;
@property (copy, nonatomic) id /* block */ showRecommendWords;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (BOOL)isContentLoading;
- (id /* block */)reloadCurrentSectionBlock;
- (id /* block */)scrollToDisplayItemWithOffset;
- (id /* block */)forceBecomeActiveBlock;
- (id /* block */)willEnterFullScreenBlock;
- (id)searchLogPassback;
- (void)setSearchLogPassback:(id)arg0;
- (void)setGetFeedOffset:(id /* block */)arg0;
- (void)setRestoreSavedScrollingStateBlock:(id /* block */)arg0;
- (void)setForceBecomeActiveBlock:(id /* block */)arg0;
- (void)setEndForceBecomingActiveBlock:(id /* block */)arg0;
- (void)setReloadCurrentSectionBlock:(id /* block */)arg0;
- (void)setSingleTapEnterAwemeDetailBlock:(id /* block */)arg0;
- (void)setSingleTapEnterAwemeDetailWithExtraBlock:(id /* block */)arg0;
- (void)setRecalculateToAutoPlayBlock:(id /* block */)arg0;
- (id /* block */)videoPlayerStartPlay;
- (void)setVideoPlayerStartPlay:(id /* block */)arg0;
- (void)setVideoPlayerDidEndBlock:(id /* block */)arg0;
- (void)setVideoPlayerDidPlayErrorBlock:(id /* block */)arg0;
- (void)setWillEnterFullScreenBlock:(id /* block */)arg0;
- (void)setScrollToOffsetY:(id /* block */)arg0;
- (void)setScrollToDisplayItemWithOffset:(id /* block */)arg0;
- (void)setVideoSinglePlayedBlock:(id /* block */)arg0;
- (id /* block */)getFeedOffset;
- (id /* block */)restoreSavedScrollingStateBlock;
- (id /* block */)endForceBecomingActiveBlock;
- (id /* block */)singleTapEnterAwemeDetailBlock;
- (id /* block */)singleTapEnterAwemeDetailWithExtraBlock;
- (id /* block */)recalculateToAutoPlayBlock;
- (id /* block */)videoPlayerDidEndBlock;
- (id /* block */)videoPlayerDidPlayErrorBlock;
- (id /* block */)scrollToOffsetY;
- (id /* block */)videoSinglePlayedBlock;
- (void)reloadCurrentSection;
- (void)setQueryIsLoadingDataBlock:(id /* block */)arg0;
- (void)setSingleTapEnterAwemeDetailBlockWithPlayer:(id /* block */)arg0;
- (void)setCombinateCardAwemeListBlock:(id /* block */)arg0;
- (void)setRegistAutoPlayDistributeBlock:(id /* block */)arg0;
- (void)setSetAttachmentDataBlock:(id /* block */)arg0;
- (id)bindedData;
- (void)forceBecomeActive;
- (void)singleTapEnterAwemeDetailWithExtra:(id)arg0;
- (void)saveCurrentScrollingState;
- (void)focusCurrentCellAnimated:(BOOL)arg0;
- (void)setBindedData:(id)arg0;
- (void)scrollToDisplayItemWithOffset:(double)arg0 animated:(BOOL)arg1;
- (void)videoPlayerWillPlay;
- (void)singleTapEnterAwemeDetailWithPlayer:(id)arg0 extra:(id)arg1;
- (void)singleTapEnterAwemeDetail;
- (id)startFromViewController;
- (void)endForceBecomingActive;
- (void)setStartFromViewController:(id)arg0;
- (void)accessaryViewDidUpdateAnimated:(BOOL)arg0;
- (id /* block */)updateAccesoryViewBlock;
- (id /* block */)updateHiddenStatusBlock;
- (id /* block */)focusCurrentCellBlock;
- (id /* block */)saveCurrentScrollingStateBlock;
- (void)reloadCurrentSectionAnimated:(BOOL)arg0;
- (id /* block */)queryIsLoadingDataBlock;
- (id /* block */)singleTapEnterAwemeDetailBlockWithPlayer;
- (id /* block */)switchToSubTabBlock;
- (id /* block */)registAutoPlayDistributeBlock;
- (id /* block */)getSearchCardLocationBlock;
- (id /* block */)combinateCardAwemeListBlock;
- (id /* block */)setAttachmentDataBlock;
- (id /* block */)updateIndexAwemeListBlock;
- (id /* block */)showRecommendWords;
- (id /* block */)immersivePlayBlock;
- (id /* block */)immersiveBannerBlock;
- (id /* block */)showPendantBlock;
- (id /* block */)immersiveTransToBottomBlock;
- (id /* block */)searchChangeBackgroundColorBlock;
- (void)searchImmersivePlay:(BOOL)arg0;
- (void)searchImmersiveBanner:(id)arg0;
- (void)searchShowPendant:(id)arg0;
- (void)searchTransToBottom:(id)arg0;
- (void)searchChangeBackgroundColor:(id)arg0;
- (void)hiddenStatusDidUpdateAnimated:(BOOL)arg0;
- (void)restoreSavedScrollingStateAnimated:(BOOL)arg0;
- (void)videoPlayerDidEnd;
- (void)videoPlayerDidPlayError;
- (struct CGSize { double x0; double x1; })viewControllerSize;
- (void)recalculateToAutoPlay;
- (id)combinateCardAwemeList;
- (void)setAttachmentData:(id)arg0 animated:(BOOL)arg1;
- (void)showRecommendWordsIfNeeded:(id)arg0 completion:(id /* block */)arg1;
- (void)scrollToOffsetY:(double)arg0;
- (id)getSearchCardLocation;
- (double)getVideoFeedOffset;
- (void)registAutoplayDistribute:(id)arg0;
- (void)switchToSubTab:(id)arg0 changeTabView:(BOOL)arg1 enterMethod:(id)arg2;
- (void)updateIndex:(long long)arg0 withAwemeList:(id)arg1;
- (id)videoFeedScrollView;
- (void)setVideoFeedScrollView:(id)arg0;
- (void)setUpdateAccesoryViewBlock:(id /* block */)arg0;
- (void)setUpdateHiddenStatusBlock:(id /* block */)arg0;
- (void)setFocusCurrentCellBlock:(id /* block */)arg0;
- (void)setSaveCurrentScrollingStateBlock:(id /* block */)arg0;
- (id /* block */)removeRecommendWordsCardBlock;
- (void)setRemoveRecommendWordsCardBlock:(id /* block */)arg0;
- (void)setImmersivePlayBlock:(id /* block */)arg0;
- (void)setImmersiveBannerBlock:(id /* block */)arg0;
- (void)setShowPendantBlock:(id /* block */)arg0;
- (void)setImmersiveTransToBottomBlock:(id /* block */)arg0;
- (void)setSearchChangeBackgroundColorBlock:(id /* block */)arg0;
- (void)setGetSearchCardLocationBlock:(id /* block */)arg0;
- (void)setViewControllerSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setUpdateIndexAwemeListBlock:(id /* block */)arg0;
- (void)setSwitchToSubTabBlock:(id /* block */)arg0;
- (void)setShowRecommendWords:(id /* block */)arg0;
- (void)setSearchType:(id)arg0;
- (id)searchType;
- (void).cxx_destruct;
- (void)willEnterFullScreen;
- (long long)sectionIndex;
- (void)setSectionIndex:(long long)arg0;

@end
