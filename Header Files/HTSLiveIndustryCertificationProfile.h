//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface HTSLiveIndustryCertificationProfile : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *contentColor;
@property (copy, nonatomic) NSString *bgColor;
@property (nonatomic) long long certType;

+ (id)descriptor;

@end
