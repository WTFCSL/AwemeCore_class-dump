//
//     Generated by private class-dump
//

@class UIColor, UIFont, NSString, UIImage;

@interface AWEDetailCommerceDescriptionFullConfigurationImpl : NSObject <AWEDetailCommerceDescriptionViewConfiguration>

@property (readonly, nonatomic) UIColor *descriptionLabelBackgroundColor;
@property (readonly, nonatomic) double descriptionMinLineHeight;
@property (readonly, nonatomic) double descriptionMaxLineHeight;
@property (readonly, nonatomic) long long descriptionFoldThresholdLineCount;
@property (readonly, nonatomic) UIFont *descriptionTextFont;
@property (readonly, nonatomic) UIColor *descriptionTextColor;
@property (readonly, nonatomic) UIFont *showMoreTextFont;
@property (readonly, nonatomic) UIColor *showMoreTextColor;
@property (readonly, nonatomic) UIFont *showLessTextFont;
@property (readonly, nonatomic) UIColor *showLessTextColor;
@property (readonly, nonatomic) UIImage *arrowDownImage;
@property (readonly, nonatomic) UIColor *seperateLineColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureShowMoreAndLessButtonForDescriptionView:(id)arg0 model:(id)arg1;
- (id)descriptionLabelBackgroundColor;
- (double)descriptionMinLineHeight;
- (double)descriptionMaxLineHeight;
- (long long)descriptionFoldThresholdLineCount;
- (id)descriptionTextFont;
- (id)showMoreTextFont;
- (id)showLessTextFont;
- (id)arrowDownImage;
- (id)seperateLineColor;
- (id)showMoreTextColor;
- (id)showLessTextColor;
- (id)descriptionTextColor;

@end
