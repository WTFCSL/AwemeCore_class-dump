//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface DHThreadSafeMutableDictionary : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_dictionary;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *dictionary;

- (void)removeAllObject;
- (void).cxx_destruct;
- (void)setObject:(id)arg0 forKey:(id)arg1;
- (void)setDictionary:(id)arg0;
- (id)allValues;
- (void)removeObjectForKey:(id)arg0;
- (id)objectForKey:(id)arg0;
- (id)dictionary;
- (id)queue;
- (void)setQueue:(id)arg0;
- (id)initWithTag:(id)arg0;

@end
