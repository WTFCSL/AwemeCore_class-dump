//
//     Generated by private class-dump
//

@class AWEHomePageBubbleConfig;

@interface AWEHomePageBubbleUtils : NSObject {
    AWEHomePageBubbleConfig *_bubbleConfig;
    double _maxBubbleLabelWidth;
}

@property (nonatomic) double maxBubbleLabelWidth;
@property (retain, nonatomic) AWEHomePageBubbleConfig *bubbleConfig;

+ (id)sharedInstance;

- (double)maxBubbleLabelWidth;
- (id)bubbleConfig;
- (void)setBubbleConfig:(id)arg0;
- (void)setMaxBubbleLabelWidth:(double)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setupConfig;

@end