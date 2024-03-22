//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface AWEEcomEventObject : NSObject {
    NSMutableDictionary *_params;
    NSString *_event;
    id /* block */ _enterFrom;
    id /* block */ _enterFromSecond;
    id /* block */ _mergeDict;
    id /* block */ _addKeyPair;
    id /* block */ _send;
}

@property (retain, nonatomic) NSMutableDictionary *params;
@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) id /* block */ enterFrom;
@property (copy, nonatomic) id /* block */ enterFromSecond;
@property (copy, nonatomic) id /* block */ mergeDict;
@property (copy, nonatomic) id /* block */ addKeyPair;
@property (copy, nonatomic) id /* block */ send;

- (void)setEnterFrom:(id /* block */)arg0;
- (id /* block */)enterFrom;
- (id /* block */)enterFromSecond;
- (void)setEnterFromSecond:(id /* block */)arg0;
- (id /* block */)mergeDict;
- (void)setMergeDict:(id /* block */)arg0;
- (id /* block */)addKeyPair;
- (void)setAddKeyPair:(id /* block */)arg0;
- (id /* block */)send;
- (void)setEvent:(id)arg0;
- (id)event;
- (void).cxx_destruct;
- (id)initWithEvent:(id)arg0;
- (id)params;
- (void)setParams:(id)arg0;
- (void)setSend:(id /* block */)arg0;

@end