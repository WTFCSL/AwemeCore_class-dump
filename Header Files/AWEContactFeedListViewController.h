//
//     Generated by private class-dump
//

@class UIView;
@protocol AWEContactFeedCardProtocol;

@interface AWEContactFeedListViewController : AWEFeedCellViewController {
    UIView<AWEContactFeedCardProtocol> *_cardView;
}

@property (retain, nonatomic) UIView<AWEContactFeedCardProtocol> *cardView;

- (void)excuteCustomDisplay;
- (BOOL)rootViewTapGestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)viewDidLoad;
- (void)setupUI;
- (id)cardView;
- (void)setCardView:(id)arg0;
- (void)configureWithModel:(id)arg0;
- (void)didEndDisplaying;
- (void)willDisplay;

@end