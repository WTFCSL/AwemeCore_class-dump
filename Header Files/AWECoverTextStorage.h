//
//     Generated by private class-dump
//

@class AWECoverTextConfig, NSMutableAttributedString;

@interface AWECoverTextStorage : NSTextStorage {
    AWECoverTextConfig *_textConfig;
    NSMutableAttributedString *_imp;
}

@property (retain, nonatomic) NSMutableAttributedString *imp;
@property (retain, nonatomic) AWECoverTextConfig *textConfig;

- (id)textConfig;
- (void)setTextConfig:(id)arg0;
- (void)p_updateAttributed;
- (id)init;
- (id)attributesAtIndex:(unsigned long long)arg0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)arg1;
- (void).cxx_destruct;
- (void)processEditing;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0 withString:(id)arg1;
- (void)setAttributes:(id)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
- (id)string;
- (id)imp;
- (void)setImp:(id)arg0;

@end