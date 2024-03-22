//
//     Generated by private class-dump
//

@class BDXBridgeEventSubscriber, NSString, NSArray;

@interface AWEECOMIMCheckOrderCardModel : AWEECOMIMBaseCardModel <AWEECOMIMCardComponentCommonTitleViewProtocol, AWEECOMIMSubCardOrderCardProtocol, AWEECOMIMCardComponentMultiLabelViewProtocol, AWEECOMIMCardComponentOperationPanelProtocol> {
    NSString *_title;
    NSString *_goodTitle;
    NSString *_goodImg;
    NSString *_goodNum;
    NSString *_showPrice;
    NSString *_orderId;
    NSString *_postName;
    NSString *_postTelephone;
    NSString *_postAddress;
    NSArray *_buttons;
    NSArray *_multiLabelModelArr;
    BDXBridgeEventSubscriber *_editAddressSubscriber;
}

@property (retain, nonatomic) BDXBridgeEventSubscriber *editAddressSubscriber;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *goodTitle;
@property (copy, nonatomic) NSString *goodImg;
@property (copy, nonatomic) NSString *goodNum;
@property (copy, nonatomic) NSString *showPrice;
@property (copy, nonatomic) NSString *orderId;
@property (copy, nonatomic) NSString *postName;
@property (copy, nonatomic) NSString *postTelephone;
@property (copy, nonatomic) NSString *postAddress;
@property (copy, nonatomic) NSArray *buttons;
@property (copy, nonatomic) NSArray *multiLabelModelArr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cardViewClass;
+ (id)careNoticeMsgType;

- (id)showPrice;
- (void)setShowPrice:(id)arg0;
- (id)orderId;
- (void)setOrderId:(id)arg0;
- (void)updateModelWithData:(id)arg0 encrypted:(BOOL)arg1;
- (void)setGoodTitle:(id)arg0;
- (void)setGoodImg:(id)arg0;
- (void)setGoodNum:(id)arg0;
- (id)goodImg;
- (id)goodTitle;
- (id)goodNum;
- (id)multiLabelModelArr;
- (void)setPostName:(id)arg0;
- (void)setPostTelephone:(id)arg0;
- (void)setPostAddress:(id)arg0;
- (void)ackOrderAction;
- (id)postName;
- (id)postAddress;
- (id)postTelephone;
- (void)setMultiLabelModelArr:(id)arg0;
- (id)editAddressSubscriber;
- (void)setEditAddressSubscriber:(id)arg0;
- (void).cxx_destruct;
- (void)setButtons:(id)arg0;
- (id)buttons;
- (id)title;
- (void)setTitle:(id)arg0;

@end
