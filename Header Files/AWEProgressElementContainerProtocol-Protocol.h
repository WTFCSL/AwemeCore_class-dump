//
//     Generated by private class-dump
//

@protocol AWEProgressElementDelegate;

@protocol AWEProgressElementContainerProtocol <AWEProgressChangeProtocol, AWEProgressStatusProtocol, AWEProgressGestureProtocol, AWEProgressStatisticalInfoProtocol, AWEProgressElementBizProtocol>

@property (weak, nonatomic) id<AWEProgressElementDelegate> delegate;

- (id)initWithViewController:(id)arg0 context:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)reset;

@end
