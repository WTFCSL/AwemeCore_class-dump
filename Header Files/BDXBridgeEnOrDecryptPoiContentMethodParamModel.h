//
//     Generated by private class-dump
//

@class NSString;

@interface BDXBridgeEnOrDecryptPoiContentMethodParamModel : BDXBridgeModel {
    BOOL _encrypt;
    NSString *_srcStr;
}

@property (copy, nonatomic) NSString *srcStr;
@property (nonatomic) BOOL encrypt;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setEncrypt:(BOOL)arg0;
- (id)srcStr;
- (void)setSrcStr:(id)arg0;
- (void).cxx_destruct;
- (BOOL)encrypt;

@end
