//
//     Generated by private class-dump
//

@class NSString;
@protocol HybridWebViewProtocol;

@interface HybridWebFalconMonitorInterceptor : NSObject <IESFalconMonitorInterceptor> {
    long long _templateResourceFrom;
    unsigned long long _packageVersion;
    id<HybridWebViewProtocol> _container;
    NSString *_templateURLString;
}

@property (weak, nonatomic) id<HybridWebViewProtocol> container;
@property (copy, nonatomic) NSString *templateURLString;
@property (nonatomic) long long templateResourceFrom;
@property (nonatomic) unsigned long long packageVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)packageVersion;
- (void)didGetMetaData:(id)arg0 forRequest:(id)arg1 isGetMethod:(BOOL)arg2 isCustomInterceptor:(BOOL)arg3;
- (void)setPackageVersion:(unsigned long long)arg0;
- (void)setTemplateURLString:(id)arg0;
- (id)templateURLString;
- (void)setTemplateResourceFrom:(long long)arg0;
- (void)templateURLChangedTo:(id)arg0;
- (long long)templateResourceFrom;
- (id)container;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (id)initWithContainer:(id)arg0;

@end
