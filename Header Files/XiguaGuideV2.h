//
//     Generated by private class-dump
//

@class NSString, UrlStructV2, XiguaGuidePopupV2;

@interface XiguaGuideV2 : GPBMessage

@property (nonatomic) BOOL guide;
@property (nonatomic) BOOL hasGuide;
@property (copy, nonatomic) NSString *minRatio;
@property (nonatomic) BOOL hasMinRatio;
@property (copy, nonatomic) NSString *labelText;
@property (nonatomic) BOOL hasLabelText;
@property (retain, nonatomic) UrlStructV2 *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasTitle;
@property (nonatomic) int playDoneControl;
@property (nonatomic) BOOL hasPlayDoneControl;
@property (retain, nonatomic) XiguaGuidePopupV2 *guidePopup;
@property (nonatomic) BOOL hasGuidePopup;

+ (id)descriptor;

@end
