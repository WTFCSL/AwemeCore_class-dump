//
//     Generated by private class-dump
//

@class NSString, UIViewController, UIView;
@protocol RTVVoipResourceFetcherInterface, RxInjector;

@interface AWERTVFeedCastItemContainerViewController : UIViewController {
    UIViewController *_itemViewController;
    UIView *_navigationBar;
    NSString *_navigationTitle;
    id<RTVVoipResourceFetcherInterface> _resourceFetcher;
    id<RxInjector> _injector;
}

@property (readonly, nonatomic) UIViewController *itemViewController;
@property (retain, nonatomic) UIView *navigationBar;
@property (retain, nonatomic) NSString *navigationTitle;
@property (readonly, nonatomic) id<RTVVoipResourceFetcherInterface> resourceFetcher;
@property (readonly, weak, nonatomic) id<RxInjector> injector;

+ (Class)aAWEPadRTVAdapterClass;

- (void)rxAwakeFromPropertyInjection;
- (id)resourceFetcher;
- (id)aAWEPadRTVAdapter;
- (id)initWithItemViewController:(id)arg0;
- (void)configNavigationTitle:(id)arg0;
- (void)__handleBackEvent:(id)arg0;
- (id)itemViewController;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)setNavigationTitle:(id)arg0;
- (id)injector;
- (id)navigationBar;
- (void)setNavigationBar:(id)arg0;
- (id)navigationTitle;
- (void)viewDidLoad;

@end