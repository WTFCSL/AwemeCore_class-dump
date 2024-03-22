//
//     Generated by private class-dump
//

@class UIViewController;
@protocol AWEFeedNearbyMallCardProtocol;

@interface AWEFeedNearbyMallCardCellViewController : AWEFeedCellViewController {
    UIViewController<AWEFeedNearbyMallCardProtocol> *_cardViewController;
}

@property (retain, nonatomic) UIViewController<AWEFeedNearbyMallCardProtocol> *cardViewController;

- (void)didDisplay;
- (BOOL)shouldRespondDoubleClick;
- (BOOL)shouldRespondSingleClick;
- (void).cxx_destruct;
- (id)cardViewController;
- (void)setCardViewController:(id)arg0;
- (void)configureWithModel:(id)arg0;
- (void)didEndDisplaying;
- (void)willDisplay;

@end