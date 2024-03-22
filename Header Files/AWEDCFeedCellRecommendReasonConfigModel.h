//
//     Generated by private class-dump
//

@class UIColor, NSString, NSArray, UIImage, AWEURLModel;

@interface AWEDCFeedCellRecommendReasonConfigModel : NSObject {
    BOOL _useV2;
    NSString *_text;
    AWEURLModel *_urlModel;
    UIImage *_image;
    NSArray *_lightUrls;
    NSArray *_darkUrls;
    double _containerHeight;
    double _containerCornerRadius;
    UIColor *_containerColorInLight;
    UIColor *_containerColorInDark;
    double _iconWidth;
    double _iconHeight;
    UIColor *_iconPlaceholderColorInLight;
    UIColor *_iconPlaceholderColorInDark;
    double _fontSize;
    UIColor *_textColorInLight;
    UIColor *_textColorInDark;
    double _iconLeftMargin;
    double _iconAndTextMargin;
    double _textRightMargin;
}

@property (retain, nonatomic) NSString *text;
@property (copy, nonatomic) AWEURLModel *urlModel;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSArray *lightUrls;
@property (copy, nonatomic) NSArray *darkUrls;
@property (nonatomic) BOOL useV2;
@property (nonatomic) double containerHeight;
@property (nonatomic) double containerCornerRadius;
@property (retain, nonatomic) UIColor *containerColorInLight;
@property (retain, nonatomic) UIColor *containerColorInDark;
@property (nonatomic) double iconWidth;
@property (nonatomic) double iconHeight;
@property (retain, nonatomic) UIColor *iconPlaceholderColorInLight;
@property (retain, nonatomic) UIColor *iconPlaceholderColorInDark;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) UIColor *textColorInLight;
@property (retain, nonatomic) UIColor *textColorInDark;
@property (nonatomic) double iconLeftMargin;
@property (nonatomic) double iconAndTextMargin;
@property (nonatomic) double textRightMargin;

- (id)urlModel;
- (void)setUrlModel:(id)arg0;
- (double)iconLeftMargin;
- (id)lightUrls;
- (void)setLightUrls:(id)arg0;
- (id)darkUrls;
- (void)setDarkUrls:(id)arg0;
- (BOOL)useV2;
- (void)setUseV2:(BOOL)arg0;
- (id)containerColorInLight;
- (void)setContainerColorInLight:(id)arg0;
- (id)containerColorInDark;
- (void)setContainerColorInDark:(id)arg0;
- (id)iconPlaceholderColorInLight;
- (void)setIconPlaceholderColorInLight:(id)arg0;
- (id)iconPlaceholderColorInDark;
- (void)setIconPlaceholderColorInDark:(id)arg0;
- (id)textColorInLight;
- (void)setTextColorInLight:(id)arg0;
- (id)textColorInDark;
- (void)setTextColorInDark:(id)arg0;
- (void)setIconLeftMargin:(double)arg0;
- (double)iconAndTextMargin;
- (void)setIconAndTextMargin:(double)arg0;
- (double)textRightMargin;
- (void)setTextRightMargin:(double)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setFontSize:(double)arg0;
- (void)setText:(id)arg0;
- (id)image;
- (double)fontSize;
- (void)setImage:(id)arg0;
- (id)text;
- (double)iconWidth;
- (double)iconHeight;
- (void)setIconWidth:(double)arg0;
- (void)setIconHeight:(double)arg0;
- (double)containerCornerRadius;
- (void)setContainerCornerRadius:(double)arg0;
- (void)setContainerHeight:(double)arg0;
- (double)containerHeight;

@end
