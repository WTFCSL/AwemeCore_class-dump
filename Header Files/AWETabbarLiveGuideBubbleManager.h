//
//     Generated by private class-dump
//

@class AWEBubble;

@interface AWETabbarLiveGuideBubbleManager : NSObject {
    BOOL _shouldShowLiveGuideBubble;
    AWEBubble *_liveGuideBubbleView;
}

@property (nonatomic) BOOL shouldShowLiveGuideBubble;
@property (retain, nonatomic) AWEBubble *liveGuideBubbleView;

- (void)removeLiveGuideBubble;
- (void)showliveGuideBubbleIfNeed;
- (BOOL)_canShowLiveGuideBubble;
- (void)setShouldShowLiveGuideBubble:(BOOL)arg0;
- (void)setLiveGuideBubbleView:(id)arg0;
- (id)liveGuideBubbleView;
- (BOOL)shouldShowLiveGuideBubble;
- (id)init;
- (void).cxx_destruct;

@end
