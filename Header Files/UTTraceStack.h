//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface UTTraceStack : NSObject {
    NSMutableArray *mTraceStack;
    int _capacity;
}

@property int capacity;

+ (id)defaultInstance;

- (void)addTrace:(id)arg0;
- (id)getTraceStack;
- (int)capacity;
- (id)init;
- (void)setCapacity:(int)arg0;
- (void).cxx_destruct;

@end
