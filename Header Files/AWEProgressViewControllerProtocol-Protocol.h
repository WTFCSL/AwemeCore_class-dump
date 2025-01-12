//
//     Generated by private class-dump
//

@class AWEAwemeModel;
@protocol AWEProgressViewControllerDelegate;

@protocol AWEProgressViewControllerProtocol <AWEProgressBizProtocol, AWEProgressActionProtocol, AWEProgressChangeProtocol, AWEProgressGestureProtocol>

@property (weak, nonatomic) id<AWEProgressViewControllerDelegate> delegate;
@property (readonly, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL disableProgressGesture;

- (BOOL)disableProgressGesture;
- (void)setDisableProgressGesture:(BOOL)arg0;
- (id)model;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@optional

- (id)initWithContext:(id)arg0;
- (void)reset;
- (id)progressSlider;

@end
