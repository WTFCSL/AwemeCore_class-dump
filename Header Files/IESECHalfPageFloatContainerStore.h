//
//     Generated by private class-dump
//

@class UIView;
@protocol IESECHalfPageFloatContainerDelegate;

@interface IESECHalfPageFloatContainerStore : NSObject {
    UIView *_container;
    id<IESECHalfPageFloatContainerDelegate> _delegate;
}

@property (weak, nonatomic) UIView *container;
@property (weak, nonatomic) id<IESECHalfPageFloatContainerDelegate> delegate;

- (id)container;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)initWithContainer:(id)arg0 delegate:(id)arg1;

@end
