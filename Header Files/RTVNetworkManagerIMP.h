//
//     Generated by private class-dump
//

@class NSString;

@interface RTVNetworkManagerIMP : NSObject <RTVNetworkManager>

@property (readonly, nonatomic) NSString *host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)requestJSONFromPath:(id)arg0 params:(id)arg1 method:(long long)arg2 modelClass:(Class)arg3;
- (id)__URLWithPath:(id)arg0;
- (id)__requestWithURL:(id)arg0 params:(id)arg1 method:(long long)arg2 model:(Class)arg3 callback:(id /* block */)arg4;
- (id)host;

@end
