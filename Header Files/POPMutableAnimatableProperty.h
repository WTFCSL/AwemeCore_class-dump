//
//     Generated by private class-dump
//

@class NSString;

@interface POPMutableAnimatableProperty : POPAnimatableProperty {
    NSString *name;
    id /* block */ readBlock;
    id /* block */ writeBlock;
    double threshold;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ readBlock;
@property (copy, nonatomic) id /* block */ writeBlock;
@property (nonatomic) double threshold;

- (double)threshold;
- (void).cxx_destruct;
- (void)setName:(id)arg0;
- (void)setThreshold:(double)arg0;
- (id)name;
- (id /* block */)writeBlock;
- (id /* block */)readBlock;
- (void)setReadBlock:(id /* block */)arg0;
- (void)setWriteBlock:(id /* block */)arg0;

@end