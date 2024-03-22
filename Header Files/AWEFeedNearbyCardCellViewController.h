//
//     Generated by private class-dump
//

@class UIViewController;
@protocol AWEFeedNearbyCardViewControllerProtocol;

@interface AWEFeedNearbyCardCellViewController : AWEFeedCellViewController {
    UIViewController<AWEFeedNearbyCardViewControllerProtocol> *_nearbyCardViewController;
}

@property (retain, nonatomic) UIViewController<AWEFeedNearbyCardViewControllerProtocol> *nearbyCardViewController;

- (void)didDisplay;
- (BOOL)shouldRespondDoubleClick;
- (BOOL)shouldRespondSingleClick;
- (void)__setupUIIfNeeds;
- (id)nearbyCardViewController;
- (void)setNearbyCardViewController:(id)arg0;
- (void).cxx_destruct;
- (void)play;
- (void)configureWithModel:(id)arg0;
- (void)didEndDisplaying;
- (void)willDisplay;

@end