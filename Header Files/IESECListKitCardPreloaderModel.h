//
//     Generated by private class-dump
//

@class NSString;

@interface IESECListKitCardPreloaderModel : NSObject {
    unsigned long long _count;
    unsigned long long _engineType;
    unsigned long long _itemType;
    NSString *_schema;
    struct CGSize { double width; double height; } _viewSize;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (nonatomic) unsigned long long engineType;
@property (nonatomic) unsigned long long itemType;
@property (copy, nonatomic) NSString *schema;

- (void)setSchema:(id)arg0;
- (void)setCount:(unsigned long long)arg0;
- (unsigned long long)itemType;
- (void)setItemType:(unsigned long long)arg0;
- (unsigned long long)engineType;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })viewSize;
- (unsigned long long)count;
- (id)schema;
- (void)setEngineType:(unsigned long long)arg0;
- (void)setViewSize:(struct CGSize { double x0; double x1; })arg0;

@end
