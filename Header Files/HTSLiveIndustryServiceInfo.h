//
//     Generated by private class-dump
//

@class HTSLiveImage, HTSLiveIndustryServiceInfo_ConsultInfo;

@interface HTSLiveIndustryServiceInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL entranceOpen;
@property (retain, nonatomic) HTSLiveImage *iconImage;
@property (nonatomic) BOOL hasIconImage;
@property (retain, nonatomic) HTSLiveIndustryServiceInfo_ConsultInfo *consultInfo;
@property (nonatomic) BOOL hasConsultInfo;

+ (id)descriptor;

@end
