//
//     Generated by private class-dump
//

@class AWEMarkView;

@interface AWEFeedAnchorIronManConfig : AWEFeedAnchorBaseConfig {
    BOOL _hasAnimated;
    BOOL _twoLineHasAnimated;
    BOOL _hasIronManTwoLineStyleAnimated;
    BOOL _anchorHasShown;
    AWEMarkView *_ironManButton;
    id /* block */ _blockPeriod;
    id /* block */ _twoLineBlock;
    double _playTime;
    id /* block */ _ironManTwoLineBlock;
    id /* block */ _ironManTwoLineAlbumBlock;
    long long _doubleInfoResult;
    long long _doubleInfoShow;
}

@property (retain, nonatomic) AWEMarkView *ironManButton;
@property (copy, nonatomic) id /* block */ blockPeriod;
@property (copy, nonatomic) id /* block */ twoLineBlock;
@property (nonatomic) BOOL hasAnimated;
@property (nonatomic) BOOL twoLineHasAnimated;
@property (nonatomic) double playTime;
@property (copy, nonatomic) id /* block */ ironManTwoLineBlock;
@property (copy, nonatomic) id /* block */ ironManTwoLineAlbumBlock;
@property (nonatomic) BOOL hasIronManTwoLineStyleAnimated;
@property (nonatomic) long long doubleInfoResult;
@property (nonatomic) long long doubleInfoShow;
@property (nonatomic) BOOL anchorHasShown;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)arg0 extraInfo:(id)arg1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:(id)arg0 extraInfo:(id)arg1;
+ (id)anchorType;

- (id)anchorViewWithModel:(id)arg0;
- (void)anchorViewWillShowOnSuperview;
- (id)ironManButton;
- (void)updateWithAwemeModel:(id)arg0 needPerformOnDisplay:(BOOL)arg1;
- (void)trackSpiderManClickEvent;
- (void)setPlayTime:(double)arg0;
- (id /* block */)layoutWithAwemeModel:(id)arg0 commonLayoutInfo:(id)arg1;
- (BOOL)shouldShowIronManButton;
- (void)setIronManButton:(id)arg0;
- (void)setHasAnimated:(BOOL)arg0;
- (BOOL)hasAnimated;
- (id /* block */)blockPeriod;
- (void)setBlockPeriod:(id /* block */)arg0;
- (void)addAnimationBlockPeriodIfNeed;
- (void)removeAnimationBlockPeriodIfNeed;
- (id)animationTitle;
- (void)setDoubleInfoResult:(long long)arg0;
- (void)addIronManTwoLineStyleBlockPeriodIfNeed:(id)arg0;
- (void)trackEventWithEventName:(id)arg0 withParams:(id)arg1;
- (void)setDoubleInfoShow:(long long)arg0;
- (void)addTwoLineStyleBlockPeriodIfNeed:(id)arg0;
- (void)ironManAnchorViewWillShow;
- (void)updateForSpiderDoubleLine:(id)arg0;
- (void)setAnchorHasShown:(BOOL)arg0;
- (void)sendEventTrackingWhenClick:(id)arg0;
- (BOOL)twoLineHasAnimated;
- (void)setTwoLineHasAnimated:(BOOL)arg0;
- (void)removeTwoLineAnimationBlockIfNeed;
- (void)setTwoLineBlock:(id /* block */)arg0;
- (id /* block */)twoLineBlock;
- (void)removeIronManTwoLineAnimationBlockIfNeed;
- (void)setHasIronManTwoLineStyleAnimated:(BOOL)arg0;
- (void)sendDurationNotEnoughTracker;
- (long long)doubleInfoResult;
- (BOOL)anchorHasShown;
- (BOOL)hasIronManTwoLineStyleAnimated;
- (long long)doubleInfoShow;
- (void)updateAnchorStyle;
- (void)handlePlaybackTimeChanged:(double)arg0 duration:(double)arg1;
- (void)setIronManTwoLineBlock:(id /* block */)arg0;
- (id /* block */)ironManTwoLineBlock;
- (void)setIronManTwoLineAlbumBlock:(id /* block */)arg0;
- (id /* block */)ironManTwoLineAlbumBlock;
- (void)trackIronManShowDoubleLineStyle;
- (id)getCommonTrackInfoDict;
- (void).cxx_destruct;
- (double)playTime;
- (void)reset;
- (int)animationBeginTime;

@end
