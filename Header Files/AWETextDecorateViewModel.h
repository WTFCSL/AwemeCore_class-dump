//
//     Generated by private class-dump
//

@class NSString;

@interface AWETextDecorateViewModel : AWEDecorateViewModel {
    NSString *_content;
    double _fontSize;
    NSString *_fontName;
    NSString *_fontColor;
}

@property (copy, nonatomic) NSString *content;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) NSString *fontName;
@property (copy, nonatomic) NSString *fontColor;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setFontSize:(double)arg0;
- (double)fontSize;
- (id)content;
- (id)fontName;
- (void)setFontName:(id)arg0;
- (void)setContent:(id)arg0;
- (id)fontColor;
- (void)setFontColor:(id)arg0;

@end
