//
//     Generated by private class-dump
//

@class NSString, AWEPlayInteractionContext;

@interface AWEPlayInteractionNearbyFollowGuideViewModel : NSObject {
    AWEPlayInteractionContext *_context;
}

@property (retain, nonatomic) AWEPlayInteractionContext *context;
@property (readonly, copy, nonatomic) NSString *followText;

- (void)trackShowEvent;
- (id)followText;
- (void)trackFollowEvent;
- (void)followVideoAuthorWithCompletion:(id /* block */)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;

@end
