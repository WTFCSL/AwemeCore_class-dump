//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSDictionary;

@interface BSTCommonBaseModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_isBst;
    NSString *_bstType;
    NSString *_bstModel;
    NSString *_bstBiz;
    NSDictionary *_extraInfo;
}

@property (nonatomic) BOOL isTracked;
@property (readonly, copy, nonatomic) NSString *unitId;
@property (retain, nonatomic) NSNumber *isBst;
@property (copy, nonatomic) NSString *bstType;
@property (copy, nonatomic) NSString *bstModel;
@property (copy, nonatomic) NSString *bstBiz;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtraInfo:(id)arg0;
- (void)setBstModel:(id)arg0;
- (id)bstModel;
- (id)unitId;
- (id)trackParams;
- (void)setBstType:(id)arg0;
- (id)bstBiz;
- (id)isBst;
- (void)setIsBst:(id)arg0;
- (id)bstType;
- (void)setBstBiz:(id)arg0;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)arg0;
- (id)extraInfo;
- (BOOL)isTracked;
- (void)setIsTracked:(BOOL)arg0;

@end