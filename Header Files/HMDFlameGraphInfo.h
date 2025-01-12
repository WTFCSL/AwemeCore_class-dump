//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSDictionary, NSMutableSet, NSArray;

@interface HMDFlameGraphInfo : NSObject {
    BOOL _isBinaryLoad;
    NSArray *_backtraces;
    NSDictionary *_binaryMap;
    NSMutableDictionary *_cpuArchMap;
    NSMutableSet *_imageNameSet;
}

@property (copy, nonatomic) NSDictionary *binaryMap;
@property (nonatomic) BOOL isBinaryLoad;
@property (retain, nonatomic) NSMutableDictionary *cpuArchMap;
@property (retain, nonatomic) NSMutableSet *imageNameSet;
@property (copy, nonatomic) NSArray *backtraces;

- (id)binaryMap;
- (id)getCPUArchWithMajor:(int)arg0 minor:(int)arg1;
- (void)setIsBinaryLoad:(BOOL)arg0;
- (void)setBinaryMap:(id)arg0;
- (id)cpuArchMap;
- (void)setCpuArchMap:(id)arg0;
- (void)setImageNameSet:(id)arg0;
- (id)imageNameSet;
- (BOOL)isBinaryLoad;
- (void)loadBinaryImage;
- (id)getBinaryImagesWithBinaryImages:(id)arg0;
- (void)defaultInitialize;
- (void)setupWithParams:(void *)arg0;
- (id)initWithBacktraces:(void *)arg0;
- (id)reportArray;
- (id)reportImages;
- (void)setBacktraces:(id)arg0;
- (void).cxx_destruct;
- (id)backtraces;

@end
