//
//     Generated by private class-dump
//

@class UIView;

@protocol AWELiveFloatOnTopManagerProtocol <NSObject>

@property (readonly, nonatomic) UIView *containerView;
@property (copy, nonatomic) id /* block */ tapAction;

- (void)muteLive:(BOOL)arg0;
- (void)detach;
- (id)containerView;
- (void)attach;
- (id /* block */)tapAction;
- (void)setTapAction:(id /* block */)arg0;

@end
