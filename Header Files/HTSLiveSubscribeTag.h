//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface HTSLiveSubscribeTag : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *dressId;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long startTime;
@property (nonatomic) long long priority;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;

+ (id)descriptor;

@end
