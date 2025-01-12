//
//     Generated by private class-dump
//

@class NSString;
@protocol DVEResourceLoaderProtocol;

@interface ACCBrushDVEServiceInject : NSObject <DVEVCContextExternalInjectProtocol> {
    id<DVEResourceLoaderProtocol> _resourceLoader;
}

@property (retain, nonatomic) id<DVEResourceLoaderProtocol> resourceLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)provideResourceLoader;
- (void).cxx_destruct;
- (void)setResourceLoader:(id)arg0;
- (id)resourceLoader;

@end
