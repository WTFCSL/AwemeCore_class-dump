//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface HTSLiveGameEntranceInfo : IESLivePBBaseMessage

@property (nonatomic) long long interactType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
