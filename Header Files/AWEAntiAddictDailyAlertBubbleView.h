//
//     Generated by private class-dump
//

@class UIImageView, UILabel, NSString;

@interface AWEAntiAddictDailyAlertBubbleView : UIView {
    UIImageView *_bubbleImageView;
    UILabel *_bubbleLabel;
}

@property (retain, nonatomic) UIImageView *bubbleImageView;
@property (retain, nonatomic) UILabel *bubbleLabel;
@property (retain, nonatomic) NSString *text;

- (void)setBubbleLabel:(id)arg0;
- (id)bubbleLabel;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)text;
- (void)setupUI;
- (id)bubbleImageView;
- (void)setBubbleImageView:(id)arg0;

@end