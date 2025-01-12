//
//     Generated by private class-dump
//

@class UIViewController, NSDate;
@protocol AFDContainerViewControllerDelegate;

@interface AFDMultiTabSocialPromotionChannelViewController : UIViewController <AFDMultiTabChannelEventProtocol, AFDContainerViewControllerDelegateProtocol> {
    id<AFDContainerViewControllerDelegate> containerDelegate;
    UIViewController *_promotionViewController;
    NSDate *_landFriendsTabTime;
}

@property (retain, nonatomic) UIViewController *promotionViewController;
@property (retain, nonatomic) NSDate *landFriendsTabTime;
@property (weak, nonatomic) id<AFDContainerViewControllerDelegate> containerDelegate;

- (void)channelLeaveByChangeTabEvent;
- (void)tabBarRepeatedTapEvent;
- (void)channelSelectEventFrom:(id)arg0 enterMethod:(id)arg1;
- (void)channelLeaveEventTo:(id)arg0 enterMethod:(id)arg1;
- (void)setLandFriendsTabTime:(id)arg0;
- (id)landFriendsTabTime;
- (id)promotionViewController;
- (void)trackEnterWithEnterMethod:(id)arg0;
- (void)setPromotionViewController:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)viewDidLoad;
- (id)containerDelegate;
- (void)setContainerDelegate:(id)arg0;

@end
