//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface HTSLiveUser_Border : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) long long level;
@property (retain, nonatomic) HTSLiveImage *thumbIcon;
@property (nonatomic) BOOL hasThumbIcon;
@property (copy, nonatomic) NSString *dressId;

+ (id)borderWithIcon:(id)arg0;
+ (id)descriptor;

@end