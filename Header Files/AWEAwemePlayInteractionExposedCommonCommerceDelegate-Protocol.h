//
//     Generated by private class-dump
//

@class NSString;

@protocol AWEAwemePlayInteractionExposedCommonCommerceDelegate <NSObject>

@property (copy, nonatomic) NSString *componentsPriorityType;

- (id)componentsPriorityType;
- (void)setComponentsPriorityType:(id)arg0;
- (void)promptCardAppearWithOffset:(double)arg0;
- (void)promptCardDisAppear;
- (BOOL)checkToShowCardForCurrentPriorityComponent:(unsigned long long)arg0;
- (void)showDouPlusEntryGuideAnimation;
- (void)popUpAnchorView;
- (void)showRedpacketAnimation;
- (void)animateLeftBottomByXOffset:(double)arg0 yOffset:(double)arg1 alpha:(double)arg2;
- (void)updateComponentsPriorityType:(id)arg0 isReCalculate:(BOOL)arg1;
- (BOOL)isInteracting;

@end