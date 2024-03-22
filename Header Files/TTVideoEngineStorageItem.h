//
//     Generated by private class-dump
//

@class NSString, NSData;

@interface TTVideoEngineStorageItem : NSObject {
    int _size;
    int _modTime;
    int _accessTime;
    NSString *_key;
    NSData *_value;
}

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSData *value;
@property (nonatomic) int size;
@property (nonatomic) int modTime;
@property (nonatomic) int accessTime;

- (id)key;
- (void).cxx_destruct;
- (id)value;
- (int)modTime;
- (int)accessTime;
- (void)setKey:(id)arg0;
- (void)setModTime:(int)arg0;
- (int)size;
- (void)setSize:(int)arg0;
- (void)setValue:(id)arg0;
- (void)setAccessTime:(int)arg0;

@end