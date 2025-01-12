//
//     Generated by private class-dump
//

@class NSDictionary;

@protocol IESLiveGuideToolBarProvider <IESLiveGuideToolBarData>

@property (readonly, nonatomic) BOOL isShowing;
@property (copy, nonatomic) NSDictionary *guideToolbarBubbleTipDict;

- (id)guideToolbarBubbleTipDict;
- (void)setGuideToolbarBubbleTipDict:(id)arg0;
- (BOOL)isShowing;

@optional

- (void)showToolbar;
- (void)showBubbleViewWithTitle:(id)arg0 onIdentifier:(id)arg1;
- (void)removeBubbleViewWithIdentifier:(id)arg0;
- (void)hideToolbar;

@end
