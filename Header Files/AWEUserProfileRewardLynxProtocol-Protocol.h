//
//     Generated by private class-dump
//

@protocol AWEUserProfileRewardLynxProtocol <NSObject>

@property (copy, nonatomic) id /* block */ rewardPanelShowBlock;
@property (copy, nonatomic) id /* block */ rewardPanelCloseBlock;
@property (copy, nonatomic) id /* block */ rewardPanelCountUpdateBlock;

- (void)openSchemeWithContext:(id)arg0;
- (void)setRewardPanelCloseBlock:(id /* block */)arg0;
- (void)setRewardPanelCountUpdateBlock:(id /* block */)arg0;
- (id /* block */)rewardPanelShowBlock;
- (id /* block */)rewardPanelCloseBlock;
- (id /* block */)rewardPanelCountUpdateBlock;
- (void)setRewardPanelShowBlock:(id /* block */)arg0;

@end
