//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAwemeCommerceDetailController : AWEAwemeNewDetailBaseController <AWEAwemeNewDetailTableControllerProtocol> {
    long long _onceToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)arg0 didEndDisplayingCellBeforeReset:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)configCell:(id)arg0 atIndexPath:(id)arg1 tableView:(id)arg2;
- (void)setUpLearnMoreLynxButtonWithModel:(id)arg0;
- (id)appendLynxRawAdDataWithSearchCommonParams:(id)arg0;
- (id)getGeneralSearchTrackBaseParamsWith:(id)arg0;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end
