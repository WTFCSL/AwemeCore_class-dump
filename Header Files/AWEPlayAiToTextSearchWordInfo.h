//
//     Generated by private class-dump
//

@class AWETextExtra;

@interface AWEPlayAiToTextSearchWordInfo : NSObject {
    AWETextExtra *_textExtra;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
}

@property (retain, nonatomic) AWETextExtra *textExtra;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

+ (id)attachmentInfo:(id)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;

- (id)textExtra;
- (void)setTextExtra:(id)arg0;
- (void).cxx_destruct;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;

@end