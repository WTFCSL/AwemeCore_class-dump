//
//     Generated by private class-dump
//

@class NSString;

@interface SECRESimpleFunc : BDREFunc {
    NSString *_name;
    id /* block */ _executor;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ executor;

- (id)initWithName:(id)arg0 executor:(id /* block */)arg1;
- (void).cxx_destruct;
- (id /* block */)executor;
- (id)execute:(id)arg0 error:(id *)arg1;
- (id)symbol;
- (void)setName:(id)arg0;
- (id)name;
- (void)setExecutor:(id /* block */)arg0;

@end
