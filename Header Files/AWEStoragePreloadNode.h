//
//     Generated by private class-dump
//

@class NSString, AWEStorage;

@interface AWEStoragePreloadNode : NSObject {
    AWEStorage *_storage;
    NSString *_key;
    NSString *_valueClass;
}

@property (retain, nonatomic) AWEStorage *storage;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *valueClass;

- (id)initWithStorage:(id)arg0 key:(id)arg1 valueClass:(id)arg2;
- (void)setStorage:(id)arg0;
- (id)key;
- (void).cxx_destruct;
- (id)storage;
- (id)valueClass;
- (void)setKey:(id)arg0;
- (void)setValueClass:(id)arg0;

@end
