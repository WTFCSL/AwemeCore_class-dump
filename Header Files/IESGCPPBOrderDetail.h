//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, IESGCPPBContentItemInfo;

@interface IESGCPPBOrderDetail : GPBMessage

@property (copy, nonatomic) NSString *orderId;
@property (nonatomic) int orderType;
@property (nonatomic) long long userId;
@property (copy, nonatomic) NSString *orderName;
@property (copy, nonatomic) NSString *orderDescription;
@property (nonatomic) int status;
@property (nonatomic) long long createTime;
@property (nonatomic) long long finishTime;
@property (nonatomic) long long deliveryTime;
@property (retain, nonatomic) IESGCPPBContentItemInfo *itemInfo;
@property (nonatomic) BOOL hasItemInfo;
@property (copy, nonatomic) NSString *merchantTitle;
@property (retain, nonatomic) NSMutableArray *buttonListArray;
@property (readonly, nonatomic) unsigned long long buttonListArray_Count;
@property (copy, nonatomic) NSString *orderDetailLinkURL;

+ (id)descriptor;

@end
