//
//     Generated by private class-dump
//

@class AWEFeedChannelTopBarEntranceModel, AWEHPTopTabItemUIModel, NSString, AWEHPChannelTopTabItemSelectedIndicatorParams, AWEHPChannelLottieTask, AWEHPChannelPauseSearchEntranceTask, AWEHPChannelTopTabItemIndicatorIconParams, AWEHPChannelBubbleTask, AWEFCTopBarEntranceStage, AWEHPChannelBadgeTask;
@protocol AWEHPPinTopComponentProtocol;

@interface AWEHPChannelTopBarStage : NSObject {
    BOOL _isTopTabSelected;
    BOOL _isTopTabContainerAppear;
    AWEHPTopTabItemUIModel *_topTabItemUIModel;
    AWEHPChannelTopTabItemIndicatorIconParams *_indicatorIcon;
    AWEHPChannelTopTabItemSelectedIndicatorParams *_selectedIndicatorInfo;
    AWEFeedChannelTopBarEntranceModel *_tabItem;
    NSString *_accessibilityHintText;
    NSString *_accessibilityHintSuffix;
    long long _topTabOrder;
    long long _topRecommendTabOrder;
    AWEHPChannelBadgeTask *_curBadgeTask;
    AWEHPChannelBubbleTask *_curBubbleTask;
    AWEHPChannelBadgeTask *_lastShowBadgeTask;
    AWEHPChannelBubbleTask *_lastShowBubbleTask;
    AWEHPChannelPauseSearchEntranceTask *_pauseEntranceTask;
    AWEFCTopBarEntranceStage *_topBarRightEntranceStage;
    unsigned long long _topBarThemeStyle;
    id<AWEHPPinTopComponentProtocol> _pinTopComponent;
    AWEHPChannelLottieTask *_lottieTask;
    AWEHPChannelLottieTask *_tempLottieTask;
}

@property (retain, nonatomic) AWEHPTopTabItemUIModel *topTabItemUIModel;
@property (readonly, nonatomic) AWEHPChannelTopTabItemIndicatorIconParams *indicatorIcon;
@property (readonly, nonatomic) AWEHPChannelTopTabItemSelectedIndicatorParams *selectedIndicatorInfo;
@property (copy, nonatomic) AWEFeedChannelTopBarEntranceModel *tabItem;
@property (copy, nonatomic) NSString *accessibilityHintText;
@property (copy, nonatomic) NSString *accessibilityHintSuffix;
@property (nonatomic) long long topTabOrder;
@property (nonatomic) long long topRecommendTabOrder;
@property (nonatomic) BOOL isTopTabSelected;
@property (nonatomic) BOOL isTopTabContainerAppear;
@property (retain, nonatomic) AWEHPChannelBadgeTask *curBadgeTask;
@property (retain, nonatomic) AWEHPChannelBubbleTask *curBubbleTask;
@property (retain, nonatomic) AWEHPChannelBadgeTask *lastShowBadgeTask;
@property (retain, nonatomic) AWEHPChannelBubbleTask *lastShowBubbleTask;
@property (retain, nonatomic) AWEHPChannelPauseSearchEntranceTask *pauseEntranceTask;
@property (copy, nonatomic) AWEFCTopBarEntranceStage *topBarRightEntranceStage;
@property (nonatomic) unsigned long long topBarThemeStyle;
@property (retain, nonatomic) id<AWEHPPinTopComponentProtocol> pinTopComponent;
@property (retain, nonatomic) AWEHPChannelLottieTask *lottieTask;
@property (retain, nonatomic) AWEHPChannelLottieTask *tempLottieTask;

- (id)lastShowBubbleTask;
- (void)setLastShowBubbleTask:(id)arg0;
- (id)lastShowBadgeTask;
- (void)setLastShowBadgeTask:(id)arg0;
- (id)lottieTask;
- (void)setLottieTask:(id)arg0;
- (id)accessibilityHintText;
- (void)setAccessibilityHintText:(id)arg0;
- (id)tabItem;
- (void)setTopBarThemeStyle:(unsigned long long)arg0;
- (void)setTopBarRightEntranceStage:(id)arg0;
- (void)setTabItem:(id)arg0;
- (void)setTopTabItemUIModel:(id)arg0;
- (unsigned long long)topBarThemeStyle;
- (id)pauseEntranceTask;
- (id)topBarRightEntranceStage;
- (void)setAccessibilityHintSuffix:(id)arg0;
- (void)updateAccessibilityHint;
- (long long)topTabOrder;
- (id)topTabItemUIModel;
- (void)setPauseEntranceTask:(id)arg0;
- (BOOL)isTopTabSelected;
- (void)setIsTopTabSelected:(BOOL)arg0;
- (id)pinTopComponent;
- (void)setPinTopComponent:(id)arg0;
- (void)setTopTabOrder:(long long)arg0;
- (long long)topRecommendTabOrder;
- (void)setTopRecommendTabOrder:(long long)arg0;
- (id)curBadgeTask;
- (void)setCurBadgeTask:(id)arg0;
- (id)curBubbleTask;
- (void)setCurBubbleTask:(id)arg0;
- (BOOL)isTopTabContainerAppear;
- (void)setIsTopTabContainerAppear:(BOOL)arg0;
- (void)updateIndicatorIcon:(id)arg0;
- (id)selectedIndicatorInfo;
- (void)updateSelectedIndicatorParams:(id)arg0;
- (void)updateIndicatorIconMaxConfigWithIcon:(id)arg0;
- (id)tempLottieTask;
- (void)setTempLottieTask:(id)arg0;
- (double)p_getIndicatorIconDistance:(id)arg0;
- (struct CGSize { double x0; double x1; })p_getIndicatorIconSize:(id)arg0;
- (void)p_tryUpdateIndicatorIconMaxSize:(struct CGSize { double x0; double x1; })arg0;
- (void)p_tryUpdateIndicatorIconMaxDistance:(double)arg0;
- (id)accessibilityHintSuffix;
- (id)init;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)indicatorIcon;

@end
