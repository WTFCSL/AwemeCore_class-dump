//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface IESECSliceXElementIteratorInfo : NSObject {
    unsigned long long _startIndex;
    unsigned long long _endIndex;
    NSArray *_items;
    NSString *_itemName;
    NSString *_indexName;
}

@property (nonatomic) unsigned long long startIndex;
@property (nonatomic) unsigned long long endIndex;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSString *itemName;
@property (retain, nonatomic) NSString *indexName;

- (id)getItemAtIndex:(unsigned long long)arg0;
- (void)setIndexName:(id)arg0;
- (unsigned long long)startIndex;
- (void)setItems:(id)arg0;
- (void)setStartIndex:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)items;
- (id)itemName;
- (id)indexName;
- (unsigned long long)endIndex;
- (void)setEndIndex:(unsigned long long)arg0;
- (void)setItemName:(id)arg0;

@end
