//
//     Generated by private class-dump
//

@class NSLock, NSHashTable;

@interface IESLiveSubscriberUtil : NSObject {
    NSHashTable *_hashTable;
    NSLock *_lock;
}

@property (retain, nonatomic) NSHashTable *hashTable;
@property (retain, nonatomic) NSLock *lock;

+ (id)subscriberUtilForIdentifier:(id)arg0;
+ (id)strongObjectsSubscriberUtil;
+ (id)weakObjectsSubscriberUtil;
+ (void)removeSubscriberUtilForIdentifier:(id)arg0;

- (id)hashTable;
- (void)setHashTable:(id)arg0;
- (void)enumerateSubscribersUsingBlock:(id /* block */)arg0;
- (void)removeAllSubscribers;
- (id)initWithHashTableType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)lock;
- (void)setLock:(id)arg0;
- (id)addSubscriber:(id)arg0;
- (void)removeSubscriber:(id)arg0;

@end