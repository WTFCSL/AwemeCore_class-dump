//
//     Generated by private class-dump
//

@class NSString;

@interface TMBodyStructDescription : NSObject {
    unsigned long long _type;
    NSString *_key;
    TMBodyStructDescription *_child;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) TMBodyStructDescription *child;

- (id)key;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)child;
- (void)setKey:(id)arg0;
- (void)setType:(unsigned long long)arg0;
- (void)setChild:(id)arg0;

@end
