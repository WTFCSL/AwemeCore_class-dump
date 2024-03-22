//
//     Generated by private class-dump
//

@class NSArray, NSMutableDictionary, GXTemplateSource;
@protocol GXTemplateSourceProtocal;

@interface GXRegisterCenter : NSObject {
    BOOL _isNeedSort;
    NSArray *_resultSources;
    NSMutableDictionary *_kvSources;
    GXTemplateSource *_defaultTemplateSource;
    Class _lottieViewClass;
    Class _imageViewClass;
    Class _bizServiceImpl;
}

@property (retain, nonatomic) Class imageViewClass;
@property (readonly, nonatomic) Class lottieViewClass;
@property (retain, nonatomic) Class bizServiceImpl;
@property (readonly, nonatomic) id<GXTemplateSourceProtocal> defaultTemplateSource;
@property (readonly, nonatomic) NSArray<GXTemplateSourceProtocal> *templateSources;

+ (id)defaultCenter;

- (Class)bizServiceImpl;
- (Class)imageViewClass;
- (void)setImageViewClass:(Class)arg0;
- (id)sortByPriority;
- (void)setBizServiceImpl:(Class)arg0;
- (id)defaultTemplateSource;
- (void)registerLottieViewClass:(Class)arg0;
- (void)registerClass:(Class)arg0 forNodeType:(unsigned long long)arg1;
- (void)registerBizServiceImpl:(Class)arg0;
- (Class)lottieViewClass;
- (void)unregisterTemplateSource:(id)arg0;
- (BOOL)registerTemplateServiceWithBizId:(id)arg0 templateBundlePath:(id)arg1;
- (BOOL)unRegisterTemplateServiceWithBizId:(id)arg0;
- (id)loadTemplateBundlePathForBizId:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)templateSources;
- (void)registerTemplateSource:(id)arg0;

@end
