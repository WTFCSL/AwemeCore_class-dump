//
//     Generated by private class-dump
//

@interface AWECommerceTask : NSObject {
    id /* block */ _taskRunner;
    unsigned long long _taskTypeMask;
}

@property (copy, nonatomic) id /* block */ taskRunner;
@property (nonatomic) unsigned long long taskTypeMask;

- (void)setTaskTypeMask:(unsigned long long)arg0;
- (void)setTaskRunner:(id /* block */)arg0;
- (id /* block */)taskRunner;
- (unsigned long long)taskTypeMask;
- (void).cxx_destruct;

@end
