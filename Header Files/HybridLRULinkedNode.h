//
//     Generated by private class-dump
//

@interface HybridLRULinkedNode : NSObject {
    id _key;
    id _value;
    HybridLRULinkedNode *_prev;
    HybridLRULinkedNode *_next;
}

@property (retain, nonatomic) id key;
@property (retain, nonatomic) id value;
@property (weak, nonatomic) HybridLRULinkedNode *prev;
@property (weak, nonatomic) HybridLRULinkedNode *next;

- (id)next;
- (id)key;
- (void)setNext:(id)arg0;
- (void).cxx_destruct;
- (id)value;
- (void)setPrev:(id)arg0;
- (id)prev;
- (void)setKey:(id)arg0;
- (id)initWithKey:(id)arg0 value:(id)arg1;
- (void)setValue:(id)arg0;

@end