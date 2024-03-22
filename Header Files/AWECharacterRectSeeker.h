//
//     Generated by private class-dump
//

@class NSTextContainer, NSLayoutManager, NSTextStorage;

@interface AWECharacterRectSeeker : NSObject {
    NSTextStorage *_textStorage;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
}

@property (retain, nonatomic) NSTextStorage *textStorage;
@property (retain, nonatomic) NSLayoutManager *layoutManager;
@property (retain, nonatomic) NSTextContainer *textContainer;

- (void)configWithModel:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })characterRectAtIndex:(unsigned long long)arg0;
- (void)setupBasic;
- (id)textContainer;
- (id)layoutManager;
- (void)setTextContainer:(id)arg0;
- (id)textStorage;
- (id)init;
- (void).cxx_destruct;
- (void)setTextStorage:(id)arg0;
- (void)setLayoutManager:(id)arg0;

@end
