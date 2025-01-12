//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDTONewCoverMobParams : MTLModel <MTLJSONSerializing> {
    BOOL _isText;
    BOOL _isCoverTemplate;
    BOOL _isTextTemplate;
    BOOL _isPicAdjust;
    BOOL _isNewText;
    long long _textNum;
    NSString *_coverTemplateId;
    NSString *_coverTabName;
}

@property (nonatomic) BOOL isText;
@property (nonatomic) BOOL isCoverTemplate;
@property (nonatomic) BOOL isTextTemplate;
@property (nonatomic) BOOL isPicAdjust;
@property (nonatomic) BOOL isNewText;
@property (nonatomic) long long textNum;
@property (copy, nonatomic) NSString *coverTemplateId;
@property (copy, nonatomic) NSString *coverTabName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setIsText:(BOOL)arg0;
- (BOOL)isCoverTemplate;
- (void)setIsCoverTemplate:(BOOL)arg0;
- (BOOL)isTextTemplate;
- (void)setIsTextTemplate:(BOOL)arg0;
- (BOOL)isPicAdjust;
- (void)setIsPicAdjust:(BOOL)arg0;
- (BOOL)isNewText;
- (void)setIsNewText:(BOOL)arg0;
- (long long)textNum;
- (void)setTextNum:(long long)arg0;
- (id)coverTemplateId;
- (void)setCoverTemplateId:(id)arg0;
- (id)coverTabName;
- (void)setCoverTabName:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isText;

@end
