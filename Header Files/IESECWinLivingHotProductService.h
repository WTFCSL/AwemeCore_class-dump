//
//     Generated by private class-dump
//

@class IESECServiceProxy, NSString, IESECWinContext;
@protocol IESECWinDataService;

@interface IESECWinLivingHotProductService : NSObject <IESECWinLivingHotProductService> {
    IESECWinContext *_context;
    long long _productCount;
    long long _surplusProductsCount;
    long long _spreadTimeCount;
    IESECServiceProxy<IESECWinDataService> *_dataService;
}

@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (nonatomic) long long productCount;
@property (nonatomic) long long spreadTimeCount;
@property (nonatomic) long long surplusProductsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)productCount;
- (void)setProductCount:(long long)arg0;
- (id)dataService;
- (void)setDataService:(id)arg0;
- (void)spreadProductList;
- (long long)spreadTimeCount;
- (void)setSpreadTimeCount:(long long)arg0;
- (long long)surplusProductsCount;
- (void)setSurplusProductsCount:(long long)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;

@end
