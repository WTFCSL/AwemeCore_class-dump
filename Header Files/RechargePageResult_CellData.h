//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface RechargePageResult_CellData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *description_p;
@property (retain, nonatomic) HTSLiveImage *lightIcon;
@property (nonatomic) BOOL hasLightIcon;
@property (copy, nonatomic) NSString *hint;

+ (id)descriptor;

@end