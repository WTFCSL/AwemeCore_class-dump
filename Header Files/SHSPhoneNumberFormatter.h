//
//     Generated by private class-dump
//

@class NSString, SHSPhoneTextField, NSMutableDictionary;

@interface SHSPhoneNumberFormatter : NSFormatter {
    NSMutableDictionary *config;
    BOOL _canAffectLeftViewByFormatter;
    NSString *_prefix;
    SHSPhoneTextField *_textField;
}

@property BOOL canAffectLeftViewByFormatter;
@property (copy, nonatomic) NSString *prefix;
@property (weak) SHSPhoneTextField *textField;

+ (id)formattedRemove:(id)arg0 AtIndex:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
+ (long long)valuableCharCountIn:(id)arg0;
+ (BOOL)isValuableChar:(unsigned short)arg0;
+ (id)digitOnlyString:(id)arg0;

- (void)setDefaultOutputPattern:(id)arg0;
- (id)valuesForString:(id)arg0;
- (BOOL)canAffectLeftViewByFormatter;
- (id)getDefaultOutputPattern;
- (id)defaultPattern;
- (void)setCanAffectLeftViewByFormatter:(BOOL)arg0;
- (void)addOutputPattern:(id)arg0 forRegExp:(id)arg1 imagePath:(id)arg2;
- (void)resetDefaultFormat;
- (void)resetFormats;
- (void)setDefaultOutputPattern:(id)arg0 imagePath:(id)arg1;
- (void)addOutputPattern:(id)arg0 forRegExp:(id)arg1;
- (void)setOutputPatternsFromArray:(id)arg0;
- (id)digitOnlyString:(id)arg0;
- (id)configForSequence:(id)arg0;
- (BOOL)matchString:(id)arg0 withPattern:(id)arg1;
- (BOOL)isRequireSubstitute:(unsigned short)arg0;
- (id)stringWithoutFormat:(id)arg0;
- (id)applyFormat:(id)arg0 forFormattedString:(id)arg1;
- (void)setTextField:(id)arg0;
- (id)init;
- (id)textField;
- (id)prefix;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)arg0;
- (void)setPrefix:(id)arg0;
- (BOOL)getObjectValue:(id *)arg0 forString:(id)arg1 errorDescription:(id *)arg2;
- (id)resetConfig;

@end
