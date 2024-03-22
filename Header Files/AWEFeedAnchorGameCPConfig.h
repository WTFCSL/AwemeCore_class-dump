//
//     Generated by private class-dump
//

@class AWEFeedAnchorGameCPMarkView;

@interface AWEFeedAnchorGameCPConfig : AWEFeedAnchorBaseConfig {
    BOOL _hasAnimated;
    BOOL _hasFullText;
    AWEFeedAnchorGameCPMarkView *_gameCPAnchorView;
    id /* block */ _blockPeriod;
}

@property (retain, nonatomic) AWEFeedAnchorGameCPMarkView *gameCPAnchorView;
@property (copy, nonatomic) id /* block */ blockPeriod;
@property (nonatomic) BOOL hasAnimated;
@property (nonatomic) BOOL hasFullText;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)arg0 extraInfo:(id)arg1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:(id)arg0 extraInfo:(id)arg1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:(id)arg0 extraInfo:(id)arg1;
+ (id)anchorType;

- (id)anchorViewWithModel:(id)arg0;
- (void)anchorViewWillShowOnSuperview;
- (void)trackEventWithEventName:(id)arg0;
- (void)updateWithAwemeModel:(id)arg0 needPerformOnDisplay:(BOOL)arg1;
- (id /* block */)layoutWithAwemeModel:(id)arg0 commonLayoutInfo:(id)arg1;
- (void)setHasAnimated:(BOOL)arg0;
- (BOOL)hasAnimated;
- (void)trackAdEventWithLabelName:(id)arg0;
- (id)anchorContext;
- (void)updateAnchorIconImage:(id)arg0;
- (id /* block */)blockPeriod;
- (void)setBlockPeriod:(id /* block */)arg0;
- (void)destroyContainerIfNeed;
- (id)gameCPAnchorView;
- (void)updateAnchorTitleWithModel:(id)arg0;
- (void)addAnimationBlockPeriodIfNeed;
- (BOOL)isDefaultShowTwoLineStyle;
- (void)removeAnimationBlockPeriodIfNeed;
- (void)setHasFullText:(BOOL)arg0;
- (void)setGameCPAnchorView:(id)arg0;
- (void)createContainerIfNeed;
- (void)showTwoLineStyle;
- (id)videoAnchorInterface;
- (id)handleAdTagWithAdTagText:(id)arg0 markText:(id)arg1 categoryTitle:(id)arg2;
- (id)adAttributeStringWithText:(id)arg0 tailText:(id)arg1;
- (BOOL)isAnimationShowOneLineStyle;
- (BOOL)isAnimationShowTwoLineStyle;
- (id)animationTitle;
- (double)subTitleChangeTime;
- (id)getCurrentAnchorTitleType;
- (id)getCurrShowingAnchorTitleText;
- (void)trackEventWithEventName:(id)arg0 url:(id)arg1;
- (void)trackAdEventWithClickTrackList;
- (id)getAnchorMediaTypeStr;
- (BOOL)hasFullText;
- (void)didClickedAnchor;
- (void).cxx_destruct;
- (id)subTitle;
- (void)dealloc;
- (void)reset;
- (double)animationBeginTime;

@end