//
//     Generated by private class-dump
//

@class NSString;

@interface AWEIMEmoticonMatchingResult : NSObject <AWEIMEmoticonMatchingResultProtocol> {
    NSString *_emoticonImageName;
    NSString *_representationString;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
}

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (copy, nonatomic) NSString *emoticonImageName;
@property (copy, nonatomic) NSString *representationString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)representationString;
- (id)emoticonImageName;
- (void)setEmoticonImageName:(id)arg0;
- (void)setRepresentationString:(id)arg0;
- (void).cxx_destruct;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;

@end
