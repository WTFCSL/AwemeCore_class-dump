//
//     Generated by private class-dump
//

@protocol NSObject;

@interface LSWeakProxy : NSObject {
    id<NSObject> _weakObject;
}

@property (weak, nonatomic) id<NSObject> weakObject;

+ (id)LS_GET_WEAK_ASSOCIATE:(id)arg0 withKey:(const void *)arg1;

- (void).cxx_destruct;
- (void)setWeakObject:(id)arg0;
- (id)weakObject;

@end
