//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEECOMIMScheduleDeliveryCardModel : AWEECOMIMBaseCardModel <AWEECOMIMCardComponentCommonTitleViewProtocol, AWEECOMIMSubCardOrderCardProtocol, AWEECOMIMCardComponentMultiLabelViewProtocol, AWEECOMIMCardComponentOperationPanelProtocol> {
    NSString *_title;
    NSString *_goodTitle;
    NSString *_goodImg;
    NSString *_goodNum;
    NSString *_showPrice;
    NSString *_orderId;
    NSArray *_multiLineDesc;
    NSArray *_buttons;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *goodTitle;
@property (copy, nonatomic) NSString *goodImg;
@property (copy, nonatomic) NSString *goodNum;
@property (copy, nonatomic) NSString *showPrice;
@property (copy, nonatomic) NSString *orderId;
@property (copy, nonatomic) NSArray *multiLineDesc;
@property (copy, nonatomic) NSArray *buttons;
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
- (id)multiLineDesc;
- (void)setMultiLineDesc:(id)arg0;
- (void).cxx_destruct;
- (void)setButtons:(id)arg0;
- (id)buttons;
- (id)title;
- (void)setTitle:(id)arg0;

@end
