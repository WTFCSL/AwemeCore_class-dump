//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface CachalotLayoutFactory : NSObject <CachalotLayoutFactory> {
    NSMutableDictionary *_registeredLayouts;
}

@property (retain, nonatomic) NSMutableDictionary *registeredLayouts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)registeredLayouts;
- (id)getLayoutWithType:(unsigned long long)arg0;
- (void)registerLayoutGenerator:(id /* block */)arg0 toLayoutType:(unsigned long long)arg1;
- (void)setRegisteredLayouts:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
