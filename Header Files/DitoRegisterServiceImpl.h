//
//     Generated by private class-dump
//

@class NSDictionary, NSMutableDictionary, NSString;

@interface DitoRegisterServiceImpl : NSObject <DitoRegisterServiceProtocol> {
    NSMutableDictionary *_registeredComponentDict;
    id /* block */ _globalComponentRegister;
}

@property (retain, nonatomic) NSMutableDictionary *registeredComponentDict;
@property (copy, nonatomic) id /* block */ globalComponentRegister;
@property (readonly, nonatomic) NSDictionary *globalComponentMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id /* block */)globalComponentRegister;
- (id)globalComponentMap;
- (void)registerDitoContainerAgent:(id)arg0 componentSubtype:(id)arg1;
- (id)registeredComponentDict;
- (void)unregisterComponentWithSubtype:(id)arg0;
- (void)setRegisteredComponentDict:(id)arg0;
- (void)setGlobalComponentRegister:(id /* block */)arg0;
- (void).cxx_destruct;

@end