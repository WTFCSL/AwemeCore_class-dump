//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, HTSLiveText;

@interface HTSLivePictureTextStyle : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveText *text;
@property (nonatomic) BOOL hasText;
@property (retain, nonatomic) HTSLiveText *subText;
@property (nonatomic) BOOL hasSubText;
@property (retain, nonatomic) HTSLiveImage *picture;
@property (nonatomic) BOOL hasPicture;
@property (copy, nonatomic) NSString *schema;

+ (id)descriptor;

@end
