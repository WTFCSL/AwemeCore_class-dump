//
//     Generated by private class-dump
//

@class UIColor, NSString, UIFont, IESLiveGameFeedbackCategory;

@interface IESLiveGameFeedbackCategoryItemCellModel : NSObject {
    NSString *_titleText;
    UIColor *_titleTextColor;
    UIFont *_titleFont;
    UIColor *_borderColor;
    UIColor *_backgroundColor;
    IESLiveGameFeedbackCategory *_category;
}

@property (copy, nonatomic) NSString *titleText;
@property (retain, nonatomic) UIColor *titleTextColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) IESLiveGameFeedbackCategory *category;
@property (readonly, nonatomic) double estimatedWidth;

- (double)estimatedWidth;
- (void)setTitleTextColor:(id)arg0;
- (void)setTitleText:(id)arg0;
- (id)titleTextColor;
- (id)category;
- (void).cxx_destruct;
- (id)borderColor;
- (void)setBorderColor:(id)arg0;
- (void)setCategory:(id)arg0;
- (id)titleText;
- (id)initWithCategory:(id)arg0;
- (id)backgroundColor;
- (id)titleFont;
- (void)setBackgroundColor:(id)arg0;
- (void)setTitleFont:(id)arg0;

@end
