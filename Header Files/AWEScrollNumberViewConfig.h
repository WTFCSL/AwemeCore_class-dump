//
//     Generated by private class-dump
//

@class UIColor, UIFont;

@interface AWEScrollNumberViewConfig : NSObject {
    UIColor *_textColor;
    UIFont *_font;
    unsigned long long _maxRowNumber;
}

@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) unsigned long long maxRowNumber;

+ (id)defaultConfig;

- (void)setMaxRowNumber:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)font;
- (void)setFont:(id)arg0;
- (void)setTextColor:(id)arg0;
- (id)textColor;
- (unsigned long long)maxRowNumber;

@end
