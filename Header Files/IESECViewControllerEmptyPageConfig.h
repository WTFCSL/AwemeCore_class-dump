//
//     Generated by private class-dump
//

@class NSString, UIImage;

@interface IESECViewControllerEmptyPageConfig : NSObject {
    NSString *_titleText;
    NSString *_informativeText;
    UIImage *_iconImage;
    NSString *_primaryButtonTitle;
    long long _style;
    id /* block */ _customImageViewGenerator;
}

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *informativeText;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *primaryButtonTitle;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ customImageViewGenerator;

- (id /* block */)customImageViewGenerator;
- (void)setCustomImageViewGenerator:(id /* block */)arg0;
- (id)iesec_emptyPageConfigForState:(unsigned long long)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })iesec_emptyPageEdgeInsets;
- (void)setInformativeText:(id)arg0;
- (id)informativeText;
- (long long)style;
- (id)iconImage;
- (void)setTitleText:(id)arg0;
- (void).cxx_destruct;
- (id)titleText;
- (void)setStyle:(long long)arg0;
- (void)setIconImage:(id)arg0;
- (id)primaryButtonTitle;
- (void)setPrimaryButtonTitle:(id)arg0;

@end
