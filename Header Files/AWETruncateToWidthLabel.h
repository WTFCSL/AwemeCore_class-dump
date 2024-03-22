//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface AWETruncateToWidthLabel : UILabel {
    double _maxWidth;
    double _maxLineHeight;
    long long _maxLineNumber;
    long long _wordNumberOfFirstString;
    long long _lineNumber;
    NSMutableArray *_originText;
    NSString *_firstString;
    NSString *_keepString;
}

@property (nonatomic) double maxWidth;
@property (nonatomic) double maxLineHeight;
@property (nonatomic) long long maxLineNumber;
@property (nonatomic) long long wordNumberOfFirstString;
@property (nonatomic) long long lineNumber;
@property (retain, nonatomic) NSMutableArray *originText;
@property (retain, nonatomic) NSString *firstString;
@property (retain, nonatomic) NSString *keepString;

- (id)originText;
- (void)setOriginText:(id)arg0;
- (id)array2String:(id)arg0;
- (long long)numberOfLine:(id)arg0;
- (long long)maxLineNumber;
- (id)firstString;
- (long long)wordNumberOfFirstString;
- (id)keepString;
- (void)setupLabel:(id)arg0;
- (void)setMaxLineHeight:(double)arg0;
- (void)setMaxLineNumber:(long long)arg0;
- (void)setWordNumberOfFirstString:(long long)arg0;
- (void)setFirstString:(id)arg0;
- (void)setKeepString:(id)arg0;
- (void)setLineNumber:(long long)arg0;
- (void).cxx_destruct;
- (void)setMaxWidth:(double)arg0;
- (double)maxWidth;
- (long long)lineNumber;
- (double)maxLineHeight;

@end
