//
//     Generated by private class-dump
//

@protocol AWEListModelSliceProtocol <NSObject>

@property (copy, nonatomic) id /* block */ sliceDoneBlock;

- (long long)sliceCount;
- (void)setSliceDoneBlock:(id /* block */)arg0;
- (id /* block */)sliceDoneBlock;
- (id)sliceModelWithJsonDictionary:(id)arg0 sliceDoneComplete:(id /* block */)arg1;

@end
