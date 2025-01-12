//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSRecursiveLock;

@interface AWEDemaciaManager : NSObject {
    NSMutableDictionary *_protocolToClassMap;
    NSMutableDictionary *_protocolToObjectMap;
    NSRecursiveLock *_recLock;
}

@property (retain) NSMutableDictionary *protocolToClassMap;
@property (retain) NSMutableDictionary *protocolToObjectMap;
@property (retain) NSRecursiveLock *recLock;

+ (id)getObjectWithProtocol:(id)arg0;
+ (Class)getClassWithProtocol:(id)arg0;
+ (id)sharedInstance;

- (id)getObjectWithProtocol:(id)arg0;
- (Class)getClassWithProtocol:(id)arg0;
- (void)bindClass:(Class)arg0 toProtocol:(id)arg1;
- (id)protocolToClassMap;
- (void)setProtocolToClassMap:(id)arg0;
- (id)protocolToObjectMap;
- (void)setProtocolToObjectMap:(id)arg0;
- (id)recLock;
- (void)setRecLock:(id)arg0;
- (id)adapterMapDict;
- (id)init;
- (void).cxx_destruct;

@end
