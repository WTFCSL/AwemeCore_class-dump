//
//     Generated by private class-dump
//

@class AWEFeedRVSingleListSlideUpGuideButton, AWEFeedRVSingleListSlideUpGuideTextView;
@protocol AWEFeedRVSingleListSlideUpGuideManagerDelegate;

@interface AWEFeedRVSingleListSlideUpGuideManager : NSObject {
    id<AWEFeedRVSingleListSlideUpGuideManagerDelegate> _delegate;
    AWEFeedRVSingleListSlideUpGuideTextView *_guideTextView;
    AWEFeedRVSingleListSlideUpGuideButton *_guideButton;
}

@property (retain, nonatomic) AWEFeedRVSingleListSlideUpGuideButton *guideButton;
@property (weak, nonatomic) id<AWEFeedRVSingleListSlideUpGuideManagerDelegate> delegate;
@property (retain, nonatomic) AWEFeedRVSingleListSlideUpGuideTextView *guideTextView;

- (double)textViewHeight;
- (id)dateStrForDate:(id)arg0;
- (BOOL)shouldShowSlideUpGuideButton;
- (void)trackRecommendGuideShow;
- (BOOL)shouldShowGuideTextView;
- (id)guideTextView;
- (void)showSlideUpGuideButtonIfNeededOnView:(id)arg0 withClickedHandler:(id /* block */)arg1;
- (void)dismissSlideUpGuideButtonIfNeeded;
- (void)updateRVSlideUpAndVideoPlayTime;
- (void)updateGuideTextViewIfNeeded:(BOOL)arg0;
- (void)resetButtonTitle:(id)arg0;
- (void)setGuideTextView:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)guideButton;
- (void)setGuideButton:(id)arg0;

@end
