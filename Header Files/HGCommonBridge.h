//
//     Generated by private class-dump
//

@class NSMapTable;

@interface HGCommonBridge : NSObject <NSCopying> {
    NSMapTable *_jMethods;
    NSMapTable *_jTagets;
}

@property (retain) NSMapTable *jMethods;
@property (retain) NSMapTable *jTagets;

+ (id)sharedBridge;

- (id)invoke:(id)arg0;
- (id)jTagets;
- (id)jMethods;
- (id)instanceOfModule:(Class)arg0;
- (void)setJMethods:(id)arg0;
- (void)setJTagets:(id)arg0;
- (void)registerModule:(Class)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;

@end
