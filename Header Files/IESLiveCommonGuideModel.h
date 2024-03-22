//
//     Generated by private class-dump
//

@class HTSLiveText, NSArray, NSString, UIImage, IESLiveImage;

@interface IESLiveCommonGuideModel : IESLiveDynamicModel

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) HTSLiveText *mainContent;
@property (retain, nonatomic) NSArray *secondaryContent;
@property (retain, nonatomic) IESLiveImage *icon;
@property (nonatomic) BOOL isRoundedIcon;
@property (retain, nonatomic) HTSLiveText *buttonContent;
@property (retain, nonatomic) NSString *buttonActionSchema;
@property (retain, nonatomic) IESLiveImage *buttonIcon;
@property (nonatomic) long long duration;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) UIImage *buttonImage;

- (id)initWithMessage:(id)arg0;

@end