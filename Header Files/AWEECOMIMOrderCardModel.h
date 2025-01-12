//
//     Generated by private class-dump
//

@class NSString;

@interface AWEECOMIMOrderCardModel : AWEECOMIMBaseCardModel <AWEECOMIMCardComponentCommonTitleViewProtocol, AWEECOMIMSubCardOrderCardProtocol> {
    NSString *_title;
    NSString *_statusDesc;
    NSString *_goodTitle;
    NSString *_goodImg;
    NSString *_goodNum;
    NSString *_showPrice;
    NSString *_orderId;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *statusDesc;
@property (copy, nonatomic) NSString *goodTitle;
@property (copy, nonatomic) NSString *goodImg;
@property (copy, nonatomic) NSString *goodNum;
@property (copy, nonatomic) NSString *showPrice;
@property (copy, nonatomic) NSString *orderId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cardViewClass;
+ (Class)cardMsgModelClassFromMessage:(id)arg0;

- (id)showPrice;
- (void)setShowPrice:(id)arg0;
- (id)orderId;
- (void)setOrderId:(id)arg0;
- (id)statusDesc;
- (void)setStatusDesc:(id)arg0;
- (void)updateModelWithData:(id)arg0 encrypted:(BOOL)arg1;
- (void)setGoodTitle:(id)arg0;
- (void)setGoodImg:(id)arg0;
- (void)setGoodNum:(id)arg0;
- (id)goodImg;
- (id)goodTitle;
- (id)goodNum;
- (void)fetchCardDataWithCompletion:(id /* block */)arg0;
- (void)getOrderDataWithCompletion:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:(id)arg0;

@end
