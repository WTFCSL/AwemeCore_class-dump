//
//     Generated by private class-dump
//

@class NSString;

@interface BDPCDDynamicCardUIPropsRichTextModel : BDPCDDynamicCardUIPropsModel {
    NSString *_textContent;
    long long _textType;
    unsigned long long _usage;
    long long _fonSizeType;
}

@property (copy, nonatomic) NSString *textContent;
@property (nonatomic) long long textType;
@property (nonatomic) unsigned long long usage;
@property (nonatomic) long long fonSizeType;

- (long long)fonSizeType;
- (void)setFonSizeType:(long long)arg0;
- (void)setUsage:(unsigned long long)arg0;
- (unsigned long long)usage;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg0;
- (id)textContent;
- (void)setTextContent:(id)arg0;
- (void)setTextType:(long long)arg0;
- (long long)textType;

@end