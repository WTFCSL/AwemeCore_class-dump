//
//     Generated by private class-dump
//

@class UIView;

@protocol BDPEngineProtocol <NSObject>

@property (readonly, nonatomic) UIView *engineView;
@property (readonly, nonatomic) UIView *renderView;

- (id)engineView;
- (void)resizeWithLayer:(id)arg0;
- (void)resume;
- (void)stop;
- (void)pause;
- (id)renderView;
- (id)engineName;

@end