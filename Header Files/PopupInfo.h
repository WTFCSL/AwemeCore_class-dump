//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, HTSLiveText;

@interface PopupInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *popUpImg;
@property (nonatomic) BOOL hasPopUpImg;
@property (retain, nonatomic) HTSLiveText *popUpText;
@property (nonatomic) BOOL hasPopUpText;
@property (retain, nonatomic) HTSLiveImage *popUpButtonImg;
@property (nonatomic) BOOL hasPopUpButtonImg;
@property (copy, nonatomic) NSString *schemeURL;

+ (id)descriptor;

@end
