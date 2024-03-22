//
//     Generated by private class-dump
//

@class NSString, AWEProfileLynxConfiguration, AWEProfileLynxViewController;

@interface AWEEntertainmentTabDetailComponent : AWEUserHomeBaseComponent <AWEProfileTabListProviderProtocol> {
    BOOL _isTabScrolled;
    BOOL _isViewDidAppear;
    AWEProfileLynxConfiguration *_lynxConfig;
    AWEProfileLynxViewController *_lynxViewController;
}

@property (retain, nonatomic) AWEProfileLynxConfiguration *lynxConfig;
@property (retain, nonatomic) AWEProfileLynxViewController *lynxViewController;
@property (nonatomic) BOOL isTabScrolled;
@property (nonatomic) BOOL isViewDidAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isViewDidAppear;
- (void)setLynxConfig:(id)arg0;
- (id)lynxConfig;
- (void)setLynxViewController:(id)arg0;
- (id)lynxViewController;
- (void)setIsViewDidAppear:(BOOL)arg0;
- (id)supportTabTypes;
- (id)tabViewControllerForType:(long long)arg0;
- (void)onResetUI;
- (void)trackTabShow;
- (void)setIsTabScrolled:(BOOL)arg0;
- (void)trackTabClick;
- (unsigned long long)lynxVCAppearStyle;
- (BOOL)isTabScrolled;
- (void)onDidSelectTabListIndex:(long long)arg0 actionType:(unsigned long long)arg1;
- (id)visibleHeight;
- (void).cxx_destruct;
- (void)viewDidAppear;

@end
