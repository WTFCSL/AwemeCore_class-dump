//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface HTSLiveComboTrayInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *comboId;
@property (retain, nonatomic) HTSLiveImage *trayBaseImg;
@property (nonatomic) BOOL hasTrayBaseImg;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) int action;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
