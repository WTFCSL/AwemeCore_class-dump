//
//     Generated by private class-dump
//

@class NSString, UIViewController;
@protocol AWEFeedTableViewControllerProtocol, AWEFeedTabItemViewControllerProtocol;

@interface AWEPadFeedContentViewModel : NSObject {
    UIViewController<AWEFeedTabItemViewControllerProtocol, AWEFeedTableViewControllerProtocol> *_contentViewController;
    NSString *_sourcePath;
    long long _awemeType;
    long long _tabType;
}

@property (copy, nonatomic) NSString *sourcePath;
@property (nonatomic) long long awemeType;
@property (nonatomic) long long tabType;
@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol, AWEFeedTableViewControllerProtocol> *contentViewController;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (long long)tabType;
- (long long)awemeType;
- (void)setAwemeType:(long long)arg0;
- (void)setTabType:(long long)arg0;
- (id)initWithSourcePath:(id)arg0 awemeType:(long long)arg1 padTabType:(long long)arg2;
- (id)sourcePath;
- (id)contentViewController;
- (void).cxx_destruct;
- (void)setContentViewController:(id)arg0;
- (void)setSourcePath:(id)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;

@end
