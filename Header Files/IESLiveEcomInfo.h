//
//     Generated by private class-dump
//

@class NSString, IESLiveShopHeaderInfo, IESLiveWindowHeaderInfo, GPBInt32ObjectDictionary;

@interface IESLiveEcomInfo : IESLivePBBaseMessage

@property (nonatomic) int ecomType;
@property (retain, nonatomic) IESLiveShopHeaderInfo *shopHeaderInfo;
@property (nonatomic) BOOL hasShopHeaderInfo;
@property (retain, nonatomic) IESLiveWindowHeaderInfo *windowHeaderInfo;
@property (nonatomic) BOOL hasWindowHeaderInfo;
@property (retain, nonatomic) GPBInt32ObjectDictionary *ecomWallBgs;
@property (readonly, nonatomic) unsigned long long ecomWallBgs_Count;
@property (copy, nonatomic) NSString *titleColor;
@property (copy, nonatomic) NSString *contentColor;

+ (id)descriptor;

@end