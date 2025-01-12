//
//     Generated by private class-dump
//

@class NSMapTable, BUPersistenceLRULinkedNode;

@interface BUPersistenceLRULinkedList : NSObject {
    unsigned long long _currentCapacityCount;
    unsigned long long _currentCapacitySize;
    BUPersistenceLRULinkedNode *_header;
    BUPersistenceLRULinkedNode *_tail;
    NSMapTable *_mapTable;
}

@property (retain, nonatomic) BUPersistenceLRULinkedNode *header;
@property (retain, nonatomic) BUPersistenceLRULinkedNode *tail;
@property (retain, nonatomic) NSMapTable *mapTable;
@property (nonatomic) unsigned long long currentCapacityCount;
@property (nonatomic) unsigned long long currentCapacitySize;

- (void)setCurrentCapacityCount:(unsigned long long)arg0;
- (unsigned long long)currentCapacitySize;
- (void)setCurrentCapacitySize:(unsigned long long)arg0;
- (void)bringNodeToHeadWithKey:(id)arg0;
- (void)bringNodeToHeadWithKeys:(id)arg0;
- (unsigned long long)currentCapacityCount;
- (id)removeTailNode;
- (void)insertNodeAtHeadWithKey:(id)arg0;
- (void)removeNodeWithKey:(id)arg0;
- (void)removeAll;
- (id)tail;
- (id)init;
- (void).cxx_destruct;
- (id)header;
- (void)setHeader:(id)arg0;
- (void)setTail:(id)arg0;
- (id)mapTable;
- (void)setMapTable:(id)arg0;

@end
