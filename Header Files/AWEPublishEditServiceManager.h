//
//     Generated by private class-dump
//

@class ACCThreadSafeMutableDictionary, NSString;

@interface AWEPublishEditServiceManager : NSObject <AWEPublishEditServiceManagerProtocol> {
    ACCThreadSafeMutableDictionary *_usedServiceDict;
}

@property (retain, nonatomic) ACCThreadSafeMutableDictionary *usedServiceDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dequeueEditServiceWithWorkspace:(id)arg0 index:(long long)arg1 useScene:(long long)arg2 completion:(id /* block */)arg3;
- (void)enqueueEditService:(id)arg0 useScene:(long long)arg1;
- (void)removeEditServices;
- (void)setUsedServiceDict:(id)arg0;
- (id)usedKeyOfEditServiceWithIndex:(long long)arg0 projectUUID:(id)arg1;
- (void)removeEditServiceIfNeededWithCurrentIndex:(long long)arg0 currentUsedKey:(id)arg1;
- (id)fetchAvailableServiceWithIndex:(long long)arg0 projectUUID:(id)arg1 useScene:(long long)arg2;
- (id)usedServiceDict;
- (void)applyPublishCanvasStateWithProject:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
