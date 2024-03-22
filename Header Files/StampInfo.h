//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface StampInfo : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *id_p;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSString *webURL;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) int status;
@property (copy, nonatomic) NSString *description_p;
@property (retain, nonatomic) HTSLiveImage *thumbnail;
@property (nonatomic) BOOL hasThumbnail;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *logExtra;

+ (id)descriptor;

@end