//
//     Generated by private class-dump
//

@class EcomCampaign, EcomIcon, EcomProduct;

@interface EcomLiveCard : IESLivePBBaseMessage

@property (retain, nonatomic) EcomProduct *product;
@property (nonatomic) BOOL hasProduct;
@property (retain, nonatomic) EcomIcon *icon;
@property (nonatomic) BOOL hasIcon;
@property (retain, nonatomic) EcomCampaign *campaign;
@property (nonatomic) BOOL hasCampaign;

+ (id)descriptor;

@end
