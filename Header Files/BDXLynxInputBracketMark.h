//
//     Generated by private class-dump
//

@class NSAttributedString;

@interface BDXLynxInputBracketMark : NSObject {
    NSAttributedString *_mark;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
}

@property (retain, nonatomic) NSAttributedString *mark;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (void).cxx_destruct;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)mark;
- (void)setMark:(id)arg0;

@end