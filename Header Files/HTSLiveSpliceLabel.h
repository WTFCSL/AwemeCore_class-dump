//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface HTSLiveSpliceLabel : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (retain, nonatomic) HTSLiveImage *backgroundImage;
@property (nonatomic) BOOL hasBackgroundImage;
@property (retain, nonatomic) HTSLiveImage *iconImage;
@property (nonatomic) BOOL hasIconImage;
@property (copy, nonatomic) NSString *backgroundColor;

+ (id)descriptor;

@end
