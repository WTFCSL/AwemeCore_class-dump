//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface HTSLiveShowCenterShowInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *horizontalCover;
@property (nonatomic) BOOL hasHorizontalCover;
@property (retain, nonatomic) HTSLiveImage *verticalCover;
@property (nonatomic) BOOL hasVerticalCover;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *tag;
@property (nonatomic) BOOL lastSeen;
@property (copy, nonatomic) NSString *updateStatusDesc;
@property (copy, nonatomic) NSString *cardColor;

+ (id)descriptor;

@end
