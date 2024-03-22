//
//     Generated by private class-dump
//

@class HTSLiveAsyncAuthData, NSMutableDictionary, HTSLiveTicketData, ProductsData, HTSLiveOrderData;

@interface HTSLivePaidLiveData : IESLivePBBaseMessage

@property (nonatomic) int paidType;
@property (nonatomic) int viewRight;
@property (nonatomic) long long duration;
@property (retain, nonatomic) HTSLiveTicketData *ticketSession;
@property (nonatomic) BOOL hasTicketSession;
@property (retain, nonatomic) HTSLiveOrderData *orderData;
@property (nonatomic) BOOL hasOrderData;
@property (nonatomic) int delivery;
@property (nonatomic) BOOL needDeliveryNotice;
@property (nonatomic) int anchorRight;
@property (nonatomic) int payAbType;
@property (retain, nonatomic) NSMutableDictionary *privilegeInfo;
@property (readonly, nonatomic) unsigned long long privilegeInfo_Count;
@property (retain, nonatomic) NSMutableDictionary *privilegeInfoMap;
@property (readonly, nonatomic) unsigned long long privilegeInfoMap_Count;
@property (retain, nonatomic) HTSLiveAsyncAuthData *asyncAuthData;
@property (nonatomic) BOOL hasAsyncAuthData;
@property (retain, nonatomic) ProductsData *productsData;
@property (nonatomic) BOOL hasProductsData;

+ (id)descriptor;

@end