//
//     Generated by private class-dump
//

@class ACCLRUCacheNode;

@interface ACCLRUCacheLinkedList : NSObject {
    ACCLRUCacheNode *_head;
    ACCLRUCacheNode *_tail;
    unsigned long long _length;
}

@property (retain, nonatomic) ACCLRUCacheNode *head;
@property (retain, nonatomic) ACCLRUCacheNode *tail;
@property (nonatomic) unsigned long long length;

- (void)insertToFirst:(id)arg0;
- (id)removeLast;
- (id)head;
- (void)setHead:(id)arg0;
- (id)tail;
- (id)init;
- (void)setLength:(unsigned long long)arg0;
- (void).cxx_destruct;
- (unsigned long long)length;
- (id)remove:(id)arg0;
- (id)description;
- (void)add:(id)arg0;
- (void)setTail:(id)arg0;

@end
