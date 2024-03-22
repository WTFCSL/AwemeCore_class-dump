//
//     Generated by private class-dump
//

@class IESECWinContext, UIViewController, NSString;

@interface IESECWinNavBarVM : NSObject <IESECWinContextProtocol> {
    UIViewController *_vc;
    IESECWinContext *_context;
}

@property (retain, nonatomic) IESECWinContext *context;
@property (weak, nonatomic) UIViewController *vc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackSearchBarShow;
- (void)setVc:(id)arg0;
- (void)trackShareClick;
- (void)trackCartClick;
- (void)trackImEntryShow;
- (void)trackSearchBarClick;
- (id)searchBTMID;
- (void)trackImEntryClick;
- (void)trackMoreClick;
- (void)trackMyOrderClick;
- (void)trackMyWindowClick;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (id)vc;

@end
