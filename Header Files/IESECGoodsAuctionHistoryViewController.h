//
//     Generated by private class-dump
//

@class IESECGoodsAuctionHistoryView, NSString, IESECGoodsDetailTracker;
@protocol IESECGoodsDetailContainerProtocol;

@interface IESECGoodsAuctionHistoryViewController : UIViewController <IESECGoodsAuctionHistoryPanelDelegate, IESECGoodsDetailPopoverContentProtocol> {
    IESECGoodsAuctionHistoryView *_content;
    id<IESECGoodsDetailContainerProtocol> _container;
    IESECGoodsDetailTracker *_tracker;
    NSString *_auctionID;
    NSString *_metaParamsStr;
}

@property (retain, nonatomic) IESECGoodsAuctionHistoryView *content;
@property (weak, nonatomic) id<IESECGoodsDetailContainerProtocol> container;
@property (retain, nonatomic) IESECGoodsDetailTracker *tracker;
@property (copy, nonatomic) NSString *auctionID;
@property (copy, nonatomic) NSString *metaParamsStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)embedInContainer:(id)arg0;
- (double)popoverContentHeight;
- (id)auctionID;
- (id)metaParamsStr;
- (void)dismissCurrentVC;
- (void)setAuctionID:(id)arg0;
- (void)setMetaParamsStr:(id)arg0;
- (id)initWithAuctionID:(id)arg0 metaParams:(id)arg1;
- (id)container;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (id)content;
- (void)setContent:(id)arg0;
- (void)viewDidLoad;

@end
