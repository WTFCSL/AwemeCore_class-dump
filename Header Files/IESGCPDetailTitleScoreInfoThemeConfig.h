//
//     Generated by private class-dump
//

@class NSString, NSAttributedString;

@interface IESGCPDetailTitleScoreInfoThemeConfig : NSObject {
    long long _themeType;
    NSAttributedString *_scoreAttributeText;
    NSString *_scoreImageName;
    double _scoreImageTitleMargin;
    struct CGSize { double width; double height; } _scoreImageSize;
}

@property (nonatomic) long long themeType;
@property (retain, nonatomic) NSAttributedString *scoreAttributeText;
@property (retain, nonatomic) NSString *scoreImageName;
@property (nonatomic) struct CGSize { double width; double height; } scoreImageSize;
@property (nonatomic) double scoreImageTitleMargin;

- (id)scoreImageName;
- (struct CGSize { double x0; double x1; })scoreImageSize;
- (double)scoreImageTitleMargin;
- (id)scoreAttributeText;
- (void)setScoreAttributeText:(id)arg0;
- (void)setScoreImageName:(id)arg0;
- (void)setScoreImageSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setScoreImageTitleMargin:(double)arg0;
- (void).cxx_destruct;
- (long long)themeType;
- (void)setThemeType:(long long)arg0;

@end
