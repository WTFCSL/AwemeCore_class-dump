//
//     Generated by private class-dump
//

@class HTSEventContext, IESLiveComponentContext;

@protocol IESLiveComponentProvider <NSObject>

@property (readonly, nonatomic) IESLiveComponentContext *componentContext;
@property (readonly, nonatomic) HTSEventContext *trackContext;

- (id)trackContext;
- (id)componentContext;

@end
