//
//     Generated by private class-dump
//

@class NSString;

@interface AWEIMUserTagInfo : NSObject <AWEIMDuxTextTagRenderDataProtocol> {
    NSString *_tagDesc;
    long long _tagStyle;
    long long _tagType;
}

@property (nonatomic) long long tagType;
@property (copy, nonatomic) NSString *tagDesc;
@property (nonatomic) long long tagStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tagDesc;
- (void)setTagDesc:(id)arg0;
- (long long)tagStyle;
- (void)setTagStyle:(long long)arg0;
- (long long)tagType;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg0;
- (void)setTagType:(long long)arg0;

@end
