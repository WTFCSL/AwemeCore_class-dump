//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPOIReflowResourceComponent : NSObject {
    BOOL _bOpen;
    NSString *_transSchema;
}

@property (nonatomic) BOOL bOpen;
@property (retain, nonatomic) NSString *transSchema;

- (void)setupConfig:(id)arg0;
- (void)setBOpen:(BOOL)arg0;
- (void)setTransSchema:(id)arg0;
- (id)makeFeedOriginGidInfo;
- (id)makeDiamondTransInfo:(id)arg0 sourceType:(long long)arg1;
- (id)openSubPageSchema:(id)arg0 scene:(long long)arg1;
- (id)transSchema;
- (id)hostPrefix;
- (BOOL)isLocalLifeReflowSchema:(id)arg0;
- (BOOL)switchRouterWithSchema:(id)arg0;
- (BOOL)bOpen;
- (BOOL)prefixEqual:(id)arg0;
- (BOOL)needReplaceSchema:(id)arg0;
- (void).cxx_destruct;

@end
