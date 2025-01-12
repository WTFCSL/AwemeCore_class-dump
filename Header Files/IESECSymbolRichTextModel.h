//
//     Generated by private class-dump
//

@class UIColor, NSString, IESECSymbolIconModel, NSDictionary, IESECLynxTextView;

@interface IESECSymbolRichTextModel : NSObject {
    NSString *_symbol;
    NSString *_name;
    long long _fontStyle;
    UIColor *_fontColor;
    long long _insertIndex;
    NSString *_payload;
    IESECSymbolIconModel *_symbolIcon;
    IESECLynxTextView *_textView;
    NSDictionary *_textAttributes;
    NSDictionary *_defaultAttributes;
    long long _start;
    long long _end;
    struct _NSRange { unsigned long long location; unsigned long long length; } _displayedRange;
}

@property (readonly, copy, nonatomic) NSString *symbol;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long fontStyle;
@property (readonly, nonatomic) UIColor *fontColor;
@property (readonly, nonatomic) long long insertIndex;
@property (readonly, copy, nonatomic) NSString *payload;
@property (readonly, nonatomic) IESECSymbolIconModel *symbolIcon;
@property (readonly, weak, nonatomic) IESECLynxTextView *textView;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } displayedRange;
@property (copy, nonatomic) NSDictionary *textAttributes;
@property (copy, nonatomic) NSDictionary *defaultAttributes;
@property (readonly, nonatomic) long long start;
@property (readonly, nonatomic) long long end;

- (long long)insertIndex;
- (id)initWithParams:(id)arg0 textView:(id)arg1;
- (void)insertSymbolTextWithStarIndex:(long long)arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })displayedRange;
- (id)symbolIcon;
- (id)symbolRichTextWithStart:(long long)arg0;
- (void)setDisplayedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (BOOL)isValidRangeForUpdate;
- (BOOL)isIntersectionWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (BOOL)updateSymbolTextWithAttributedText:(id)arg0;
- (id)textView;
- (id)defaultAttributes;
- (long long)end;
- (long long)startIndex;
- (long long)fontStyle;
- (void)setDefaultAttributes:(id)arg0;
- (id)payload;
- (void).cxx_destruct;
- (id)textAttributes;
- (id)symbol;
- (long long)start;
- (void)setTextAttributes:(id)arg0;
- (id)name;
- (id)string;
- (BOOL)hasIcon;
- (id)fontColor;

@end
