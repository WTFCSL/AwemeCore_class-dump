//
//     Generated by private class-dump
//

@class NSString, AWEIMChineseDecomposer;

@interface AWEIMPinYinSearchMatcher : NSObject <AWEIMPinYinSearchProtocol> {
    NSString *_oriString;
    AWEIMChineseDecomposer *_decomposer;
}

@property (copy, nonatomic) NSString *oriString;
@property (retain, nonatomic) AWEIMChineseDecomposer *decomposer;
@property (readonly, copy, nonatomic) NSString *pinYin;
@property (readonly, copy, nonatomic) NSString *initials;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)matcherWithString:(id)arg0;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })matchRangeForKeyword:(id)arg0;
- (id)pinYin;
- (void)setOriString:(id)arg0;
- (void)setDecomposer:(id)arg0;
- (id)decomposer;
- (id)oriString;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })fullPinYinMatchRangeForKeyword:(id)arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })firstLetterMatchRangeForKeyword:(id)arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })prefixMatchRangeForKeyword:(id)arg0;
- (void).cxx_destruct;
- (id)initials;

@end
