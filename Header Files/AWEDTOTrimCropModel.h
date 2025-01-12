//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDTOTrimCropModel : MTLModel <MTLJSONSerializing> {
    BOOL _isTrimCropDraft;
    BOOL _hasCropped;
    BOOL _hasRotated;
    BOOL _hasFlipped;
    BOOL _hasTrimmed;
    long long _subPathType;
}

@property (nonatomic) BOOL isTrimCropDraft;
@property (nonatomic) BOOL hasCropped;
@property (nonatomic) BOOL hasRotated;
@property (nonatomic) BOOL hasFlipped;
@property (nonatomic) BOOL hasTrimmed;
@property (nonatomic) long long subPathType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isTrimCropDraft;
- (void)setIsTrimCropDraft:(BOOL)arg0;
- (BOOL)hasCropped;
- (void)setHasCropped:(BOOL)arg0;
- (BOOL)hasFlipped;
- (void)setHasFlipped:(BOOL)arg0;
- (BOOL)hasTrimmed;
- (void)setHasTrimmed:(BOOL)arg0;
- (long long)subPathType;
- (void)setSubPathType:(long long)arg0;
- (void)setHasRotated:(BOOL)arg0;
- (BOOL)hasRotated;

@end
