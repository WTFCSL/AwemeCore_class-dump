//
//     Generated by private class-dump
//

@protocol CECMomentTextAreaFontRule;

@interface CECMomentTextAreaSizeLimit : NSObject {
    double _minWidth;
    double _maxWidth;
    unsigned long long _minNumberOfLines;
    unsigned long long _maxNumberOfLines;
    id<CECMomentTextAreaFontRule> _fontRule;
}

@property (nonatomic) double minWidth;
@property (nonatomic) double maxWidth;
@property (nonatomic) unsigned long long minNumberOfLines;
@property (nonatomic) unsigned long long maxNumberOfLines;
@property (retain, nonatomic) id<CECMomentTextAreaFontRule> fontRule;

- (unsigned long long)maxNumberOfLines;
- (void)setMaxNumberOfLines:(unsigned long long)arg0;
- (void)setMinNumberOfLines:(unsigned long long)arg0;
- (unsigned long long)minNumberOfLines;
- (id)fontRule;
- (void)setFontRule:(id)arg0;
- (id)init;
- (double)minWidth;
- (void).cxx_destruct;
- (void)setMaxWidth:(double)arg0;
- (double)maxWidth;
- (void)setMinWidth:(double)arg0;

@end
