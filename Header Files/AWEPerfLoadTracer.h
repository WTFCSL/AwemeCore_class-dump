//
//     Generated by private class-dump
//

@interface AWEPerfLoadTracer : NSObject {
    BOOL reportEnabled;
}

+ (id)sharedTracer;
+ (BOOL)isEnabled;

- (id)beginWithName:(id)arg0 builder:(id /* block */)arg1;
- (void)reportTrace:(id)arg0;
- (id)init;

@end