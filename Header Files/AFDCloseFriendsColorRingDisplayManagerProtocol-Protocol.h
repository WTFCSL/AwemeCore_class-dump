//
//     Generated by private class-dump
//

@class AFDStoryGradientRingView, NSString;
@protocol AFDCloseFriendsColorRingDisplayManagerDelegate;

@protocol AFDCloseFriendsColorRingDisplayManagerProtocol <NSObject>

@property (nonatomic, readonly) AFDStoryGradientRingView *colorRingView;
@property (nonatomic, readonly) NSString *uid;
@property (nonatomic, weak) id<AFDCloseFriendsColorRingDisplayManagerDelegate> delegate;
@property (nonatomic) double activeRingWidth;
@property (nonatomic) double inactiveRingWidth;

- (id)initWithFromScene:(unsigned long long)arg0;
- (double)activeRingWidth;
- (void)setActiveRingWidth:(double)arg0;
- (double)inactiveRingWidth;
- (void)setInactiveRingWidth:(double)arg0;
- (BOOL)hasColorRing;
- (id)colorRingConfig;
- (void)transferToMomentFeed;
- (void)trackStoryCircleShowEvent;
- (void)updateColorRingWithUid:(id)arg0 showEventTracker:(id)arg1 trackerIdentifier:(id)arg2;
- (void)updateColorRingWithUid:(id)arg0 showEventTracker:(id)arg1 trackerIdentifier:(id)arg2;
- (id)uid;
- (id)delegate;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg0;
- (id)colorRingView;

@end
