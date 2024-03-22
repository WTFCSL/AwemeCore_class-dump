//
//     Generated by private class-dump
//

@class NSString;

@interface IESECSliceXElementIterator : IESECSliceXBaseModel <IESECSliceXJSONSerializing> {
    NSString *_start;
    NSString *_end;
    NSString *_items;
    NSString *_item;
    NSString *_index;
}

@property (retain, nonatomic) NSString *start;
@property (retain, nonatomic) NSString *end;
@property (retain, nonatomic) NSString *items;
@property (retain, nonatomic) NSString *item;
@property (retain, nonatomic) NSString *index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertyKeyWithJSONKey;

- (id)getIteratorWithData:(id)arg0;
- (void)setEnd:(id)arg0;
- (id)end;
- (id)item;
- (void)setIndex:(id)arg0;
- (void)setItems:(id)arg0;
- (void)setStart:(id)arg0;
- (void).cxx_destruct;
- (id)items;
- (id)index;
- (id)start;
- (void)setItem:(id)arg0;

@end