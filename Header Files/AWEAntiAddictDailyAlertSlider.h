//
//     Generated by private class-dump
//

@class AWEAntiAddictDailyAlertBubbleView;

@interface AWEAntiAddictDailyAlertSlider : UISlider {
    AWEAntiAddictDailyAlertBubbleView *_bubbleView;
    long long _bubbleGrade;
}

@property (retain, nonatomic) AWEAntiAddictDailyAlertBubbleView *bubbleView;
@property (nonatomic) long long bubbleGrade;

- (void)seekToGrade:(unsigned long long)arg0;
- (long long)bubbleGrade;
- (void)setBubbleGrade:(long long)arg0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 value:(float)arg2;
- (id)bubbleView;
- (void)setBubbleView:(id)arg0;

@end
