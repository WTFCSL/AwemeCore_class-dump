//
//     Generated by private class-dump
//

@protocol AWEGPlayerProgressContainerViewDelegate;

@interface AWEGPlayerProgressContainer : UIView {
    double _totalTime;
    double _playedTime;
    id<AWEGPlayerProgressContainerViewDelegate> _delegate;
}

@property (nonatomic) double totalTime;
@property (nonatomic) double playedTime;
@property (weak, nonatomic) id<AWEGPlayerProgressContainerViewDelegate> delegate;

- (double)playedTime;
- (void)setPlayedTime:(double)arg0;
- (double)totalTime;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityDecrement;
- (id)delegate;
- (void)accessibilityIncrement;
- (void)setDelegate:(id)arg0;
- (BOOL)isAccessibilityElement;
- (void)setTotalTime:(double)arg0;
- (id)accessibilityValue;

@end
