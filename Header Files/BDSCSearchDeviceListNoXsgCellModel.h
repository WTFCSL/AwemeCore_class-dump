//
//     Generated by private class-dump
//

@class NSString, BDSCBackgroundUIModel, NSMutableArray;

@interface BDSCSearchDeviceListNoXsgCellModel : BDSCDeviceListModel {
    BDSCBackgroundUIModel *_background;
    NSString *_backgroundPlaceholder;
    NSString *_recommendText;
    NSString *_recommendTextColor;
    NSString *_recommendImage;
    NSString *_defaultRecommendImageName;
    NSMutableArray *_tags;
    double _fontSize;
    double _cornerRadius;
    double _margin;
}

@property (retain, nonatomic) BDSCBackgroundUIModel *background;
@property (copy, nonatomic) NSString *backgroundPlaceholder;
@property (copy, nonatomic) NSString *recommendText;
@property (copy, nonatomic) NSString *recommendTextColor;
@property (copy, nonatomic) NSString *recommendImage;
@property (copy, nonatomic) NSString *defaultRecommendImageName;
@property (retain, nonatomic) NSMutableArray *tags;
@property (nonatomic) double fontSize;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double margin;

- (id)recommendText;
- (void)setRecommendText:(id)arg0;
- (id)recommendImage;
- (void)setRecommendImage:(id)arg0;
- (id)backgroundPlaceholder;
- (void)setBackgroundPlaceholder:(id)arg0;
- (id)recommendTextColor;
- (id)defaultRecommendImageName;
- (void)setRecommendTextColor:(id)arg0;
- (void)setDefaultRecommendImageName:(id)arg0;
- (double)margin;
- (id)init;
- (id)background;
- (void).cxx_destruct;
- (void)setFontSize:(double)arg0;
- (double)cornerRadius;
- (double)fontSize;
- (id)tags;
- (void)setBackground:(id)arg0;
- (void)setMargin:(double)arg0;
- (void)setTags:(id)arg0;
- (void)setCornerRadius:(double)arg0;
- (id)cellIdentifier;
- (double)cellHeight;

@end
