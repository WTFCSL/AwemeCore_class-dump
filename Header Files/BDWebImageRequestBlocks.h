//
//     Generated by private class-dump
//

@interface BDWebImageRequestBlocks : NSObject {
    id /* block */ _progressBlock;
    id /* block */ _completedBlock;
    id /* block */ _decryptBlock;
}

@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completedBlock;
@property (copy, nonatomic) id /* block */ decryptBlock;

- (void)setCompletedBlock:(id /* block */)arg0;
- (void)setDecryptBlock:(id /* block */)arg0;
- (id /* block */)completedBlock;
- (id /* block */)decryptBlock;
- (void).cxx_destruct;
- (void)setProgressBlock:(id /* block */)arg0;
- (id /* block */)progressBlock;

@end
