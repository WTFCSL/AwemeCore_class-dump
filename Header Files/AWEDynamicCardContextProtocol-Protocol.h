//
//     Generated by private class-dump
//

@class NSDictionary, AWEAwemeModel, UIView, AWEPageContext;
@protocol AWEPOIDynamicCardProtocol, AWEPlayInteractionContextProtocol;

@protocol AWEDynamicCardContextProtocol <NSObject>

@property (weak, nonatomic) UIView<AWEPOIDynamicCardProtocol> *dynamicCard;
@property (weak, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) UIView *feedContainer;
@property (nonatomic) long long feedPosition;
@property (weak, nonatomic) NSDictionary *extra;
@property (weak, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *playerInteractionContext;

- (id)awemeModel;
- (void)setExtra:(id)arg0;
- (void)setAwemeModel:(id)arg0;
- (void)setFeedContainer:(id)arg0;
- (id)feedContainer;
- (id)dynamicCard;
- (void)setDynamicCard:(id)arg0;
- (long long)feedPosition;
- (void)setFeedPosition:(long long)arg0;
- (id)playerInteractionContext;
- (void)setPlayerInteractionContext:(id)arg0;
- (id)extra;

@end