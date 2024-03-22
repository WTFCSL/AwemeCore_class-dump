//
//     Generated by private class-dump
//

@class NSString, IESECWinLivingOrderModel, IESECTracker;

@interface IESECWinOrderObject : NSObject <IGListDiffable, IESECWinFeedFlowLayoutProtocol> {
    IESECWinLivingOrderModel *_orderModel;
    IESECTracker *_tracker;
}

@property (retain, nonatomic) IESECWinLivingOrderModel *orderModel;
@property (retain, nonatomic) IESECTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg0;
- (void)setOrderModel:(id)arg0;
- (id)orderModel;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeForObject;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void).cxx_destruct;

@end
