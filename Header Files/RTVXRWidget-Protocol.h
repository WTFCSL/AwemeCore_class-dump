//
//     Generated by private class-dump
//

@protocol RTVXRWidgetDelegate;

@protocol RTVXRWidget <NSObject>

@property (weak, nonatomic) id<RTVXRWidgetDelegate> delegate;

- (double)preferredOrignY;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (struct CGSize { double x0; double x1; })preferredSize;

@optional

- (void)containerDidDismiss;
- (BOOL)needDisplayWhileLandscapeOrientationLayout;

@end