//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface AWEIMPinYinSearchObject : NSObject <AWEIMPinYinSearchProtocol> {
    NSString *_oriString;
    NSString *_pinYin;
    NSString *_pinYinWithoutSystemBlank;
    NSMutableArray *_components;
}

@property (copy, nonatomic) NSString *pinYinWithoutSystemBlank;
@property (retain, nonatomic) NSMutableArray *components;
@property (copy, nonatomic) NSString *oriString;
@property (copy, nonatomic) NSString *pinYin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isCharacterPinYin:(unsigned short)arg0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })completeCharacterRangeAtIndex:(long long)arg0 inString:(id)arg1;
+ (void)checkOther:(id)arg0 pinYin:(id)arg1 idxPinYin:(long long)arg2 length:(long long)arg3;
+ (BOOL)isCharacterPinYinDiacritics:(unsigned short)arg0;
+ (id)pinYinSearchObjectWithOriginalString:(id)arg0 pinYin:(id)arg1;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })matchRangeForKeyword:(id)arg0;
- (void)setPinYin:(id)arg0;
- (id)pinYin;
- (void)setOriString:(id)arg0;
- (id)oriString;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })fullPinYinMatchRangeForKeyword:(id)arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })firstLetterMatchRangeForKeyword:(id)arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })prefixMatchRangeForKeyword:(id)arg0;
- (id)pinYinWithoutSystemBlank;
- (void)setPinYinWithoutSystemBlank:(id)arg0;
- (id)components;
- (id)init;
- (void).cxx_destruct;
- (void)setComponents:(id)arg0;

@end