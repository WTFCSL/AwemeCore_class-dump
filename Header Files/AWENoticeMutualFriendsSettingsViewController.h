//
//     Generated by private class-dump
//

@class NSString, UIViewController, UIView;
@protocol AFDHalfScreenHostViewControllerProtocol;

@interface AWENoticeMutualFriendsSettingsViewController : UIViewController <AFDHalfScreenPresentationProtocol> {
    UIViewController<AFDHalfScreenHostViewControllerProtocol> *halfScreenHostViewController;
    UIView *_topLineView;
}

@property (retain, nonatomic) UIView *topLineView;
@property (weak, nonatomic) UIViewController<AFDHalfScreenHostViewControllerProtocol> *halfScreenHostViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)halfScreenHostViewController;
- (void)setHalfScreenHostViewController:(id)arg0;
- (BOOL)wantsDimmingView;
- (id)init;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)topLineView;
- (void)setTopLineView:(id)arg0;

@end
