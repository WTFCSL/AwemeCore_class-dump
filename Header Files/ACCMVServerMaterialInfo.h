//
//     Generated by private class-dump
//

@class NSString;

@interface ACCMVServerMaterialInfo : NSObject {
    NSString *_nativeMaterialPath;
    NSString *_algorithmName;
    NSString *_algorithmJson;
    NSString *_resultMaterialPath;
    unsigned long long _algorithmResultType;
}

@property (copy, nonatomic) NSString *nativeMaterialPath;
@property (copy, nonatomic) NSString *algorithmName;
@property (copy, nonatomic) NSString *algorithmJson;
@property (copy, nonatomic) NSString *resultMaterialPath;
@property (nonatomic) unsigned long long algorithmResultType;

+ (long long)getTypeFromFileExtension:(id)arg0;
+ (id)mergeServerMaterialInfo:(id)arg0;
+ (id)generateLocalAlgorithmMaterial:(id)arg0;

- (void)setAlgorithmResultType:(unsigned long long)arg0;
- (unsigned long long)algorithmResultType;
- (id)nativeMaterialPath;
- (id)algorithmJson;
- (id)resultMaterialPath;
- (void)setNativeMaterialPath:(id)arg0;
- (void)setAlgorithmJson:(id)arg0;
- (void)setResultMaterialPath:(id)arg0;
- (id)initWithDTONetFileBean:(id)arg0;
- (id)dtoNetFileBean;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)algorithmName;
- (void)setAlgorithmName:(id)arg0;

@end